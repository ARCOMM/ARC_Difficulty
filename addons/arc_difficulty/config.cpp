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
    class Custom;
    class ARCOMM: Custom {
        displayName = "ARCOMM";
        description = "Custom difficulty for the ARCOMM community.";
        optionDescription = "Custom difficulty for the ARCOMM community.";
        levelAI = "AILevelHigh";
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
