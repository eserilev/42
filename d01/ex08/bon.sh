ldapsearch -S cn  -L "(cn=*bon*)" ldapentrycount | awk '/numEntries: /{ print $3}'
