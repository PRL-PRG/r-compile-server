#? stdlib
`.makeDllRes` <- function (name = "", version = "0.0") 
{
    if (file.exists(f <- "../DESCRIPTION") || file.exists(f <- "../../DESCRIPTION")) {
        desc <- read.dcf(f)[[1L]]
        if (!is.na(f <- desc["Package"])) 
            name <- f
        if (!is.na(f <- desc["Version"])) 
            version <- f
    }
    writeLines(c("#include <windows.h>", "#include \"Rversion.h\"", 
        "", "VS_VERSION_INFO VERSIONINFO", "FILEVERSION R_FILEVERSION", 
        "PRODUCTVERSION 3,0,0,0", "FILEFLAGSMASK 0x3L", "FILEOS VOS__WINDOWS32", 
        "FILETYPE VFT_APP", "BEGIN", "    BLOCK \"StringFileInfo\"", 
        "    BEGIN", "        BLOCK \"040904E4\"", "        BEGIN"))
    cat("            VALUE \"FileDescription\", \"DLL for R package `", 
        name, "'\\0\"\n", "            VALUE \"FileVersion\", \"", 
        version, "\\0\"\n", sep = "")
    writeLines(c("            VALUE \"Compiled under R Version\", R_MAJOR \".\" R_MINOR \" (\" R_YEAR \"-\" R_MONTH \"-\" R_DAY \")\\0\"", 
        "            VALUE \"Project info\", \"https://www.r-project.org\\0\"", 
        "        END", "    END", "    BLOCK \"VarFileInfo\"", 
        "    BEGIN", "        VALUE \"Translation\", 0x409, 1252", 
        "    END", "END"))
}
