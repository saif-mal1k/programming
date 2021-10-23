void ODBCexample()
{
    RETCODE error;
    HENV env; /* environment */
    HDBC conn; /* database connection */

    SQLAllocEnv(&env);
    SQLAllocConnect(env,&conn);
    SQLConnect("db.yale.edu",SQL_NTS,"avi",SQL_NTS,"avipassword",SQL_NTS);

    {
        char branchname[80];
        float balance;
        int lenOut1,lenOut2;
        HSTMT stmt;

        char * sqlquery = "select branch_name,sum(balance) from account group by branch_name";
        SQLAllocStmt(conn,&stmt);
        error = SQLExecDirect(stmt,sqlquery,SQL_NTS);

        if(error == SQL_SUCCESS)
        {
            SQLBindCol(stmt,1,SQL_C_CHAR,branchname,80,&lenOut1);
            SQLBindCol(stmt,2,SQL_C_FLOAT,balance,0,&lenOut2);
            while(SQLFetch(stmt) == SQL_SUCCESS)
            {
                printf("%s%g\n",branchname,balance);
            }
        }
        SQLFreeStmt(stmt,SQL_DROP);
    }
    SQLDisconnect(conn);
    SQLFreeConnect(conn);
    SQLFreeEnv(env);
}
