fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st topic2url = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r:V, reg p:p(V +), reg r2:V, reg c:L, reg __:cls, reg r3:V, reg r4:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r6:V, reg vapply:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg urlify:*, reg urlify1:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st x = x;
    config_val_to_logical = ldf config_val_to_logical;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r = dyn Sys_getenv("_R_HELP_USE_URLENCODE_", "FALSE");
      return r;
    };
    r2 = dyn config_val_to_logical(p);
    check L2() else D1();
  D1():
    deopt 3 [r2];
  L2():
    c = `as.logical`(r2);
    if c then L3() else L0();
  L0():
    vapply = ldf vapply;
    check L8() else D5();
  L3():
    __ = ldf `::`;
    check L4() else D2();
  D2():
    deopt 5 [];
  D5():
    deopt 15 [];
  L4():
    r3 = dyn __("utils", "URLencode");
    check L5() else D3();
  L8():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      urlify = ld urlify;
      urlify1 = force? urlify;
      checkMissing(urlify1);
      return urlify1;
    };
    r9 = dyn vapply[, , , reserved](p2, p3, "", TRUE);
    check L9() else D6();
  D3():
    deopt 8 [r3];
  D6():
    deopt 21 [r9];
  L5():
    checkFun.0(r3);
    r4 = r3 as cls;
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r6 = dyn r4[, reserved](p1, TRUE);
    check L6() else D4();
  L9():
    popenv;
    return r9;
  D4():
    deopt 13 [r6];
  L6():
    popenv;
    return r6;
  }
}