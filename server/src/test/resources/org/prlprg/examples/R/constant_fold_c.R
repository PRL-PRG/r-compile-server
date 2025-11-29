# no constant folding - c is resolved from baseenv()
check({ c('%Y-%m-%d', '%d-%m-%Y', '%m-%d-%Y') })

# constant folding
check({ c('%Y-%m-%d', '%d-%m-%Y', '%m-%d-%Y') }, bc.optLevel(3))
