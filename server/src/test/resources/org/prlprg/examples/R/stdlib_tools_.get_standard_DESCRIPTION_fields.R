#? stdlib
`.get_standard_DESCRIPTION_fields` <- function () 
{
    unique(c(.get_standard_repository_db_fields(), c("Additional_repositories", 
        "Author", "Authors@R", "Biarch", "BugReports", "BuildKeepEmpty", 
        "BuildManual", "BuildResaveData", "BuildVignettes", "Built", 
        "ByteCompile", "Classification/ACM", "Classification/ACM-2012", 
        "Classification/JEL", "Classification/MSC", "Classification/MSC-2010", 
        "Collate", "Collate.unix", "Collate.windows", "Contact", 
        "Copyright", "Date", "Depends", "Description", "Encoding", 
        "Enhances", "Imports", "KeepSource", "Language", "LazyData", 
        "LazyDataCompression", "LazyLoad", "License", "LinkingTo", 
        "MailingList", "Maintainer", "Note", "OS_type", "Package", 
        "Packaged", "Priority", "RdMacros", "Suggests", "StagedInstall", 
        "SysDataCompression", "SystemRequirements", "Title", 
        "Type", "URL", "UseLTO", "Version", "VignetteBuilder", 
        "ZipData"), c("Repository", "Path", "Date/Publication", 
        "LastChangedDate", "LastChangedRevision", "Revision", 
        "RcmdrModels", "RcppModules", "Roxygen", "Acknowledgements", 
        "Acknowledgments", "biocViews")))
}
