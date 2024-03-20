{"payload":{"allShortcutsEnabled":true,"fileTree":{"":{"items":[{"name":"OS 1st question.png","path":"OS 1st question.png","contentType":"file"},{"name":"OS 2^nd question","path":"OS 2^nd question","contentType":"file"},{"name":"OS 3^rd Question","path":"OS 3^rd Question","contentType":"file"},{"name":"OS21.txt","path":"OS21.txt","contentType":"file"},{"name":"OS22.txt","path":"OS22.txt","contentType":"file"},{"name":"OS23.txt","path":"OS23.txt","contentType":"file"},{"name":"OS24.txt","path":"OS24.txt","contentType":"file"},{"name":"OS25.txt","path":"OS25.txt","contentType":"file"},{"name":"OS26.txt","path":"OS26.txt","contentType":"file"},{"name":"OS27.txt","path":"OS27.txt","contentType":"file"},{"name":"OS28.txt","path":"OS28.txt","contentType":"file"},{"name":"OS29.txt","path":"OS29.txt","contentType":"file"},{"name":"OS30.txt","path":"OS30.txt","contentType":"file"},{"name":"code 10.txt","path":"code 10.txt","contentType":"file"},{"name":"code 4.txt","path":"code 4.txt","contentType":"file"},{"name":"code 5.txt","path":"code 5.txt","contentType":"file"},{"name":"code 6.txt","path":"code 6.txt","contentType":"file"},{"name":"code 7.txt","path":"code 7.txt","contentType":"file"},{"name":"code 8.txt","path":"code 8.txt","contentType":"file"},{"name":"code 9.txt","path":"code 9.txt","contentType":"file"},{"name":"os prog-11.cpp","path":"os prog-11.cpp","contentType":"file"},{"name":"os prog-12.cpp","path":"os prog-12.cpp","contentType":"file"},{"name":"os prog-13.cpp","path":"os prog-13.cpp","contentType":"file"},{"name":"os prog-14.cpp","path":"os prog-14.cpp","contentType":"file"},{"name":"os prog-15.cpp","path":"os prog-15.cpp","contentType":"file"},{"name":"os prog-16.cpp","path":"os prog-16.cpp","contentType":"file"},{"name":"os prog-17.cpp","path":"os prog-17.cpp","contentType":"file"},{"name":"os prog-18.cpp","path":"os prog-18.cpp","contentType":"file"},{"name":"os prog-19.cpp","path":"os prog-19.cpp","contentType":"file"},{"name":"os prog-20.cpp","path":"os prog-20.cpp","contentType":"file"},{"name":"os prog-31.cpp","path":"os prog-31.cpp","contentType":"file"},{"name":"os prog-32.cpp","path":"os prog-32.cpp","contentType":"file"},{"name":"os prog-33.cpp","path":"os prog-33.cpp","contentType":"file"},{"name":"os prog-34.cpp","path":"os prog-34.cpp","contentType":"file"},{"name":"os prog-35.cpp","path":"os prog-35.cpp","contentType":"file"},{"name":"os prog-36.cpp","path":"os prog-36.cpp","contentType":"file"},{"name":"os prog-37.cpp","path":"os prog-37.cpp","contentType":"file"},{"name":"os prog-38.cpp","path":"os prog-38.cpp","contentType":"file"},{"name":"os prog-39.cpp","path":"os prog-39.cpp","contentType":"file"},{"name":"os prog-40.cpp","path":"os prog-40.cpp","contentType":"file"}],"totalCount":40}},"fileTreeProcessingTime":3.7314230000000004,"foldersToFetch":[],"repo":{"id":771364887,"defaultBranch":"main","name":"CSA0403-Operating-Systems","ownerLogin":"karthikreddy06","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2024-03-13T12:27:18.000+05:30","ownerAvatar":"https://avatars.githubusercontent.com/u/160814789?v=4","public":true,"private":false,"isOrgOwned":false},"codeLineWrapEnabled":false,"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1710852269.0","canEdit":true,"refType":"branch","currentOid":"16e025670a1651938a6ae7782daa70f8e382427c"},"path":"os prog-12.cpp","currentUser":{"id":132541729,"login":"sekhar7888","userEmail":"sekhargoud163@gmail.com"},"blob":{"rawLines":["#include <stdio.h>\r","#include <stdlib.h>\r","#include <pthread.h>\r","#include <unistd.h>\r","\r","#define NUM_PHILOSOPHERS 5\r","#define LEFT (id + NUM_PHILOSOPHERS - 1) % NUM_PHILOSOPHERS\r","#define RIGHT (id + 1) % NUM_PHILOSOPHERS\r","#define EATING_TIME 2\r","#define THINKING_TIME 1\r","\r","pthread_mutex_t forks[NUM_PHILOSOPHERS];\r","\r","void *philosopher(void *arg) {\r","int id = *(int *)arg;\r","\r","while (1) {\r","printf(\"Philosopher %d is thinking\\n\", id);\r","sleep(THINKING_TIME);\r","\r","printf(\"Philosopher %d is hungry\\n\", id);\r","pthread_mutex_lock(&forks[LEFT]);\r","pthread_mutex_lock(&forks[id]);\r","\r","printf(\"Philosopher %d is eating\\n\", id);\r","sleep(EATING_TIME);\r","\r","pthread_mutex_unlock(&forks[id]);\r","pthread_mutex_unlock(&forks[LEFT]);\r","}\r","\r","return NULL;\r","}\r","\r","int main() {\r","pthread_t threads[NUM_PHILOSOPHERS];\r","int ids[NUM_PHILOSOPHERS];\r","\r","\r","for (int i = 0; i < NUM_PHILOSOPHERS; i++) {\r","pthread_mutex_init(&forks[i], NULL);\r","}\r","\r","\r","for (int i = 0; i < NUM_PHILOSOPHERS; i++) {\r","ids[i] = i;\r","if (pthread_create(&threads[i], NULL, philosopher, &ids[i]) != 0) {\r","perror(\"pthread_create\");\r","exit(EXIT_FAILURE);\r","}\r","}\r","\r","\r","for (int i = 0; i < NUM_PHILOSOPHERS; i++) {\r","if (pthread_join(threads[i], NULL) != 0) {\r","perror(\"pthread_join\");\r","exit(EXIT_FAILURE);\r","}\r","}\r","\r","\r","for (int i = 0; i < NUM_PHILOSOPHERS; i++) {\r","pthread_mutex_destroy(&forks[i]);\r","}\r","\r","return 0;\r","}"],"stylingDirectives":[[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":17,"end":18,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":18,"end":19,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":20,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":19,"end":20,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":18,"end":19,"cssClass":"pl-pds"}],[],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":24,"cssClass":"pl-en"},{"start":25,"end":26,"cssClass":"pl-c1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":12,"cssClass":"pl-en"},{"start":38,"end":39,"cssClass":"pl-c1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":13,"cssClass":"pl-en"},{"start":20,"end":21,"cssClass":"pl-c1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":19,"cssClass":"pl-en"},{"start":20,"end":21,"cssClass":"pl-c1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":21,"cssClass":"pl-en"},{"start":22,"end":23,"cssClass":"pl-c1"}],[],[{"start":0,"end":15,"cssClass":"pl-c1"}],[],[{"start":0,"end":4,"cssClass":"pl-k"},{"start":6,"end":17,"cssClass":"pl-en"},{"start":18,"end":22,"cssClass":"pl-k"}],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":11,"end":14,"cssClass":"pl-k"}],[],[{"start":0,"end":5,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":0,"end":6,"cssClass":"pl-c1"},{"start":7,"end":37,"cssClass":"pl-s"},{"start":7,"end":8,"cssClass":"pl-pds"},{"start":34,"end":36,"cssClass":"pl-cce"},{"start":36,"end":37,"cssClass":"pl-pds"}],[{"start":0,"end":5,"cssClass":"pl-c1"}],[],[{"start":0,"end":6,"cssClass":"pl-c1"},{"start":7,"end":35,"cssClass":"pl-s"},{"start":7,"end":8,"cssClass":"pl-pds"},{"start":32,"end":34,"cssClass":"pl-cce"},{"start":34,"end":35,"cssClass":"pl-pds"}],[{"start":0,"end":18,"cssClass":"pl-c1"}],[{"start":0,"end":18,"cssClass":"pl-c1"}],[],[{"start":0,"end":6,"cssClass":"pl-c1"},{"start":7,"end":35,"cssClass":"pl-s"},{"start":7,"end":8,"cssClass":"pl-pds"},{"start":32,"end":34,"cssClass":"pl-cce"},{"start":34,"end":35,"cssClass":"pl-pds"}],[{"start":0,"end":5,"cssClass":"pl-c1"}],[],[{"start":0,"end":20,"cssClass":"pl-c1"}],[{"start":0,"end":20,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":11,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":4,"end":8,"cssClass":"pl-en"}],[{"start":0,"end":9,"cssClass":"pl-c1"}],[{"start":0,"end":3,"cssClass":"pl-k"}],[],[],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":5,"end":8,"cssClass":"pl-k"},{"start":13,"end":14,"cssClass":"pl-c1"}],[{"start":0,"end":18,"cssClass":"pl-c1"},{"start":30,"end":34,"cssClass":"pl-c1"}],[],[],[],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":5,"end":8,"cssClass":"pl-k"},{"start":13,"end":14,"cssClass":"pl-c1"}],[],[{"start":0,"end":2,"cssClass":"pl-k"},{"start":4,"end":18,"cssClass":"pl-c1"},{"start":32,"end":36,"cssClass":"pl-c1"},{"start":63,"end":64,"cssClass":"pl-c1"}],[{"start":0,"end":6,"cssClass":"pl-c1"},{"start":7,"end":23,"cssClass":"pl-s"},{"start":7,"end":8,"cssClass":"pl-pds"},{"start":22,"end":23,"cssClass":"pl-pds"}],[{"start":0,"end":4,"cssClass":"pl-c1"}],[],[],[],[],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":5,"end":8,"cssClass":"pl-k"},{"start":13,"end":14,"cssClass":"pl-c1"}],[{"start":0,"end":2,"cssClass":"pl-k"},{"start":4,"end":16,"cssClass":"pl-c1"},{"start":29,"end":33,"cssClass":"pl-c1"},{"start":38,"end":39,"cssClass":"pl-c1"}],[{"start":0,"end":6,"cssClass":"pl-c1"},{"start":7,"end":21,"cssClass":"pl-s"},{"start":7,"end":8,"cssClass":"pl-pds"},{"start":20,"end":21,"cssClass":"pl-pds"}],[{"start":0,"end":4,"cssClass":"pl-c1"}],[],[],[],[],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":5,"end":8,"cssClass":"pl-k"},{"start":13,"end":14,"cssClass":"pl-c1"}],[{"start":0,"end":21,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[]],"colorizedLines":null,"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/karthikreddy06/CSA0403-Operating-Systems/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":false},"displayName":"os prog-12.cpp","displayUrl":"https://github.com/karthikreddy06/CSA0403-Operating-Systems/blob/main/os%20prog-12.cpp?raw=true","headerInfo":{"blobSize":"1.3 KB","deleteTooltip":"Fork this repository and delete the file","editTooltip":"Fork this repository and edit the file","ghDesktopPath":"https://desktop.github.com","isGitLfs":false,"onBranch":true,"shortPath":"a3ac871","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fkarthikreddy06%2FCSA0403-Operating-Systems%2Fblob%2Fmain%2Fos%2520prog-12.cpp","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"67","truncatedSloc":"49"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplate":null,"discussionTemplate":null,"language":"C++","languageID":43,"large":false,"planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/karthikreddy06/CSA0403-Operating-Systems/blob/main/os%20prog-12.cpp","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","releasePath":"/karthikreddy06/CSA0403-Operating-Systems/releases/new?marketplace=true","showPublishActionBanner":false},"rawBlobUrl":"https://github.com/karthikreddy06/CSA0403-Operating-Systems/raw/main/os%20prog-12.cpp","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"symbolsEnabled":true,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timed_out":false,"not_analyzed":false,"symbols":[{"name":"main","kind":"function","ident_start":731,"ident_end":735,"extent_start":727,"extent_end":1332,"fully_qualified_name":"main","ident_utf16":{"start":{"line_number":34,"utf16_col":4},"end":{"line_number":34,"utf16_col":8}},"extent_utf16":{"start":{"line_number":34,"utf16_col":0},"end":{"line_number":67,"utf16_col":0}}}]}},"copilotInfo":{"documentationUrl":"https://docs.github.com/copilot/overview-of-github-copilot/about-github-copilot-for-individuals","notices":{"codeViewPopover":{"dismissed":false,"dismissPath":"/settings/dismiss-notice/code_view_copilot_popover"}},"userAccess":{"hasSubscriptionEnded":false,"orgHasCFBAccess":false,"userHasCFIAccess":false,"userHasOrgs":false,"userIsOrgAdmin":false,"userIsOrgMember":false,"business":null,"featureRequestInfo":null}},"copilotAccessAllowed":false,"csrf_tokens":{"/karthikreddy06/CSA0403-Operating-Systems/branches":{"post":"vVzN84uS57hjwZmI4SOcCe5QeKkYAK4Uf0d7DO9KHMY4dYECwaGnR8LfHzxJOt8FVFGwzYoge564yTxFYAAuBg"},"/repos/preferences":{"post":"JsrmEWZuu639ydG7PWvVENXafnlxOOjWsvQ19MUmWK-kpEP-9O_DiKL8dV_DIBIFqPqclTJmdd4Uh7AUUpGdgQ"}}},"title":"CSA0403-Operating-Systems/os prog-12.cpp at main · karthikreddy06/CSA0403-Operating-Systems"}