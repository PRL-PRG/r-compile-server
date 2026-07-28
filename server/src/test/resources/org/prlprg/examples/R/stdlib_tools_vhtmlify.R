#? stdlib
`vhtmlify` <- function (x, inEqn = FALSE) 
{
    x <- fsub("&", "&amp;", x)
    x <- fsub("<", "&lt;", x)
    x <- fsub(">", "&gt;", x)
    x <- fsub("\"\\{\"", "\"{\"", x)
    if (inEqn) {
        x <- psub("\\\\(Alpha|Beta|Gamma|Delta|Epsilon|Zeta|Eta|Theta|Iota|Kappa|Lambda|Mu|Nu|Xi|Omicron|Pi|Rho|Sigma|Tau|Upsilon|Phi|Chi|Psi|Omega|alpha|beta|gamma|delta|epsilon|zeta|eta|theta|iota|kappa|lambda|mu|nu|xi|omicron|pi|rho|sigma|tau|upsilon|phi|chi|psi|omega|le|ge|sum|prod)", 
            "&\\1;", x)
        x <- psub("\\\\(dots|ldots)", "&hellip;", x)
        x <- fsub("\\infty", "&infin;", x)
        x <- fsub("\\sqrt", "&radic;", x)
    }
    x
}
