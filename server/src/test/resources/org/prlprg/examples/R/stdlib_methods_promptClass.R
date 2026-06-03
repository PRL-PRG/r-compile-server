#? stdlib
`promptClass` <- function (clName, filename = NULL, type = "class", keywords = "classes", 
    where = topenv(parent.frame()), generatorName = clName) 
{
    classInSig <- function(g, where, cl) {
        cl %in% unique(unlist(findMethods(g, where)@signatures))
    }
    genWithClass <- function(cl, where) {
        allgen <- getGenerics(where = where)
        ok <- as.logical(unlist(lapply(allgen, classInSig, cl = cl, 
            where = where)))
        allgen[ok]
    }
    sigsList <- function(g, where) {
        methods <- findMethods(g, where)
        value <- methods@signatures
        args <- methods@arguments
        if (length(value)) {
            length(args) <- length(value[[1]])
            value <- lapply(value, function(x) {
                names(x) <- args
                x
            })
        }
        value
    }
    slotClassWithSource <- function(clname) {
        clDef <- getClassDef(clname)
        extds <- names(clDef@contains)
        allslots <- getSlots(clDef)
        for (j in rev(seq_along(extds))) {
            i <- extds[[j]]
            slotsi <- getSlots(getClass(i))
            if (length(slotsi)) 
                allslots[names(slotsi)] <- paste0("\"", as.character(slotsi), 
                  "\", from class \"", i, "\"")
        }
        slotsi <- getSlots(clDef)
        if (length(slotsi)) 
            allslots[names(slotsi)] <- paste0("\"", as.character(slotsi), 
                "\"")
        allslots
    }
    cleanPrompt <- function(object, name) {
        value <- utils::prompt(object, name = name, filename = NA)
        for (i in seq_along(value)) {
            item <- value[[i]]
            bad <- grepl("^ *%", item)
            if (any(bad)) 
                value[[i]] <- item[!bad]
        }
        value
    }
    pastePar <- function(x) {
        xn <- names(x)
        x <- as.character(x)
        xn <- if (length(xn) == length(x)) 
            paste(xn, "= ")
        else ""
        paste0("(", paste0(xn, "\"", x, "\"", collapse = ", "), 
            ")")
    }
    escape <- function(txt) gsub("%", "\\%", txt, fixed = TRUE)
    if (is.null(filename)) 
        filename <- paste0(utils:::topicName(type, clName), ".Rd")
    if (!missing(where) && !is.na(match(clName, getClasses(where)))) 
        whereClass <- where
    else {
        whereClass <- utils::find(classMetaName(clName))
        if (length(whereClass) == 0L) 
            stop(gettextf("no definition of class %s found", 
                dQuote(clName)), domain = NA)
        else if (length(whereClass) > 1L) {
            if (identical(where, topenv(parent.frame()))) {
                whereClass <- whereClass[[1L]]
                warning(gettextf("multiple definitions of %s found; using the one on %s", 
                  dQuote(clName), whereClass), domain = NA)
            }
            else {
                if (exists(classMetaName(clName), where, inherits = FALSE)) 
                  whereClass <- where
                else stop(sprintf(ngettext(length(whereClass), 
                  "no definition of class %s in the specified position, %s, definition on : %s", 
                  "no definition of class %s in the specified position, %s, definitions on : %s"), 
                  dQuote(clName), where, paste(whereClass, collapse = ", ")), 
                  domain = NA)
            }
        }
    }
    fullName <- utils:::topicName("class", clName)
    clDef <- getClass(clName, where = whereClass)
    .name <- paste0("\\name{", fullName, "}")
    .type <- paste0("\\docType{", type, "}")
    .alias <- paste0("\\alias{", fullName, "}")
    .title <- sprintf("\\title{Class \\code{\"%s\"}}", clName)
    .desc <- paste0("\\description{", "\n%%  ~~ A concise (1-5 lines) description of what the class is. ~~", 
        "\n}")
    slotclasses <- getSlots(clDef)
    slotnames <- names(slotclasses)
    slotclasses <- as.character(slotclasses)
    nslots <- length(slotclasses)
    clNameQ <- paste0("\"", clName, "\"")
    .usage <- "\\section{Objects from the Class}"
    virtualClass <- isVirtualClass(clName)
    if (virtualClass) {
        .usage <- paste0(.usage, "{A virtual Class: No objects may be created from it.}")
        generator <- NULL
    }
    else {
        if (exists(generatorName, where, inherits = FALSE)) 
            generator <- get(generatorName, where, inherits = FALSE)
        else generator <- NULL
        if (is(generator, "classGeneratorFunction")) {
            promptGenerator <- cleanPrompt(generator, generatorName)
            callString <- .makeCallString(generator, generatorName)
            .alias <- c(.alias, promptGenerator$aliases)
        }
        else {
            initMethod <- unRematchDefinition(selectMethod("initialize", 
                clName))
            argNames <- formalArgs(initMethod)
            argNames[[1L]] <- clNameQ
            callString <- .makeCallString(initMethod, "new", 
                argNames)
        }
        .usage <- c(paste0(.usage, "{"), paste0("Objects can be created by calls of the form \\code{", 
            callString, "}."), "%%  ~~ describe objects here ~~ ", 
            "}")
    }
    .slots <- if (nslots > 0) {
        slotclasses <- slotClassWithSource(clName)
        slotnames <- names(slotclasses)
        .slots.head <- c("\\section{Slots}{", "  \\describe{")
        .slots.body <- paste0("    \\item{\\code{", slotnames, 
            "}:}", "{Object of class \\code{", slotclasses, "} ~~ }")
        .slots.tail <- c("  }", "}")
        c(.slots.head, .slots.body, .slots.tail)
    }
    else character()
    .extends <- clDef@contains
    if (length(.extends)) {
        .extends <- showExtends(.extends, printTo = FALSE)
        .extends <- c("\\section{Extends}{", paste0("Class \\code{\"\\linkS4class{", 
            .extends$what, "}\"}, ", gsub("^(by class) (\".*\")$", 
                "\\1 \\\\code{\\2}", .extends$how), "."), "}")
    }
    else .extends <- character()
    nmeths <- length(methnms <- genWithClass(clName, where = whereClass))
    .meths.head <- "\\section{Methods}{"
    .methAliases <- ""
    if (nmeths > 0) {
        .meths.body <- "  \\describe{"
        for (i in 1L:nmeths) {
            .sig <- sigsList(methnms[i], where = whereClass)
            for (j in seq_along(.sig)) {
                if (!all(is.na(match(.sig[[j]], clName)))) {
                  methn.i <- escape(methnms[i])
                  .meths.body <- c(.meths.body, paste0("    \\item{", 
                    methn.i, "}{\\code{signature", pastePar(.sig[[j]]), 
                    "}: ... }"))
                  cur <- paste(.sig[[j]], collapse = ",")
                  .methAliases <- paste0(.methAliases, "\\alias{", 
                    methn.i, ",", cur, "-method}\n")
                }
            }
        }
        .meths.body <- c(.meths.body, "\t }")
    }
    else {
        .meths.head <- "\\section{Methods}{"
        .meths.body <- paste("No methods defined with class", 
            clNameQ, "in the signature.")
    }
    .meths.tail <- "}"
    .keywords <- paste0("\\keyword{", keywords, "}")
    Rdtxt <- list(name = .name, type = .type, aliases = .alias, 
        methAliases = .methAliases, title = .title, description = .desc, 
        `section{Objects from the Class}` = .usage, `section{Slots}` = .slots, 
        `section{Extends}` = .extends, `section{Methods}` = c(.meths.head, 
            .meths.body, .meths.tail), references = paste("\\references{\n%%  ~~put references to the", 
            "literature/web site here~~\n}"), author = "\\author{\n%%  ~~who you are~~\n}", 
        note = c("\\note{\n%%  ~~further notes~~\n}", "", paste("%% ~Make other sections like Warning with", 
            "\\section{Warning }{....} ~"), ""), seealso = c("\\seealso{", 
            paste("%%  ~~objects to See Also as", "\\code{\\link{~~fun~~}}, ~~~"), 
            paste("%%  ~~or \\code{\\linkS4class{CLASSNAME}}", 
                "for links to other classes ~~~"), "}"), examples = c("\\examples{", 
            paste0("showClass(", clNameQ, ")"), "}"), keywords = .keywords)
    if (is(clDef, "refClassRepresentation")) 
        Rdtxt <- refClassPrompt(clDef, Rdtxt, nmeths, nslots, 
            .meths.head)
    else if (is(generator, "classGeneratorFunction")) {
        what <- c("usage", "arguments")
        Rdtxt[what] <- promptGenerator[what]
    }
    if (is.na(filename)) 
        return(Rdtxt)
    cat(unlist(Rdtxt), file = filename, sep = "\n")
    .message("A shell of class documentation has been written", 
        .fileDesc(filename), ".\n")
    invisible(filename)
}

