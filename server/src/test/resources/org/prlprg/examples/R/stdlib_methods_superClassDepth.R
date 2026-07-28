#? stdlib
`superClassDepth` <- function (ClassDef, soFar = ClassDef@className, simpleOnly = TRUE) 
{
    ext <- ClassDef@contains
    ok <- rep.int(TRUE, length(ext))
    for (i in seq_along(ext)) {
        exti <- ext[[i]]
        if (.isIndirectExtension(exti) || (simpleOnly && !exti@simple)) 
            ok[i] <- FALSE
    }
    ext <- ext[ok]
    immediate <- names(ext)
    notSoFar <- is.na(match(immediate, soFar))
    immediate <- immediate[notSoFar]
    super <- list(label = immediate, depth = rep.int(1, length(immediate)), 
        ext = ext)
    for (i in seq_along(immediate)) {
        what <- immediate[[i]]
        if (!is.na(match(what, soFar))) 
            next
        exti <- ext[[i]]
        soFar <- c(soFar, what)
        if (!is(exti, "SClassExtension")) 
            stop(gettextf("in definition of class %s, information for superclass %s is of class %s (expected \"SClassExtension\")", 
                dQuote(ClassDef@className), dQuote(what), dQuote(class(exti))), 
                domain = NA)
        superClass <- getClassDef(exti@superClass, package = exti@package)
        if (is.null(superClass)) {
            warning(gettextf("class %s extends an undefined class, %s", 
                dQuote(ClassDef@className), dQuote(what)), domain = NA)
            next
        }
        more <- Recall(superClass, soFar)
        whatMore <- more$label
        if (!all(is.na(match(whatMore, soFar)))) {
            ok <- is.na(match(whatMore, soFar))
            more$depth <- more$depth[ok]
            more$label <- more$label[ok]
            more$ext <- more$ext[ok]
            whatMore <- whatMore[ok]
        }
        if (length(whatMore)) {
            soFar <- c(soFar, whatMore)
            super$depth <- c(super$depth, 1 + more$depth)
            super$label <- c(super$label, more$label)
            super$ext <- c(super$ext, more$ext)
        }
    }
    super
}
