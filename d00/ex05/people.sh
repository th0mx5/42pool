ldapsearch -Q -LLL "(uid=z*)" cn | grep cn | cut -d ':' -f 2 | sort -f -r | sed 's/ //'
