fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st parse_URI_reference = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg regmatches:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg regexec:cls, reg re:*, reg re1:V, reg p2:p(V +), reg x5:*, reg x6:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V, reg y:*, reg y1:V, reg c1:L, reg y3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg c2:cls, reg r14:V, reg __:cls, reg r15:V, reg matrix:cls, reg character:cls, reg r16:V, reg p6:p(V +), reg r18:V, reg as_data_frame:cls, reg y7:*, reg y8:V, reg p7:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg c3:cls, reg r23:V, reg l:*, reg names__:cls, reg r24:V, reg y9:*, reg y10:V |
    mkenv;
    st x = x;
    st re = "^(([^:/?#]+):)?(//([^/?#]*))?([^?#]*)(\\?([^#]*))?(#(.*))?";
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c = `as.logical`(r1);
    if c then L10() else L1();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 5 [x1];
  L1():
    matrix = ldf matrix;
    check L21() else D6();
  L4():
    as_data_frame = ldf `as.data.frame`;
    check L23() else D8();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L9() else D1();
  L10():
    do_call = ldf `do.call`;
    check L11() else D2();
  D1():
    deopt 8 [r2];
  D2():
    deopt 10 [];
  D6():
    deopt 33 [];
  D8():
    deopt 40 [];
  L9():
    goto L0(r2);
  L11():
    p = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p5 = prom<V +>{
      regmatches = ldf regmatches;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p4 = prom<V +>{
        regexec = ldf regexec;
        p2 = prom<V +>{
          re = ld re;
          re1 = force? re;
          checkMissing(re1);
          return re1;
        };
        p3 = prom<V +>{
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          return x6;
        };
        r7 = dyn regexec(p2, p3);
        return r7;
      };
      r9 = dyn regmatches(p1, p4);
      return r9;
    };
    r11 = dyn do_call(p, p5);
    check L12() else D3();
  L21():
    p6 = prom<V +>{
      character = ldf character;
      r16 = dyn character();
      return r16;
    };
    r18 = dyn matrix(p6, 0, 5);
    check L22() else D7();
  L23():
    p7 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r20 = dyn as_data_frame(p7);
    check L24() else D9();
  D3():
    deopt 13 [r11];
  D7():
    deopt 37 [r18];
  D9():
    deopt 42 [r20];
  L12():
    st y = r11;
    y = ld y;
    check L13() else D4();
  L22():
    st y = r18;
    goto L4();
  L24():
    st y = r20;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  D4():
    deopt 15 [y];
  L5(r22):
    l = ld y;
    names__ = ldf `names<-`;
    check L28() else D11();
  L13():
    y1 = force? y;
    checkMissing(y1);
    c1 = `is.object`(y1);
    if c1 then L14() else L15(y1);
  L25():
    c3 = ldf c in base;
    r23 = dyn c3("scheme", "authority", "path", "query", "fragment");
    check L27() else D10();
  L26():
    r21 = dyn base2("scheme", "authority", "path", "query", "fragment");
    goto L5(r21);
  D10():
    deopt 52 [r23];
  D11():
    deopt 54 [r22, l, r22];
  L2(dx1):
    st y = dx1;
    goto L4();
  L14():
    dr = tryDispatchBuiltin.1("[", y1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(y3):
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L27():
    goto L5(r23);
  L28():
    r24 = dyn names__(l, NULL, r22);
    check L29() else D12();
  D12():
    deopt 56 [r22, r24];
  L3(r13):
    __ = ldf `[` in base;
    r15 = dyn __(y1, <missing>, r13, FALSE);
    goto L2(r15);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L17():
    c2 = ldf c in base;
    r14 = dyn c2(3.0, 5.0, 6.0, 8.0, 10.0);
    check L19() else D5();
  L18():
    r12 = dyn base1(3.0, 5.0, 6.0, 8.0, 10.0);
    goto L3(r12);
  L29():
    st y = r24;
    y9 = ld y;
    check L30() else D13();
  D5():
    deopt 26 [y3, r14];
  D13():
    deopt 58 [y9];
  L19():
    goto L3(r14);
  L30():
    y10 = force? y9;
    checkMissing(y10);
    popenv;
    return y10;
  }
}