fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg options1:cls, reg r2:V, reg format_info:cls, reg r3:V, reg format_info1:cls, reg p:p(V +), reg r5:V, reg format_info2:cls, reg r6:V, reg format_info3:cls, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:R, reg r14:R, reg r15:V, reg c:cls, reg r16:V, reg r17:V, reg r18:V, reg formatC:cls, reg x:*, reg x1:V, reg p1:p(V +), reg r20:V, reg l:*, reg names__:cls, reg r21:V, reg cbind:cls, reg sapply:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg format:*, reg format1:V, reg p3:p(V +), reg r24:V, reg p4:p(V +), reg r26:V, reg t:cls, reg sapply1:cls, reg x4:*, reg x5:V, reg p5:p(V +), reg format_info4:*, reg format_info5:V, reg p6:p(V +), reg r29:V, reg p7:p(V +), reg r31:V, reg t1:cls, reg sapply2:cls, reg x6:*, reg x7:V, reg p8:p(V +), reg format_info6:*, reg format_info7:V, reg p9:p(V +), reg r34:V, reg p10:p(V +), reg r36:V, reg options2:cls, reg dd:*, reg dd1:V, reg p11:p(V +), reg r38:V |
    mkenv;
    r = clos inner1369010163;
    st `format.info` = r;
    options = ldf options;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn options("digits");
    check L2() else D1();
  D1():
    deopt 6 [r1];
  L2():
    st dd = r1;
    options1 = ldf options;
    check L3() else D2();
  D2():
    deopt 9 [];
  L3():
    r2 = dyn options1[digits](7.0);
    check L4() else D3();
  D3():
    deopt 12 [r2];
  L4():
    format_info = ldf `format.info`;
    check L5() else D4();
  D4():
    deopt 14 [];
  L5():
    r3 = dyn format_info(123.0);
    check L6() else D5();
  D5():
    deopt 16 [r3];
  L6():
    format_info1 = ldf `format.info`;
    check L7() else D6();
  D6():
    deopt 18 [];
  L7():
    p = prom<V +>{
      return 3.141592653589793;
    };
    r5 = dyn format_info1(p);
    check L8() else D7();
  D7():
    deopt 20 [r5];
  L8():
    format_info2 = ldf `format.info`;
    check L9() else D8();
  D8():
    deopt 22 [];
  L9():
    r6 = dyn format_info2(1.0E8);
    check L10() else D9();
  D9():
    deopt 24 [r6];
  L10():
    format_info3 = ldf `format.info`;
    check L11() else D10();
  D10():
    deopt 26 [];
  L11():
    r7 = dyn format_info3(1.0E222);
    check L12() else D11();
  D11():
    deopt 28 [r7];
  L12():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r13, r14, r15):
    r17 = `^`(r14, r15);
    r18 = `*`(r13, r17);
    st x = r18;
    formatC = ldf formatC;
    check L16() else D13();
  L13():
    c = ldf c in base;
    r16 = dyn c(-10.0, -2.0, <int 0, 1, 2>, 8.0, 20.0);
    check L15() else D12();
  L14():
    r12 = dyn base(<lang `-`(10.0)>, <lang `-`(2.0)>, <lang `:`(0.0, 2.0)>, 8.0, 20.0);
    goto L0(3.141592653589793, 10.0, r12);
  D12():
    deopt 42 [3.141592653589793, 10.0, r16];
  D13():
    deopt 47 [];
  L15():
    goto L0(3.141592653589793, 10.0, r16);
  L16():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r20 = dyn formatC[, width, digits, format](p1, 1.0, 3.0, "g");
    check L17() else D14();
  D14():
    deopt 55 [r20];
  L17():
    l = ld x;
    names__ = ldf `names<-`;
    check L18() else D15();
  D15():
    deopt 57 [r20, l, r20];
  L18():
    r21 = dyn names__(l, NULL, r20);
    check L19() else D16();
  D16():
    deopt 59 [r20, r21];
  L19():
    st x = r21;
    cbind = ldf cbind;
    check L20() else D17();
  D17():
    deopt 62 [];
  L20():
    p4 = prom<V +>{
      sapply = ldf sapply;
      p2 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      p3 = prom<V +>{
        format = ld format;
        format1 = force? format;
        checkMissing(format1);
        return format1;
      };
      r24 = dyn sapply(p2, p3);
      return r24;
    };
    r26 = dyn cbind(p4);
    check L21() else D18();
  D18():
    deopt 64 [r26];
  L21():
    t = ldf t;
    check L22() else D19();
  D19():
    deopt 66 [];
  L22():
    p7 = prom<V +>{
      sapply1 = ldf sapply;
      p5 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      p6 = prom<V +>{
        format_info4 = ld `format.info`;
        format_info5 = force? format_info4;
        checkMissing(format_info5);
        return format_info5;
      };
      r29 = dyn sapply1(p5, p6);
      return r29;
    };
    r31 = dyn t(p7);
    check L23() else D20();
  D20():
    deopt 68 [r31];
  L23():
    t1 = ldf t;
    check L24() else D21();
  D21():
    deopt 70 [];
  L24():
    p10 = prom<V +>{
      sapply2 = ldf sapply;
      p8 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      p9 = prom<V +>{
        format_info6 = ld `format.info`;
        format_info7 = force? format_info6;
        checkMissing(format_info7);
        return format_info7;
      };
      r34 = dyn sapply2[, , nsmall](p8, p9, 8.0);
      return r34;
    };
    r36 = dyn t1(p10);
    check L25() else D22();
  D22():
    deopt 72 [r36];
  L25():
    options2 = ldf options;
    check L26() else D23();
  D23():
    deopt 74 [];
  L26():
    p11 = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      return dd1;
    };
    r38 = dyn options2(p11);
    check L27() else D24();
  D24():
    deopt 76 [r38];
  L27():
    popenv;
    return r38;
  }
}
fun inner1369010163(x, digits, nsmall) {
  (reg x:*, reg digits:*, reg nsmall:*) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var nsmall:*, reg nsmall_isMissing:L, reg nsmall_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg digits1:*, reg digits2:V, reg nsmall1:*, reg nsmall2:V, reg format_info:cls, reg r2:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(NULL) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    nsmall_isMissing = missing.0(nsmall);
    if nsmall_isMissing then L1(0) else L1(nsmall);
  L1(nsmall_orDefault):
    st nsmall = nsmall_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<lang format.info(x, digits, nsmall)>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    digits1 = ld digits;
    check L6() else D1();
  D1():
    deopt 4 [digits1];
  L6():
    digits2 = force? digits1;
    checkMissing(digits2);
    nsmall1 = ld nsmall;
    check L7() else D2();
  D2():
    deopt 6 [nsmall1];
  L7():
    nsmall2 = force? nsmall1;
    checkMissing(nsmall2);
    format_info = ldf `format.info` in base;
    r2 = dyn format_info(x2, digits2, nsmall2);
    check L8() else D3();
  D3():
    deopt 9 [r2];
  L8():
    goto L2(r2);
  }
}