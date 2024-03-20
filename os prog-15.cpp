{"payload":{"allShortcutsEnabled":true,"fileTree":{"":{"items":[{"name":"OS 1st question.png","path":"OS 1st question.png","contentType":"file"},{"name":"OS 2^nd question","path":"OS 2^nd question","contentType":"file"},{"name":"OS 3^rd Question","path":"OS 3^rd Question","contentType":"file"},{"name":"OS21.txt","path":"OS21.txt","contentType":"file"},{"name":"OS22.txt","path":"OS22.txt","contentType":"file"},{"name":"OS23.txt","path":"OS23.txt","contentType":"file"},{"name":"OS24.txt","path":"OS24.txt","contentType":"file"},{"name":"OS25.txt","path":"OS25.txt","contentType":"file"},{"name":"OS26.txt","path":"OS26.txt","contentType":"file"},{"name":"OS27.txt","path":"OS27.txt","contentType":"file"},{"name":"OS28.txt","path":"OS28.txt","contentType":"file"},{"name":"OS29.txt","path":"OS29.txt","contentType":"file"},{"name":"OS30.txt","path":"OS30.txt","contentType":"file"},{"name":"code 10.txt","path":"code 10.txt","contentType":"file"},{"name":"code 4.txt","path":"code 4.txt","contentType":"file"},{"name":"code 5.txt","path":"code 5.txt","contentType":"file"},{"name":"code 6.txt","path":"code 6.txt","contentType":"file"},{"name":"code 7.txt","path":"code 7.txt","contentType":"file"},{"name":"code 8.txt","path":"code 8.txt","contentType":"file"},{"name":"code 9.txt","path":"code 9.txt","contentType":"file"},{"name":"os prog-11.cpp","path":"os prog-11.cpp","contentType":"file"},{"name":"os prog-12.cpp","path":"os prog-12.cpp","contentType":"file"},{"name":"os prog-13.cpp","path":"os prog-13.cpp","contentType":"file"},{"name":"os prog-14.cpp","path":"os prog-14.cpp","contentType":"file"},{"name":"os prog-15.cpp","path":"os prog-15.cpp","contentType":"file"},{"name":"os prog-16.cpp","path":"os prog-16.cpp","contentType":"file"},{"name":"os prog-17.cpp","path":"os prog-17.cpp","contentType":"file"},{"name":"os prog-18.cpp","path":"os prog-18.cpp","contentType":"file"},{"name":"os prog-19.cpp","path":"os prog-19.cpp","contentType":"file"},{"name":"os prog-20.cpp","path":"os prog-20.cpp","contentType":"file"},{"name":"os prog-31.cpp","path":"os prog-31.cpp","contentType":"file"},{"name":"os prog-32.cpp","path":"os prog-32.cpp","contentType":"file"},{"name":"os prog-33.cpp","path":"os prog-33.cpp","contentType":"file"},{"name":"os prog-34.cpp","path":"os prog-34.cpp","contentType":"file"},{"name":"os prog-35.cpp","path":"os prog-35.cpp","contentType":"file"},{"name":"os prog-36.cpp","path":"os prog-36.cpp","contentType":"file"},{"name":"os prog-37.cpp","path":"os prog-37.cpp","contentType":"file"},{"name":"os prog-38.cpp","path":"os prog-38.cpp","contentType":"file"},{"name":"os prog-39.cpp","path":"os prog-39.cpp","contentType":"file"},{"name":"os prog-40.cpp","path":"os prog-40.cpp","contentType":"file"}],"totalCount":40}},"fileTreeProcessingTime":2.7218630000000004,"foldersToFetch":[],"repo":{"id":771364887,"defaultBranch":"main","name":"CSA0403-Operating-Systems","ownerLogin":"karthikreddy06","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2024-03-13T12:27:18.000+05:30","ownerAvatar":"https://avatars.githubusercontent.com/u/160814789?v=4","public":true,"private":false,"isOrgOwned":false},"codeLineWrapEnabled":false,"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1710852269.0","canEdit":true,"refType":"branch","currentOid":"16e025670a1651938a6ae7782daa70f8e382427c"},"path":"os prog-15.cpp","currentUser":{"id":132541729,"login":"sekhar7888","userEmail":"sekhargoud163@gmail.com"},"blob":{"rawLines":["#include <stdio.h>\r","#include <stdlib.h>\r","#include <string.h>\r","#include <unistd.h>\r","#include <sys/types.h>\r","#include <sys/stat.h>\r","#include <dirent.h>\r","\r","#define MAX_FILENAME_LEN 256\r","#define MAX_FILES 100\r","\r","void create_directory(const char *path) {\r","mkdir(path, 0777); \r","}\r","\r","void organize_files(const char *source_dir, const char *dest_dir) {\r","\r","create_directory(dest_dir);\r","\r","\r","for (int i = 0; i < 10; i++) {\r","char level2_dir[MAX_FILENAME_LEN];\r","snprintf(level2_dir, sizeof(level2_dir), \"%s/level%d\", dest_dir, i);\r","create_directory(level2_dir);\r","}\r","\r","\r","DIR *dir;\r","struct dirent *entry;\r","dir = opendir(source_dir);\r","if (dir == NULL) {\r","perror(\"Error opening directory\");\r","exit(EXIT_FAILURE);\r","}\r","\r","\r","while ((entry = readdir(dir)) != NULL) {\r","if (entry->d_type == DT_REG) { \r","char source_file[MAX_FILENAME_LEN];\r","snprintf(source_file, sizeof(source_file), \"%s/%s\", source_dir, entry->d_name);\r","char dest_file[MAX_FILENAME_LEN];\r","snprintf(dest_file, sizeof(dest_file), \"%s/level%d/%s\", dest_dir, (entry->d_name[4] - '0'), entry->d_name); // Changed (entry->d_name[0] - '0') to (entry->d_name[4] - '0') to extract the file number correctly\r","rename(source_file, dest_file); \r","}\r","}\r","\r","closedir(dir);\r","}\r","\r","int main() {\r","const char *source_dir = \"source\";\r","const char *dest_dir = \"level1\";\r","\r","\r","create_directory(source_dir);\r","\r","\r","FILE *fp;\r","char filename[MAX_FILENAME_LEN];\r","for (int i = 0; i < MAX_FILES; i++) {\r","snprintf(filename, sizeof(filename), \"%s/file%d.txt\", source_dir, i);\r","fp = fopen(filename, \"w\");\r","if (fp == NULL) {\r","perror(\"Error creating file\");\r","exit(EXIT_FAILURE);\r","}\r","fclose(fp);\r","}\r","\r","\r","organize_files(source_dir, dest_dir);\r","\r","printf(\"Files organized successfully!\\n\");\r","\r","return 0;\r","}"],"stylingDirectives":[[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":17,"end":18,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":18,"end":19,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":18,"end":19,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":18,"end":19,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":22,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":21,"end":22,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":21,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":20,"end":21,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":18,"end":19,"cssClass":"pl-pds"}],[],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":24,"cssClass":"pl-en"},{"start":25,"end":28,"cssClass":"pl-c1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":17,"cssClass":"pl-en"},{"start":18,"end":21,"cssClass":"pl-c1"}],[],[{"start":0,"end":4,"cssClass":"pl-k"},{"start":5,"end":21,"cssClass":"pl-en"},{"start":22,"end":27,"cssClass":"pl-k"},{"start":28,"end":32,"cssClass":"pl-k"}],[{"start":0,"end":5,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":4,"cssClass":"pl-k"},{"start":5,"end":19,"cssClass":"pl-en"},{"start":20,"end":25,"cssClass":"pl-k"},{"start":26,"end":30,"cssClass":"pl-k"},{"start":44,"end":49,"cssClass":"pl-k"},{"start":50,"end":54,"cssClass":"pl-k"}],[],[{"start":0,"end":16,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":5,"end":8,"cssClass":"pl-k"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":20,"end":22,"cssClass":"pl-c1"}],[{"start":0,"end":4,"cssClass":"pl-k"}],[{"start":0,"end":8,"cssClass":"pl-c1"},{"start":21,"end":27,"cssClass":"pl-k"},{"start":41,"end":53,"cssClass":"pl-s"},{"start":41,"end":42,"cssClass":"pl-pds"},{"start":52,"end":53,"cssClass":"pl-pds"}],[{"start":0,"end":16,"cssClass":"pl-c1"}],[],[],[],[],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":13,"cssClass":"pl-en"}],[{"start":6,"end":13,"cssClass":"pl-c1"}],[{"start":0,"end":2,"cssClass":"pl-k"},{"start":11,"end":15,"cssClass":"pl-c1"}],[{"start":0,"end":6,"cssClass":"pl-c1"},{"start":7,"end":32,"cssClass":"pl-s"},{"start":7,"end":8,"cssClass":"pl-pds"},{"start":31,"end":32,"cssClass":"pl-pds"}],[{"start":0,"end":4,"cssClass":"pl-c1"}],[],[],[],[{"start":0,"end":5,"cssClass":"pl-k"},{"start":16,"end":23,"cssClass":"pl-c1"},{"start":33,"end":37,"cssClass":"pl-c1"}],[{"start":0,"end":2,"cssClass":"pl-k"},{"start":11,"end":17,"cssClass":"pl-smi"}],[{"start":0,"end":4,"cssClass":"pl-k"}],[{"start":0,"end":8,"cssClass":"pl-c1"},{"start":22,"end":28,"cssClass":"pl-k"},{"start":43,"end":50,"cssClass":"pl-s"},{"start":43,"end":44,"cssClass":"pl-pds"},{"start":49,"end":50,"cssClass":"pl-pds"},{"start":71,"end":77,"cssClass":"pl-smi"}],[{"start":0,"end":4,"cssClass":"pl-k"}],[{"start":0,"end":8,"cssClass":"pl-c1"},{"start":20,"end":26,"cssClass":"pl-k"},{"start":39,"end":54,"cssClass":"pl-s"},{"start":39,"end":40,"cssClass":"pl-pds"},{"start":53,"end":54,"cssClass":"pl-pds"},{"start":74,"end":80,"cssClass":"pl-smi"},{"start":81,"end":82,"cssClass":"pl-c1"},{"start":86,"end":89,"cssClass":"pl-s"},{"start":86,"end":87,"cssClass":"pl-pds"},{"start":88,"end":89,"cssClass":"pl-pds"},{"start":99,"end":105,"cssClass":"pl-smi"},{"start":108,"end":208,"cssClass":"pl-c"},{"start":108,"end":110,"cssClass":"pl-c"}],[{"start":0,"end":6,"cssClass":"pl-c1"}],[],[],[],[{"start":0,"end":8,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":4,"end":8,"cssClass":"pl-en"}],[{"start":0,"end":5,"cssClass":"pl-k"},{"start":6,"end":10,"cssClass":"pl-k"},{"start":25,"end":33,"cssClass":"pl-s"},{"start":25,"end":26,"cssClass":"pl-pds"},{"start":32,"end":33,"cssClass":"pl-pds"}],[{"start":0,"end":5,"cssClass":"pl-k"},{"start":6,"end":10,"cssClass":"pl-k"},{"start":23,"end":31,"cssClass":"pl-s"},{"start":23,"end":24,"cssClass":"pl-pds"},{"start":30,"end":31,"cssClass":"pl-pds"}],[],[],[{"start":0,"end":16,"cssClass":"pl-c1"}],[],[],[],[{"start":0,"end":4,"cssClass":"pl-k"}],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":5,"end":8,"cssClass":"pl-k"},{"start":13,"end":14,"cssClass":"pl-c1"}],[{"start":0,"end":8,"cssClass":"pl-c1"},{"start":19,"end":25,"cssClass":"pl-k"},{"start":37,"end":52,"cssClass":"pl-s"},{"start":37,"end":38,"cssClass":"pl-pds"},{"start":51,"end":52,"cssClass":"pl-pds"}],[{"start":5,"end":10,"cssClass":"pl-c1"},{"start":21,"end":24,"cssClass":"pl-s"},{"start":21,"end":22,"cssClass":"pl-pds"},{"start":23,"end":24,"cssClass":"pl-pds"}],[{"start":0,"end":2,"cssClass":"pl-k"},{"start":10,"end":14,"cssClass":"pl-c1"}],[{"start":0,"end":6,"cssClass":"pl-c1"},{"start":7,"end":28,"cssClass":"pl-s"},{"start":7,"end":8,"cssClass":"pl-pds"},{"start":27,"end":28,"cssClass":"pl-pds"}],[{"start":0,"end":4,"cssClass":"pl-c1"}],[],[{"start":0,"end":6,"cssClass":"pl-c1"}],[],[],[],[{"start":0,"end":14,"cssClass":"pl-c1"}],[],[{"start":0,"end":6,"cssClass":"pl-c1"},{"start":7,"end":40,"cssClass":"pl-s"},{"start":7,"end":8,"cssClass":"pl-pds"},{"start":37,"end":39,"cssClass":"pl-cce"},{"start":39,"end":40,"cssClass":"pl-pds"}],[],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-c1"}],[]],"colorizedLines":null,"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/karthikreddy06/CSA0403-Operating-Systems/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":false},"displayName":"os prog-15.cpp","displayUrl":"https://github.com/karthikreddy06/CSA0403-Operating-Systems/blob/main/os%20prog-15.cpp?raw=true","headerInfo":{"blobSize":"1.66 KB","deleteTooltip":"Fork this repository and delete the file","editTooltip":"Fork this repository and edit the file","ghDesktopPath":"https://desktop.github.com","isGitLfs":false,"onBranch":true,"shortPath":"b299807","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fkarthikreddy06%2FCSA0403-Operating-Systems%2Fblob%2Fmain%2Fos%2520prog-15.cpp","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"76","truncatedSloc":"56"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplate":null,"discussionTemplate":null,"language":"C++","languageID":43,"large":false,"planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/karthikreddy06/CSA0403-Operating-Systems/blob/main/os%20prog-15.cpp","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","releasePath":"/karthikreddy06/CSA0403-Operating-Systems/releases/new?marketplace=true","showPublishActionBanner":false},"rawBlobUrl":"https://github.com/karthikreddy06/CSA0403-Operating-Systems/raw/main/os%20prog-15.cpp","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"symbolsEnabled":true,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timed_out":true,"not_analyzed":false,"symbols":[{"name":"create_directory","kind":"function","ident_start":213,"ident_end":229,"extent_start":208,"extent_end":273,"fully_qualified_name":"create_directory","ident_utf16":{"start":{"line_number":11,"utf16_col":5},"end":{"line_number":11,"utf16_col":21}},"extent_utf16":{"start":{"line_number":11,"utf16_col":0},"end":{"line_number":13,"utf16_col":1}}},{"name":"organize_files","kind":"function","ident_start":282,"ident_end":296,"extent_start":277,"extent_end":1200,"fully_qualified_name":"organize_files","ident_utf16":{"start":{"line_number":15,"utf16_col":5},"end":{"line_number":15,"utf16_col":19}},"extent_utf16":{"start":{"line_number":15,"utf16_col":0},"end":{"line_number":47,"utf16_col":1}}},{"name":"main","kind":"function","ident_start":1208,"ident_end":1212,"extent_start":1204,"extent_end":1704,"fully_qualified_name":"main","ident_utf16":{"start":{"line_number":49,"utf16_col":4},"end":{"line_number":49,"utf16_col":8}},"extent_utf16":{"start":{"line_number":49,"utf16_col":0},"end":{"line_number":76,"utf16_col":0}}}]}},"copilotInfo":{"documentationUrl":"https://docs.github.com/copilot/overview-of-github-copilot/about-github-copilot-for-individuals","notices":{"codeViewPopover":{"dismissed":false,"dismissPath":"/settings/dismiss-notice/code_view_copilot_popover"}},"userAccess":{"hasSubscriptionEnded":false,"orgHasCFBAccess":false,"userHasCFIAccess":false,"userHasOrgs":false,"userIsOrgAdmin":false,"userIsOrgMember":false,"business":null,"featureRequestInfo":null}},"copilotAccessAllowed":false,"csrf_tokens":{"/karthikreddy06/CSA0403-Operating-Systems/branches":{"post":"-EinyNB6jy2mPo_b54HhGiZG5gb5H3hhqsCF8ea5Gv19Yes5mknP0gcgCW9PmKIWnEcuYms_rettTsK4afMoPQ"},"/repos/preferences":{"post":"Kw6x3KGp7PcwKPQwzItiEQM7NnjK4jQoEk7Yv7iWRQmpYBQzMyiU0m8dUNQywKUEfhvUlIm8qSC0PV1fLyGAJw"}}},"title":"CSA0403-Operating-Systems/os prog-15.cpp at main · karthikreddy06/CSA0403-Operating-Systems"}