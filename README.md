# 🏡 Smart House - Système IoT Embarqué Arduino

Ce projet consiste en la conception et la simulation d'un système domotique pour une **Maison Intelligente (Smart House)** développé sur la plateforme Tinkercad avec un microcontrôleur **Arduino Uno R3**.

## 🚀 Fonctionnalités Clés

* **⏱️ Horloge Temps Réel (Affichage LCD)** : Gestion logicielle dynamique du temps (Format AM/PM) affichée sur un écran LCD 16x2.
* **🚨 Sécurité Incendie & Fuite de Gaz** : Surveillance continue par un capteur de gaz. En cas de détection (> 100), une alerte sonore est immédiatement déclenchée via un élément piézoélectrique (Buzzer).
* **🔒 Contrôle d'Accès Automatisé** : Automatisation d'un servomoteur simulant le verrouillage des accès (Actif en mode nuit entre 20h et 7h) couplé à des indicateurs visuels (LED Verte / LED Rouge).
* **💡 Éclairage Intelligent (Détection de Mouvement)** : Activation automatique d'une lumière d'appoint (LED Blanche) lorsqu'un mouvement nocturne est détecté par le capteur infrarouge passif (PIR).

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
