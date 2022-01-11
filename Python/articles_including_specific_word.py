def word_search(doc_list, keyword):
    """
    Takes a list of documents (each document is a string) and a keyword. 
    Returns list of the index values into the original list for all documents 
    containing the keyword.

    Example:
    doc_list = ["The Learn Python Challenge Casino.", "They bought a car", "Casinoville"]
    >>> word_search(doc_list, 'casino')
    >>> [0]
    """
    list = []
    for doc in doc_list:
        index = (doc.lower()).find(keyword.lower())
        if index > 0:
            c1 = (doc[index-1] == "" or doc[index-1] == " " or doc[index-1] == "\"" )
        else:
            c1 = True
        if index+len(keyword) < len(doc):
            c2 = (doc[index+len(keyword)] ==" " or doc[index+len(keyword)] =="." or doc[index+len(keyword)] == "," or doc[index+len(keyword)] =="\"")
        else:
            c2 = True
        if index != -1  and c1 and c2 : 
            list.append(doc_list.index(doc))
                                                                                                                                         
    return list
                                                                                                                                        
    pass


list = ['The Learn Python Challenge Casino', 'They bought a car, and a horse', 'Casinoville?', "He bought a casino. That's crazy."]

word_search(list,'bought')

>>> [1,3] // since only doc at index 1 and 3 contains word 'bought'