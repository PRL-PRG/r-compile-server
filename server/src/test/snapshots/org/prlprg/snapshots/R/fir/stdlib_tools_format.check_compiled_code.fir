fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_compiled_code` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg paste:cls, reg unlist:cls, reg lapply:cls, reg x3:*, reg x4:V, reg p:p(V +), reg format:*, reg format1:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg r13:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L7() else L1();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    paste = ldf paste;
    check L12() else D4();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L6() else D1();
  L7():
    character = ldf character;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L6():
    goto L0(r2);
  L8():
    r4 = dyn character();
    check L9() else D3();
  L12():
    p3 = prom<V +>{
      unlist = ldf unlist;
      p2 = prom<V +>{
        lapply = ldf lapply;
        p = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          return x4;
        };
        p1 = prom<V +>{
          format = ld format;
          format1 = force? format;
          checkMissing(format1);
          return format1;
        };
        r9 = dyn lapply(p, p1);
        return r9;
      };
      r11 = dyn unlist(p2);
      return r11;
    };
    r13 = dyn paste[, collapse](p3, "\n");
    check L13() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 18 [r13];
  L9():
    popenv;
    return r4;
  L13():
    popenv;
    return r13;
  }
}