fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner388120682;
    st `unstack.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner388120682(x, form, `...`) {
  (reg x:*, reg form:*, reg ddd:dots) -+> V { var x:*, var form:*, var `...`:dots?, reg as_list:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg __:cls, reg r2:V, reg r3:cls, reg form1:*, reg form2:V, reg p1:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg form3:*, reg form4:V, reg length:cls, reg r8:V, reg r9:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg c5:L, reg r11:V, reg all_vars:cls, reg form5:*, reg form6:V, reg p2:p(V +), reg r13:V, reg length1:cls, reg r14:V, reg r15:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg tapply:cls, reg eval:cls, reg form7:*, reg form8:V, reg c10:L, reg form10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r20:V, reg p3:p(V +), reg x3:*, reg x4:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg eval1:cls, reg form11:*, reg form12:V, reg c11:L, reg form14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r25:V, reg p6:p(V +), reg x5:*, reg x6:V, reg p7:p(V +), reg r28:V, reg p8:p(V +), reg as_vector:*, reg as_vector1:V, reg p9:p(V +), reg r31:V, reg c12:cls, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg res:*, reg res1:V, reg length2:cls, reg r35:V, reg r36:V, reg c13:L, reg c15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg c18:L, reg r38:V, reg diff:cls, reg lengths:cls, reg res2:*, reg res3:V, reg p10:p(V +), reg r40:V, reg p11:p(V +), reg r42:V, reg r43:V, reg any:cls, reg r44:V, reg c19:L, reg c20:V, reg c22:L, reg res4:*, reg res5:V, reg data_frame:cls, reg res6:*, reg res7:V, reg p12:p(V +), reg r48:V |
    mkenv;
    st x = x;
    st form = form;
    st `...` = ddd;
    as_list = ldf `as.list`;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_list(p);
    check L12() else D1();
  D1():
    deopt 3 [r1];
  L12():
    st x = r1;
    __ = ldf `::`;
    check L13() else D2();
  D2():
    deopt 6 [];
  L13():
    r2 = dyn __("stats", "as.formula");
    check L14() else D3();
  D3():
    deopt 9 [r2];
  L14():
    checkFun.0(r2);
    r3 = r2 as cls;
    p1 = prom<V +>{
      form1 = ld form;
      form2 = force? form1;
      checkMissing(form2);
      return form2;
    };
    r5 = dyn r3(p1);
    check L15() else D4();
  D4():
    deopt 12 [r5];
  L15():
    st form = r5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r7):
    r9 = `<`(r7, 3.0);
    c = `as.logical`(r9);
    if c then L1(c) else L20();
  L16():
    form3 = ld form;
    check L18() else D5();
  L17():
    r6 = dyn base(<sym form>);
    goto L0(r6);
  D5():
    deopt 16 [form3];
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L27() else L3();
  L18():
    form4 = force? form3;
    checkMissing(form4);
    length = ldf length in base;
    r8 = dyn length(form4);
    check L19() else D6();
  L20():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  D6():
    deopt 19 [r8];
  L2(c5, r11):
    r15 = `>`(r11, 2.0);
    c6 = `as.logical`(r15);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3():
    goto L4();
  L4():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L19():
    goto L0(r8);
  L21():
    all_vars = ldf `all.vars`;
    check L23() else D7();
  L22():
    r10 = dyn base1(<lang all.vars(form)>);
    goto L2(c, r10);
  L27():
    stop = ldf stop;
    check L28() else D10();
  D7():
    deopt 25 [c];
  D10():
    deopt 34 [];
  L5(r19):
    st res = r19;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L23():
    p2 = prom<V +>{
      form5 = ld form;
      form6 = force? form5;
      checkMissing(form6);
      return form6;
    };
    r13 = dyn all_vars(p2);
    check L24() else D8();
  L28():
    r16 = dyn stop("'form' must be a two-sided formula with one term on each side");
    check L29() else D11();
  L31():
    tapply = ldf tapply;
    check L33() else D12();
  L32():
    r18 = dyn base2(<lang tapply(eval(`[[`(form, 2), x), eval(`[[`(form, 3), x), as.vector)>);
    goto L5(r18);
  D8():
    deopt 27 [c, r13];
  D11():
    deopt 36 [r16];
  D12():
    deopt 42 [];
  L6(r34):
    r36 = `>=`(r34, 2);
    c13 = `as.logical`(r36);
    if c13 then L40() else L7(c13);
  L24():
    length1 = ldf length in base;
    r14 = dyn length1(r13);
    check L25() else D9();
  L29():
    goto L4();
  L33():
    p5 = prom<V +>{
      eval = ldf eval;
      p3 = prom<V +>{
        form7 = ld form;
        form8 = force? form7;
        checkMissing(form8);
        c10 = `is.object`(form8);
        if c10 then L1() else L2(form8);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", form8);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(form10):
        __1 = ldf `[[` in base;
        r20 = dyn __1(form10, 2);
        goto L0(r20);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p4 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r23 = dyn eval(p3, p4);
      return r23;
    };
    p8 = prom<V +>{
      eval1 = ldf eval;
      p6 = prom<V +>{
        form11 = ld form;
        form12 = force? form11;
        checkMissing(form12);
        c11 = `is.object`(form12);
        if c11 then L1() else L2(form12);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", form12);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(form14):
        __2 = ldf `[[` in base;
        r25 = dyn __2(form14, 3);
        goto L0(r25);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p7 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r28 = dyn eval1(p6, p7);
      return r28;
    };
    p9 = prom<V +>{
      as_vector = ld `as.vector`;
      as_vector1 = force? as_vector;
      checkMissing(as_vector1);
      return as_vector1;
    };
    r31 = dyn tapply(p5, p8, p9);
    check L34() else D13();
  L36():
    res = ld res;
    check L38() else D15();
  L37():
    r33 = dyn base3(<sym res>);
    goto L6(r33);
  D9():
    deopt 29 [c, r14];
  D13():
    deopt 46 [r31];
  D15():
    deopt 52 [res];
  L7(c15):
    c22 = `as.logical`(c15);
    if c22 then L47() else L9();
  L25():
    goto L2(c, r14);
  L34():
    c12 = ldf c in base;
    r32 = dyn c12(r31);
    check L35() else D14();
  L38():
    res1 = force? res;
    checkMissing(res1);
    length2 = ldf length in base;
    r35 = dyn length2(res1);
    check L39() else D16();
  L40():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  D14():
    deopt 48 [r32];
  D16():
    deopt 55 [r35];
  L8(c18, r38):
    c19 = `as.logical`(r38);
    c20 = `&&`(c18, c19);
    goto L7(c20);
  L9():
    data_frame = ldf `data.frame`;
    check L51() else D21();
  L35():
    goto L5(r32);
  L39():
    goto L6(r35);
  L41():
    diff = ldf diff;
    check L43() else D17();
  L42():
    r37 = dyn base4(<lang `!=`(diff(lengths(res)), 0)>);
    goto L8(c13, r37);
  L47():
    res4 = ld res;
    check L48() else D20();
  D17():
    deopt 61 [c13];
  D20():
    deopt 69 [res4];
  D21():
    deopt 75 [];
  L43():
    p11 = prom<V +>{
      lengths = ldf lengths;
      p10 = prom<V +>{
        res2 = ld res;
        res3 = force? res2;
        checkMissing(res3);
        return res3;
      };
      r40 = dyn lengths(p10);
      return r40;
    };
    r42 = dyn diff(p11);
    check L44() else D18();
  L48():
    res5 = force? res4;
    checkMissing(res5);
    popenv;
    return res5;
  L51():
    p12 = prom<V +>{
      res6 = ld res;
      res7 = force? res6;
      checkMissing(res7);
      return res7;
    };
    r48 = dyn data_frame[, stringsAsFactors](p12, FALSE);
    check L52() else D22();
  D18():
    deopt 63 [c13, r42];
  D22():
    deopt 79 [r48];
  L44():
    r43 = `!=`(r42, 0);
    any = ldf any in base;
    r44 = dyn any(r43);
    check L45() else D19();
  L52():
    popenv;
    return r48;
  D19():
    deopt 67 [c13, r44];
  L45():
    goto L8(c13, r44);
  }
}