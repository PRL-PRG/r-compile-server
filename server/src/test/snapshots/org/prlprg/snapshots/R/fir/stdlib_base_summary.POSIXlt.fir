fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1408106800;
    st `summary.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1408106800(object, digits, `...`) {
  (reg object:*, reg digits:*, reg ddd:dots) -+> V { var object:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var `...`:dots?, reg summary:cls, reg as_POSIXct:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg digits1:*, reg digits2:V, reg p2:p(V +), reg ddd1:dots?, reg r4:V |
    mkenv;
    st object = object;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(15.0) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    summary = ldf summary;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      as_POSIXct = ldf `as.POSIXct`;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      r1 = dyn as_POSIXct(p);
      return r1;
    };
    p2 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd1 = ld `...`;
    r4 = dyn summary[, digits, `...`](p1, p2, ddd1);
    check L2() else D1();
  D1():
    deopt 6 [r4];
  L2():
    popenv;
    return r4;
  }
}