# Examples

## from setClass
## A simple class with two slots
setClass("track",
         slots = c(x="numeric", y="numeric"))
## A class extending the previous, adding one more slot
setClass("trackCurve", contains = "track",
         slots = c(smooth = "numeric"))
## A class similar to "trackCurve", but with different structure
## allowing matrices for the "y" and "smooth" slots
setClass("trackMultiCurve",
         slots = c(x="numeric", y="matrix", smooth="matrix"),
         prototype = list(x=numeric(), y=matrix(0,0,0), smooth= matrix(0,0,0)))

setIs("trackMultiCurve", "trackCurve",
  test = function(obj) {ncol(slot(obj, "y")) == 1},
  coerce = function(obj) { new("trackCurve", x = slot(obj, "x"),
        y = as.numeric(slot(obj,"y")), smooth = as.numeric(slot(obj, "smooth")))})

## from setMethod
require(graphics)

setMethod("plot", "track",
 function(x, y, ...) plot(slot(x, "y"), y,  ...)
)
setMethod("plot", c("trackCurve", "missing"),
function(x, y, ...) {
  plot(as(x, "track"))
  if(length(slot(x, "smooth") > 0))
    lines(slot(x, "x"), slot(x, "smooth"))
  }
)

promptClass("trackMultiCurve", stdout())

promptClass("track", stdout())


removeMethods("plot")

