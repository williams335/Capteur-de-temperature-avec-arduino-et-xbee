## Capteur de temperature avec arduino et xbee

# Tâche à réaliser : Capter et renvoyer la température dès qu’on appuis sur un bouton
# Composants misent en jeu:
Un arduino

Un shield

Un bouton

Une résistance

Un Capteur de température lm 35

Un Zigbee
# Explications:
L’objectif ici, était de capter la température dans un environnement quelconque et dès l’appuis sur un bouton que nous avons ajouté,  de l’envoyer (la température) vers un xbee.
Pour ce faire, nous avons procédé première au montage du capteur de température. En effet, nous avons choisi un capteur de température LM35 car étant le capteur à notre disposition.
Après avoir choisi le capteur, nous avons procédé au montage avec la carte arduino. Tout à parfaitement fonctionné et nous avons ainsi pu capter la température. 
L’étape suivante était de l’envoyer au Xbee; c’est la partie où nous avons rencontré le plus de difficultés, dû premièrement à la configuration du Xbee et deuxièmement à une défaillance de celui-ci. Ainsi, pour résoudre ces problèmes, nous avons changé de Xbee et refait sa configuration, ce qui s’est parfaitement déroulé et permit de résoudre le problème.
Enfin, nous avons installé un bouton sur l’arduino pour que dès l’appui sur celui-ci, l’envoie de la température vers le Xbee s’effectue. Voici la dernière instruction de cet envoie “06 01 20” où 06 était le groupe d’émission, 01 le groupe de réception de la température et 20, par exemple, pour la température. Cette partie s’est bien déroulé dans l’ensemble. Vous trouverez ci-dessous les photos du montage et en annexe le code arduino.




