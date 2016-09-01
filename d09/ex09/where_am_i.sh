CMD=`ifconfig | grep "inet " | cut -d' ' -f2`
NUM=`ifconfig | grep "inet " | cut -d' ' -f2 | wc -l | tr -d ' '`

if [ "$NUM" -eq "0rm -" ]; then
	echo "Je suis perdu!"
else
	echo "$CMD"
fi