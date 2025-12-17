fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner990356484;
    st binomInitialize = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner990356484(family) {
  (reg family:*) -+> V { var family:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V |
    mkenv;
    st family = family;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<lang {
      if(`==`(NCOL(y), 1.0), {
          if(is.factor(y), `<-`(y, `!=`(y, `[`(levels(y), 1))));
          `<-`(n, rep.int(1.0, nobs));
          `<-`(`[`(y, `==`(weights, 0.0)), 0.0);
          if(any(`|`(`<`(y, 0.0), `>`(y, 1.0))), stop("y values must be 0 <= y <= 1"));
          `<-`(mustart, `/`(`(`(`+`(`*`(weights, y), 0.5)), `(`(`+`(weights, 1.0))));
          `<-`(m, `*`(weights, y));
          if(`&&`(`==`(FAMILY, "binomial"), any(`>`(abs(`-`(m, round(m))), 0.001))), warning(gettextf("non-integer #successes in a %s glm!", FAMILY), domain=NA_LGL))
        }, if(`==`(NCOL(y), 2.0), {
            if(`&&`(`==`(FAMILY, "binomial"), any(`>`(abs(`-`(y, round(y))), 0.001))), warning(gettextf("non-integer counts in a %s glm!", FAMILY), domain=NA_LGL));
            `<-`(n, `+`(`(`(`<-`(y1, `[`(y, , 1))), `[`(y, , 2)));
            `<-`(y, `/`(y1, n));
            if(any(`<-`(n0, `==`(n, 0.0))), `<-`(`[`(y, n0), 0.0));
            `<-`(weights, `*`(weights, n));
            `<-`(mustart, `/`(`(`(`+`(`*`(n, y), 0.5)), `(`(`+`(n, 1.0))))
          }, stop(gettextf("for the '%s' family, y must be a vector of 0 and 1's\nor a 2 column matrix where col 1 is no. successes and col 2 is no. failures", FAMILY), domain=NA_LGL)))
    }>, <lang list(FAMILY=family)>);
    goto L0(r2);
  L2():
    r = dyn base(<lang {
      if(`==`(NCOL(y), 1.0), {
          if(is.factor(y), `<-`(y, `!=`(y, `[`(levels(y), 1))));
          `<-`(n, rep.int(1.0, nobs));
          `<-`(`[`(y, `==`(weights, 0.0)), 0.0);
          if(any(`|`(`<`(y, 0.0), `>`(y, 1.0))), stop("y values must be 0 <= y <= 1"));
          `<-`(mustart, `/`(`(`(`+`(`*`(weights, y), 0.5)), `(`(`+`(weights, 1.0))));
          `<-`(m, `*`(weights, y));
          if(`&&`(`==`(FAMILY, "binomial"), any(`>`(abs(`-`(m, round(m))), 0.001))), warning(gettextf("non-integer #successes in a %s glm!", FAMILY), domain=NA_LGL))
        }, if(`==`(NCOL(y), 2.0), {
            if(`&&`(`==`(FAMILY, "binomial"), any(`>`(abs(`-`(y, round(y))), 0.001))), warning(gettextf("non-integer counts in a %s glm!", FAMILY), domain=NA_LGL));
            `<-`(n, `+`(`(`(`<-`(y1, `[`(y, , 1))), `[`(y, , 2)));
            `<-`(y, `/`(y1, n));
            if(any(`<-`(n0, `==`(n, 0.0))), `<-`(`[`(y, n0), 0.0));
            `<-`(weights, `*`(weights, n));
            `<-`(mustart, `/`(`(`(`+`(`*`(n, y), 0.5)), `(`(`+`(n, 1.0))))
          }, stop(gettextf("for the '%s' family, y must be a vector of 0 and 1's\nor a 2 column matrix where col 1 is no. successes and col 2 is no. failures", FAMILY), domain=NA_LGL)))
    }>, <lang list(FAMILY=family)>);
    goto L0(r);
  }
}