#? stdlib
`refClassPrompt` <- function (clDef, Rdtxt, nmeths, nslots, .meths.head) 
{
    sections <- names(Rdtxt)
    envRefX <- paste0("{", extends("envRefClass"), "}")
    exclude <- grep("Objects from the Class", sections)
    if (nmeths < 1) 
        exclude <- c(exclude, grep("Methods", sections))
    else .meths.head <- "\\section{Class-Based Methods}{"
    if (nslots < 2) 
        exclude <- c(exclude, grep("Slots", sections))
    Rdtxt <- Rdtxt[-exclude]
    extdsthead <- "section{Extends}"
    extds <- Rdtxt[[extdsthead]]
    drop <- rep(FALSE, length(extds))
    for (class in envRefX) drop <- drop | grepl(class, extds, 
        fixed = TRUE)
    extds <- extds[!drop]
    extds <- append(extds, "\nAll reference classes extend and inherit methods from \\code{\"\\linkS4class{envRefClass}\"}.\n", 
        length(extds) - 1)
    Rdtxt[[extdsthead]] <- extds
    fieldClasses <- refClassFields(clDef)
    nfields <- length(fieldClasses)
    .fields <- if (nfields > 0) {
        fieldnames <- names(fieldClasses)
        .fields.head <- c("\\section{Fields}{", "  \\describe{")
        .fields.body <- paste0("    \\item{\\code{", fieldnames, 
            "}:}", "{Object of class \\code{", fieldClasses, 
            "} ~~ }")
        .fields.tail <- c("  }", "}")
        c(.fields.head, .fields.body, .fields.tail)
    }
    else character()
    methodDefs <- as.list(clDef@refMethods)
    nmethods <- length(methodDefs)
    if (nmethods > 0) {
        thisClassDefs <- vapply(methodDefs, function(x) x@refClassName, 
            "") %in% clDef@className
        otherMethods <- methodDefs[!thisClassDefs]
        methodDefs <- methodDefs[thisClassDefs]
        .methods <- c(.meths.head, .refMethodDescription(methodDefs, 
            fieldnames, otherMethods), "}")
    }
    else .methods <- character()
    c(Rdtxt, list(`section{Fields}` = .fields, `section{ClassMethods}` = .methods))
}
