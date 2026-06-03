#? stdlib
`S3Part` <- function (object, strictS3 = FALSE, S3Class) 
{
    if (!isS4(object)) 
        return(object)
    classDef <- getClass(class(object))
    oldClassCase <- extends(classDef, "oldClass")
    defltS3Class <- missing(S3Class)
    if (oldClassCase) {
        if (defltS3Class) 
            S3Class <- .S3Class(object)
        keepSlots <- slotNames(S3Class[[1L]])
    }
    else {
        if (all(is.na(match(extends(classDef), .BasicClasses)))) 
            stop(gettextf("S3Part() is only defined for classes set up by setOldCLass(), basic classes or subclasses of these:  not true of class %s", 
                dQuote(class(object))), domain = NA)
        if (missing(S3Class)) {
            S3Class <- classDef@slots$.Data
            if (is.null(S3Class)) 
                S3Class <- typeof(object)
            keepSlots <- character()
        }
        else keepSlots <- slotNames(S3Class[[1L]])
    }
    if (!(defltS3Class || extends(classDef, S3Class))) 
        stop(gettextf("the 'S3Class' argument must be a superclass of %s:  not true of class %s", 
            dQuote(class(object)), dQuote(S3Class)), domain = NA)
    if (strictS3) 
        keepSlots <- keepSlots[is.na(match(keepSlots, ".S3Class"))]
    deleteSlots = slotNames(classDef)
    deleteSlots <- deleteSlots[is.na(match(deleteSlots, keepSlots))]
    for (slot in deleteSlots) attr(object, slot) <- NULL
    if (strictS3) {
        object <- .notS4(object)
        class(object) <- S3Class
    }
    else class(object) <- S3Class[[1L]]
    object
}

# Examples

## an "mlm" object, regressing two variables on two others

sepal <- as.matrix(datasets::iris[,c("Sepal.Width", "Sepal.Length")])
fit <- lm(sepal ~ Petal.Length + Petal.Width + Species, data = datasets::iris)
class(fit) # S3 class: "mlm", "lm"

## a class that contains "mlm"
myReg <- setClass("myReg", slots = c(title = "character"), contains = "mlm")

fit2 <- myReg(fit, title = "Sepal Regression for iris data")

fit2 # shows the inherited "mlm" object and the title

identical(S3Part(fit2), as(fit2, "mlm"))

class(as(fit2, "mlm")) # the S4 class, "mlm"

class(as(fit2, "S3")) # the S3 class, c("mlm", "lm")

## An object may contain an S3 class from a subclass of that declared:
xlm <- setClass("xlm", slots = c(eps = "numeric"), contains = "lm")

xfit <- xlm(fit, eps = .Machine$double.eps)

xfit@.S3Class # c("mlm", lm")


    removeClass("myReg")


