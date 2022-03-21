#!/bin/bash
cat Day02/passwd | sed -e 's/theo1/Wile E. Coyote/' | grep 'Wile E. Coyote'
cat Day02/passwd | sed -e 's/steven1/Daffy Duck/' | grep 'Daffy Duck'
cat Day02/passwd | sed -e 's/arnaud1/Porky Pig/' | grep 'Porky Pig'
cat Day02/passwd | sed -e 's/pierre-jean/Marvin the Martian/' | grep 'Marvin the Martian'
exit
