def multi_word_search(doc_list, keywords):
    """
    Takes list of documents (each document is a string) and a list of keywords.  
    Returns a dictionary where each key is a keyword, and the value is a list of indices
    (from doc_list) of the documents containing that keyword

    >>> doc_list = ["The Learn Python Challenge Casino.", "They bought a car and a casino", "Casinoville"]
    >>> keywords = ['casino', 'they']
    >>> multi_word_search(doc_list, keywords)
    {'casino': [0, 1], 'they': [1]}
    """
    
    dict = {} 
    for keyword in keywords:
        dict[keyword] = []
        
    for keyword in dict.keys():
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
                dict[keyword].append(doc_list.index(doc))
                                                                        
    return dict                                                                                                                        
    pass