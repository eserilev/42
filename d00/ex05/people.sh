ldapsearch -S cn  -LLL "(uid=z*)" cn | grep  -v "^dn:" | grep -v "^$"| tail -r
