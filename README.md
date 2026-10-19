# 🏡 Smart House - Système IoT Embarqué Arduino

Ce projet consiste en la conception et la simulation d'un système domotique pour une **Maison Intelligente (Smart House)** développé sur la plateforme Tinkercad avec un microcontrôleur **Arduino Uno R3**.

---

## 📸 Aperçu du Circuit & Démo Vidéo

### Le Circuit Électronique
![Circuit Smart House](Zaak%20%281%29.png)

### 🎥 Démonstration de la Simulation (Vidéo)
> [!TIP]
> Vous pouvez visionner la vidéo de démonstration complète du fonctionnement de la maison connectée en ouvrant le fichier présent dans ce dépôt :
> 🔗 **[Cliquez ici pour voir la vidéo de démonstration (smiluation arduino .mp4)](smiluation%20arduino%20.mp4)**

### 📝 Description du scénario de la vidéo :
La vidéo présente une simulation en temps réel des fonctionnalités automatisées de l'habitat :
1. **Initialisation et Cycle Horaire** : L'écran LCD affiche en continu l'heure virtuelle. Le système bascule automatiquement les états de sécurité (LED Rouge/Verte et angles du Servomoteur) selon que la maison passe en mode jour ou en mode nuit.
2. **Gestion des Alertes de Sécurité (Fuite de Gaz)** : Une simulation d'émanation de gaz (nuage de fumée) approche du capteur de gaz. Dès que le seuil de tolérance analogique est dépassé, l'élément piézoélectrique (Buzzer) s'active instantanément pour émettre un signal sonore strident d'alarme.
3. **Sécurisation Nocturne (Détection de Mouvement)** : Lors de l'activation d'un mouvement simulé devant le capteur infrarouge passif (PIR) pendant les heures de nuit (entre 20h et 7h), la LED blanche (éclairage d'appoint) s'allume immédiatement pour éclairer la zone.

---

## 🚀 Fonctionnalités Clés

* **⏱️ Horloge Temps Réel (Affichage LCD)** : Gestion logicielle dynamique du temps (Format AM/PM) affichée sur un écran LCD 16x2.
* **🚨 Sécurité Incendie & Fuite de Gaz** : Surveillance continue par un capteur de gaz. En cas de détection (> 100), une alerte sonore est immédiatement déclenchée via un élément piézoélectrique (Buzzer).
* **🔒 Contrôle d'Accès Automatisé** : Automatisation d'un servomoteur simulant le verrouillage des accès (Actif en mode nuit entre 20h et 7h) couplé à des indicateurs visuels (LED Verte / LED Rouge).
* **💡 Éclairage Intelligent (Détection de Mouvement)** : Activation automatique d'une lumière d'appoint (LED Blanche) lorsqu'un mouvement nocturne est détecté par le capteur infrarouge passif (PIR).

## 📊 Détails et Logique du Code

Le fichier `main.ino` gère l'ensemble des composants grâce à une boucle principale optimisée :
1. **Incrémentation temporelle** : Une fonction simule le passage des secondes, minutes et heures à l'aide d'un `delay(1000)` et met à jour l'écran LCD.
2. **Vérification horaire** : Le système bascule automatiquement les verrous (Servomoteur à 0° ou 90°) et les lumières de sécurité (LED rouge/verte) selon l'heure virtuelle.
3. **Gestion des interruptions capteurs** : Les états du capteur PIR (mouvement) et du capteur de gaz (analogique) sont lus à chaque cycle pour adapter les sorties instantanément (Buzzer et LED blanche).

## 🛠️ Composants Matériels Utilisés

* 1x Arduino Uno R3
* 1x Écran LCD 16x2
* 1x Capteur Infrarouge Passif (PIR)
* 1x Capteur de Gaz
* 1x Micro Servomoteur positionnel
* 1x Élément Piézoélectrique (Buzzer)
* 3x LED (Rouge, Verte, Blanche)
* Résistances (150 Ω, 220 Ω, 1 kΩ)

## 💻 Environnement de Développement

* **Langage :** C++ / Arduino Core
* **Outil de Conception :** Tinkercad Circuits
