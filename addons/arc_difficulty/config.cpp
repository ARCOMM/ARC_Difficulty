class CfgPatches {
    class arc_difficulty {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.58;
        requiredAddons[] = {"ace_common"};
        author[]= {"Kingsley"};
        authorUrl = "https://github.com/jameslkingsley";
    };
};

class CfgDifficultyPresets {
    animSpeedCoef = 0;
    cancelThreshold = 0;
    defaultPreset = "Veteran";
    divingLimitMultiplier = 1;
    groupArmorCoef = 1.5;
    myArmorCoef = 1.5;
    recoilCoef = 1;
    showCadetHints = 1;
    showCadetWP = 1;
    visionAidCoef = 0.8;

    class Custom {
        description = "Custom difficulty set by the player.";
        displayName = "Custom";
        levelAI = "AILevelHigh";
        optionDescription = "Custom difficulty set by the player.";
        optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";

        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags= 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 0;
            stanceIndicator = 1;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 0;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };

    class Recruit {
        description = "Regular man who just enrolled into the army.";
        displayName = "Recruit";
        levelAI = "AILevelHigh";
        optionDescription = "Regular man who just enrolled into the army.";
        optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";

        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags= 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 0;
            stanceIndicator = 1;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 0;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };

    class Regular {
        description = "Just finished training, no real combat experience.";
        displayName = "Regular";
        levelAI = "AILevelHigh";
        optionDescription = "Just finished training, no real combat experience.";
        optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";

        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags= 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 0;
            stanceIndicator = 1;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 0;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };

    class Veteran {
        description = "Has survived several contacts with the enemy.";
        displayName = "Veteran";
        levelAI = "AILevelHigh";
        optionDescription = "Has survived several contacts with the enemy.";
        optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";

        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags= 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 0;
            stanceIndicator = 1;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 0;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };
};
