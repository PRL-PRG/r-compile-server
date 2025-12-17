fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_equations_from_Rd_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg matrix:cls, reg character:cls, reg r4:V, reg p:p(V +), reg r6:V, reg lapply:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg _Rd_get_equations_from_Rd:*, reg _Rd_get_equations_from_Rd1:V, reg p2:p(V +), reg r11:V, reg cbind:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg m:*, reg m1:V, reg names:cls, reg r16:V, reg vapply:cls, reg m2:*, reg m3:V, reg p3:p(V +), reg nrow:*, reg nrow1:V, reg p4:p(V +), reg r19:V, reg rep_int:cls, reg r20:V, reg p5:p(V +), reg do_call:cls, reg rbind:*, reg rbind1:V, reg p6:p(V +), reg m4:*, reg m5:V, reg p7:p(V +), reg r24:V, reg p8:p(V +), reg r26:V |
    mkenv;
    st x = x;
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
    lapply = ldf lapply;
    check L12() else D4();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L6() else D1();
  L7():
    matrix = ldf matrix;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 17 [];
  L6():
    goto L0(r2);
  L8():
    p = prom<V +>{
      character = ldf character;
      r4 = dyn character();
      return r4;
    };
    r6 = dyn matrix(p, 0, 6);
    check L9() else D3();
  L12():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      _Rd_get_equations_from_Rd = ld `.Rd_get_equations_from_Rd`;
      _Rd_get_equations_from_Rd1 = force? _Rd_get_equations_from_Rd;
      checkMissing(_Rd_get_equations_from_Rd1);
      return _Rd_get_equations_from_Rd1;
    };
    r11 = dyn lapply(p1, p2);
    check L13() else D5();
  D3():
    deopt 12 [r6];
  D5():
    deopt 20 [r11];
  L9():
    popenv;
    return r6;
  L13():
    st m = r11;
    cbind = ldf cbind;
    check L14() else D6();
  D6():
    deopt 23 [];
  L14():
    p5 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r13):
      return r13;
    L2():
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r12 = dyn base1(<lang names(m)>, <lang vapply(m, nrow, 0)>);
      goto L0(r12);
    L1(r15):
      vapply = ldf vapply;
      p3 = prom<V +>{
        m2 = ld m;
        m3 = force? m2;
        checkMissing(m3);
        return m3;
      };
      p4 = prom<V +>{
        nrow = ld nrow;
        nrow1 = force? nrow;
        checkMissing(nrow1);
        return nrow1;
      };
      r19 = dyn vapply(p3, p4, 0);
      rep_int = ldf `rep.int` in base;
      r20 = dyn rep_int(r15, r19);
      goto L0(r20);
    L4():
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      names = ldf names in base;
      r16 = dyn names(m1);
      goto L1(r16);
    L5():
      r14 = dyn base2(<sym m>);
      goto L1(r14);
    };
    p8 = prom<V +>{
      do_call = ldf `do.call`;
      p6 = prom<V +>{
        rbind = ld rbind;
        rbind1 = force? rbind;
        checkMissing(rbind1);
        return rbind1;
      };
      p7 = prom<V +>{
        m4 = ld m;
        m5 = force? m4;
        checkMissing(m5);
        return m5;
      };
      r24 = dyn do_call(p6, p7);
      return r24;
    };
    r26 = dyn cbind(p5, p8);
    check L15() else D7();
  D7():
    deopt 26 [r26];
  L15():
    popenv;
    return r26;
  }
}