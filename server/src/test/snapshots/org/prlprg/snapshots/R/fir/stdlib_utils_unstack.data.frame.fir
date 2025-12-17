fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner388120682;
    st `unstack.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner388120682(x, form, `...`) {
  (reg x:*, reg form:*, reg ddd:dots) -+> V { var x:*, var form:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg __:cls, reg r3:V, reg r4:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r6:V, reg r7:V, reg __1:cls, reg r8:V, reg r9:cls, reg form1:*, reg form2:V, reg p1:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg form3:*, reg form4:V, reg length:cls, reg r14:V, reg r15:V, reg c1:L, reg stop:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg tapply:cls, reg eval:cls, reg form5:*, reg form6:V, reg c2:L, reg form8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r20:V, reg p2:p(V +), reg x3:*, reg x4:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg eval1:cls, reg form9:*, reg form10:V, reg c3:L, reg form12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __3:cls, reg r25:V, reg p5:p(V +), reg x5:*, reg x6:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg as_vector:*, reg as_vector1:V, reg p8:p(V +), reg r31:V, reg c4:cls, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg res:*, reg res1:V, reg length1:cls, reg r35:V, reg r36:V, reg c5:L, reg c7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg c10:L, reg r38:V, reg diff:cls, reg lengths:cls, reg res2:*, reg res3:V, reg p9:p(V +), reg r40:V, reg p10:p(V +), reg r42:V, reg r43:V, reg any:cls, reg r44:V, reg c11:L, reg c12:V, reg c14:L, reg res4:*, reg res5:V, reg data_frame:cls, reg res6:*, reg res7:V, reg p11:p(V +), reg r48:V |
    mkenv;
    st x = x;
    st form = form;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    c = `as.logical`(r1);
    if c then L14() else L1();
  L12():
    missing = ldf missing in base;
    r2 = dyn missing(<sym form>);
    goto L0(r2);
  L13():
    r = dyn base(<sym form>);
    goto L0(r);
  L1():
    __1 = ldf `::`;
    check L19() else D3();
  L2(r7):
    st form = r7;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L14():
    __ = ldf `::`;
    check L15() else D0();
  D0():
    deopt 4 [];
  D3():
    deopt 12 [];
  L3(r13):
    r15 = `<`(r13, 3.0);
    c1 = `as.logical`(r15);
    if c1 then L26() else L4();
  L15():
    r3 = dyn __("stats", "formula");
    check L16() else D1();
  L19():
    r8 = dyn __1("stats", "as.formula");
    check L20() else D4();
  L22():
    form3 = ld form;
    check L24() else D6();
  L23():
    r12 = dyn base1(<sym form>);
    goto L3(r12);
  D1():
    deopt 7 [r3];
  D4():
    deopt 15 [r8];
  D6():
    deopt 22 [form3];
  L4():
    goto L5();
  L5():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L16():
    checkFun.0(r3);
    r4 = r3 as cls;
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r6 = dyn r4(p);
    check L17() else D2();
  L20():
    checkFun.0(r8);
    r9 = r8 as cls;
    p1 = prom<V +>{
      form1 = ld form;
      form2 = force? form1;
      checkMissing(form2);
      return form2;
    };
    r11 = dyn r9(p1);
    check L21() else D5();
  L24():
    form4 = force? form3;
    checkMissing(form4);
    length = ldf length in base;
    r14 = dyn length(form4);
    check L25() else D7();
  L26():
    stop = ldf stop;
    check L27() else D8();
  D2():
    deopt 10 [r6];
  D5():
    deopt 18 [r11];
  D7():
    deopt 25 [r14];
  D8():
    deopt 29 [];
  L6(r19):
    st res = r19;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L17():
    goto L2(r6);
  L21():
    goto L2(r11);
  L25():
    goto L3(r14);
  L27():
    r16 = dyn stop("'form' must be a two-sided formula");
    check L28() else D9();
  L30():
    tapply = ldf tapply;
    check L32() else D10();
  L31():
    r18 = dyn base2(<lang tapply(eval(`[[`(form, 2), x), eval(`[[`(form, 3), x), as.vector)>);
    goto L6(r18);
  D9():
    deopt 31 [r16];
  D10():
    deopt 37 [];
  L7(r34):
    r36 = `>=`(r34, 2);
    c5 = `as.logical`(r36);
    if c5 then L39() else L8(c5);
  L28():
    goto L5();
  L32():
    p4 = prom<V +>{
      eval = ldf eval;
      p2 = prom<V +>{
        form5 = ld form;
        form6 = force? form5;
        checkMissing(form6);
        c2 = `is.object`(form6);
        if c2 then L1() else L2(form6);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", form6);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(form8):
        __2 = ldf `[[` in base;
        r20 = dyn __2(form8, 2);
        goto L0(r20);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p3 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r23 = dyn eval(p2, p3);
      return r23;
    };
    p7 = prom<V +>{
      eval1 = ldf eval;
      p5 = prom<V +>{
        form9 = ld form;
        form10 = force? form9;
        checkMissing(form10);
        c3 = `is.object`(form10);
        if c3 then L1() else L2(form10);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", form10);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(form12):
        __3 = ldf `[[` in base;
        r25 = dyn __3(form12, 3);
        goto L0(r25);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p6 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r28 = dyn eval1(p5, p6);
      return r28;
    };
    p8 = prom<V +>{
      as_vector = ld `as.vector`;
      as_vector1 = force? as_vector;
      checkMissing(as_vector1);
      return as_vector1;
    };
    r31 = dyn tapply(p4, p7, p8);
    check L33() else D11();
  L35():
    res = ld res;
    check L37() else D13();
  L36():
    r33 = dyn base3(<sym res>);
    goto L7(r33);
  D11():
    deopt 41 [r31];
  D13():
    deopt 47 [res];
  L8(c7):
    c14 = `as.logical`(c7);
    if c14 then L46() else L10();
  L33():
    c4 = ldf c in base;
    r32 = dyn c4(r31);
    check L34() else D12();
  L37():
    res1 = force? res;
    checkMissing(res1);
    length1 = ldf length in base;
    r35 = dyn length1(res1);
    check L38() else D14();
  L39():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  D12():
    deopt 43 [r32];
  D14():
    deopt 50 [r35];
  L9(c10, r38):
    c11 = `as.logical`(r38);
    c12 = `&&`(c10, c11);
    goto L8(c12);
  L10():
    data_frame = ldf `data.frame`;
    check L50() else D19();
  L34():
    goto L6(r32);
  L38():
    goto L7(r35);
  L40():
    diff = ldf diff;
    check L42() else D15();
  L41():
    r37 = dyn base4(<lang `!=`(diff(lengths(res)), 0)>);
    goto L9(c5, r37);
  L46():
    res4 = ld res;
    check L47() else D18();
  D15():
    deopt 56 [c5];
  D18():
    deopt 64 [res4];
  D19():
    deopt 70 [];
  L42():
    p10 = prom<V +>{
      lengths = ldf lengths;
      p9 = prom<V +>{
        res2 = ld res;
        res3 = force? res2;
        checkMissing(res3);
        return res3;
      };
      r40 = dyn lengths(p9);
      return r40;
    };
    r42 = dyn diff(p10);
    check L43() else D16();
  L47():
    res5 = force? res4;
    checkMissing(res5);
    popenv;
    return res5;
  L50():
    p11 = prom<V +>{
      res6 = ld res;
      res7 = force? res6;
      checkMissing(res7);
      return res7;
    };
    r48 = dyn data_frame[, stringsAsFactors](p11, FALSE);
    check L51() else D20();
  D16():
    deopt 58 [c5, r42];
  D20():
    deopt 74 [r48];
  L43():
    r43 = `!=`(r42, 0);
    any = ldf any in base;
    r44 = dyn any(r43);
    check L44() else D17();
  L51():
    popenv;
    return r48;
  D17():
    deopt 62 [c5, r44];
  L44():
    goto L9(c5, r44);
  }
}