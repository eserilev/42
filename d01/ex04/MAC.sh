ifconfig -a  | grep -e "ether " | sed "s/ether//" |  awk '{$1=$1;print}'

