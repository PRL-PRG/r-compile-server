#? stdlib
`writeDefaultNamespace` <- function (filename, desc = file.path(dirname(filename), "DESCRIPTION")) 
{
    pkgInfo <- .split_description(.read_description(desc))
    pkgs <- unique(c(names(pkgInfo$Imports), names(pkgInfo$Depends)))
    pkgs <- pkgs[pkgs != "base"]
    writeLines(c("# Default NAMESPACE created by R", "# Remove the previous line if you edit this file", 
        "", "# Export all names", "exportPattern(\"^[^.]\")", 
        if (length(pkgs)) c("", "# Import all packages listed as Imports or Depends", 
            "import(", paste0("  ", pkgs, collapse = ",\n"), 
            ")")), filename)
}
