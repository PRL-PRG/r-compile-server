#? stdlib
`.validExtends` <- function (class1, class2, classDef1, classDef2, slotTests) 
{
    .msg <- function(class1, class2) gettextf("class %s cannot extend class %s", 
        dQuote(class1), dQuote(class2))
    if ((is.null(classDef1) || is.null(classDef2)) && !(isVirtualClass(class1) && 
        isVirtualClass(class2))) 
        return(c(.msg(class1, class2), ": ", gettext("both classes must be defined")))
    if (slotTests) {
        slots2 <- classDef2@slots
        if (length(slots2)) {
            n2 <- names(slots2)
            slots1 <- classDef1@slots
            n1 <- names(slots1)
            if (anyNA(match(n2, n1))) 
                return(c(.msg(class1, class2), ": ", sprintf(ngettext(sum(is.na(match(n2, 
                  n1))), "class %s is missing slot from class %s (%s), and no coerce method was supplied", 
                  "class %s is missing slots from class %s (%s), and no coerce method was supplied"), 
                  dQuote(class1), dQuote(class2), paste(n2[is.na(match(n2, 
                    n1))], collapse = ", "))))
            bad <- character()
            for (what in n2) if (!extends(slots1[[what]], slots2[[what]])) 
                bad <- c(bad, what)
            if (length(bad)) 
                return(c(.msg(class1, class2), ": ", sprintf(ngettext(length(bad), 
                  "slot in class %s must extend corresponding slot in class %s: fails for %s", 
                  "slots in class %s must extend corresponding slots in class %s: fails for %s"), 
                  dQuote(class1), dQuote(class2), paste(bad, 
                    collapse = ", "))))
        }
    }
    TRUE
}
