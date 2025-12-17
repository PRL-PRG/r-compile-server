fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3833187206;
    st `all.equal.language` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3833187206(target, current, `...`) {
  (reg target:*, reg current:*, reg ddd:dots) -+> V { var target:*, var current:*, var `...`:dots?, reg mode:cls, reg target1:*, reg target2:V, reg p:p(V +), reg r1:V, reg mode1:cls, reg current1:*, reg current2:V, reg p1:p(V +), reg r3:V, reg mt:*, reg mt1:V, reg r4:V, reg c:L, reg c2:V, reg mc:*, reg mc1:V, reg r5:V, reg c3:L, reg c4:V, reg c6:L, reg all_equal_list:cls, reg target3:*, reg target4:V, reg p2:p(V +), reg current3:*, reg current4:V, reg p3:p(V +), reg ddd1:dots?, reg r8:V, reg paste:cls, reg deparse:cls, reg target5:*, reg target6:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg tryCatch:cls, reg paste1:cls, reg deparse1:cls, reg current5:*, reg current6:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg p8:p(V +), reg r20:cls, reg p9:p(V +), reg r22:V, reg sym:cls, reg base:cls, reg guard:L, reg r23:V, reg r24:V, reg mt2:*, reg mt3:V, reg mc2:*, reg mc3:V, reg r25:V, reg c7:L, reg paste2:cls, reg mt4:*, reg mt5:V, reg p10:p(V +), reg mc4:*, reg mc5:V, reg p11:p(V +), reg r28:V, reg r29:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r30:V, reg r31:V, reg ctxt:*, reg ctxt1:V, reg c8:V, reg c9:L, reg r32:V, reg ttxt:*, reg ttxt1:V, reg ctxt2:*, reg ctxt3:V, reg r33:V, reg c10:L, reg pmatch:cls, reg ttxt2:*, reg ttxt3:V, reg p12:p(V +), reg ctxt4:*, reg ctxt5:V, reg p13:p(V +), reg r36:V, reg c11:L, reg r37:S, reg pmatch1:cls, reg ctxt6:*, reg ctxt7:V, reg p14:p(V +), reg ttxt4:*, reg ttxt5:V, reg p15:p(V +), reg r40:V, reg c12:L, reg c13:cls, reg r41:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r42:V, reg r43:V, reg msg:*, reg msg1:V, reg c14:V, reg c15:L, reg msg2:*, reg msg3:V |
    mkenv;
    st target = target;
    st current = current;
    st `...` = ddd;
    mode = ldf mode;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      target1 = ld target;
      target2 = force? target1;
      checkMissing(target2);
      return target2;
    };
    r1 = dyn mode(p);
    check L16() else D1();
  D1():
    deopt 3 [r1];
  L16():
    st mt = r1;
    mode1 = ldf mode;
    check L17() else D2();
  D2():
    deopt 6 [];
  L17():
    p1 = prom<V +>{
      current1 = ld current;
      current2 = force? current1;
      checkMissing(current2);
      return current2;
    };
    r3 = dyn mode1(p1);
    check L18() else D3();
  D3():
    deopt 8 [r3];
  L18():
    st mc = r3;
    mt = ld mt;
    check L19() else D4();
  D4():
    deopt 10 [mt];
  L19():
    mt1 = force? mt;
    checkMissing(mt1);
    r4 = `==`(mt1, "expression");
    c = `as.logical`(r4);
    if c then L20() else L0(c);
  L0(c2):
    c6 = `as.logical`(c2);
    if c6 then L23() else L1();
  L20():
    mc = ld mc;
    check L21() else D5();
  D5():
    deopt 14 [c, mc];
  L1():
    paste = ldf paste;
    check L28() else D8();
  L21():
    mc1 = force? mc;
    checkMissing(mc1);
    r5 = `==`(mc1, "expression");
    c3 = `as.logical`(r5);
    c4 = `&&`(c, c3);
    goto L0(c4);
  L23():
    all_equal_list = ldf `all.equal.list`;
    check L24() else D6();
  D6():
    deopt 20 [];
  D8():
    deopt 29 [];
  L24():
    p2 = prom<V +>{
      target3 = ld target;
      target4 = force? target3;
      checkMissing(target4);
      return target4;
    };
    p3 = prom<V +>{
      current3 = ld current;
      current4 = force? current3;
      checkMissing(current4);
      return current4;
    };
    ddd1 = ld `...`;
    r8 = dyn all_equal_list[, , `...`](p2, p3, ddd1);
    check L25() else D7();
  L28():
    p5 = prom<V +>{
      deparse = ldf deparse;
      p4 = prom<V +>{
        target5 = ld target;
        target6 = force? target5;
        checkMissing(target6);
        return target6;
      };
      r12 = dyn deparse(p4);
      return r12;
    };
    r14 = dyn paste[, collapse](p5, "\n");
    check L29() else D9();
  D7():
    deopt 24 [r8];
  D9():
    deopt 33 [r14];
  L25():
    popenv;
    return r8;
  L29():
    st ttxt = r14;
    tryCatch = ldf tryCatch;
    check L30() else D10();
  D10():
    deopt 36 [];
  L30():
    p8 = prom<V +>{
      paste1 = ldf paste;
      p7 = prom<V +>{
        deparse1 = ldf deparse;
        p6 = prom<V +>{
          current5 = ld current;
          current6 = force? current5;
          checkMissing(current6);
          return current6;
        };
        r16 = dyn deparse1(p6);
        return r16;
      };
      r18 = dyn paste1[, collapse](p7, "\n");
      return r18;
    };
    p9 = prom<V +>{
      r20 = clos inner3708401697;
      return r20;
    };
    r22 = dyn tryCatch[, error](p8, p9);
    check L31() else D11();
  D11():
    deopt 40 [r22];
  L31():
    st ctxt = r22;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L3(r24):
    st msg = r24;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L58() else L59();
  L32():
    mt2 = ld mt;
    check L34() else D12();
  L33():
    r23 = dyn base(<lang if(`!=`(mt, mc), paste0("Modes of target, current: ", mt, ", ", mc))>, <lang if(is.null(ctxt), "current is not deparse()able", if(`!=`(ttxt, ctxt), {
          if(pmatch(ttxt, ctxt, 0), "target is a subset of current", if(pmatch(ctxt, ttxt, 0), "current is a subset of target", "target, current do not match when deparsed"))
        }))>);
    goto L3(r23);
  D12():
    deopt 44 [mt2];
  L13(r43):
    c15 = `as.logical`(r43);
    if c15 then L61() else L14();
  L34():
    mt3 = force? mt2;
    checkMissing(mt3);
    mc2 = ld mc;
    check L35() else D13();
  L58():
    msg = ld msg;
    check L60() else D24();
  L59():
    r42 = dyn base2(<sym msg>);
    goto L13(r42);
  D13():
    deopt 45 [mt3, mc2];
  D24():
    deopt 91 [msg];
  L14():
    msg2 = ld msg;
    check L63() else D25();
  L35():
    mc3 = force? mc2;
    checkMissing(mc3);
    r25 = `!=`(mt3, mc3);
    c7 = `as.logical`(r25);
    if c7 then L36() else L4();
  L60():
    msg1 = force? msg;
    checkMissing(msg1);
    c14 = `==`(msg1, NULL);
    goto L13(c14);
  L61():
    popenv;
    return TRUE;
  D25():
    deopt 96 [msg2];
  L4():
    goto L5(NULL);
  L5(r29):
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L36():
    paste2 = ldf paste0;
    check L37() else D14();
  L63():
    msg3 = force? msg2;
    checkMissing(msg3);
    popenv;
    return msg3;
  D14():
    deopt 49 [];
  L6(r31):
    c9 = `as.logical`(r31);
    if c9 then L43() else L7();
  L37():
    p10 = prom<V +>{
      mt4 = ld mt;
      mt5 = force? mt4;
      checkMissing(mt5);
      return mt5;
    };
    p11 = prom<V +>{
      mc4 = ld mc;
      mc5 = force? mc4;
      checkMissing(mc5);
      return mc5;
    };
    r28 = dyn paste2("Modes of target, current: ", p10, ", ", p11);
    check L38() else D15();
  L40():
    ctxt = ld ctxt;
    check L42() else D16();
  L41():
    r30 = dyn base1(<sym ctxt>);
    goto L6(r30);
  D15():
    deopt 54 [r28];
  D16():
    deopt 58 [ctxt];
  L7():
    ttxt = ld ttxt;
    check L45() else D17();
  L8(r32):
    c13 = ldf c in base;
    r41 = dyn c13(r29, r32);
    check L57() else D23();
  L38():
    goto L5(r28);
  L42():
    ctxt1 = force? ctxt;
    checkMissing(ctxt1);
    c8 = `==`(ctxt1, NULL);
    goto L6(c8);
  L43():
    goto L8("current is not deparse()able");
  D17():
    deopt 63 [ttxt];
  D23():
    deopt 88 [r41];
  L45():
    ttxt1 = force? ttxt;
    checkMissing(ttxt1);
    ctxt2 = ld ctxt;
    check L46() else D18();
  L57():
    goto L3(r41);
  D18():
    deopt 64 [ttxt1, ctxt2];
  L46():
    ctxt3 = force? ctxt2;
    checkMissing(ctxt3);
    r33 = `!=`(ttxt1, ctxt3);
    c10 = `as.logical`(r33);
    if c10 then L47() else L9();
  L9():
    goto L8(NULL);
  L47():
    pmatch = ldf pmatch;
    check L48() else D19();
  D19():
    deopt 68 [];
  L48():
    p12 = prom<V +>{
      ttxt2 = ld ttxt;
      ttxt3 = force? ttxt2;
      checkMissing(ttxt3);
      return ttxt3;
    };
    p13 = prom<V +>{
      ctxt4 = ld ctxt;
      ctxt5 = force? ctxt4;
      checkMissing(ctxt5);
      return ctxt5;
    };
    r36 = dyn pmatch(p12, p13, 0);
    check L49() else D20();
  D20():
    deopt 72 [r36];
  L49():
    c11 = `as.logical`(r36);
    if c11 then L50() else L10();
  L10():
    pmatch1 = ldf pmatch;
    check L52() else D21();
  L11(r37):
    goto L8(r37);
  L50():
    goto L11("target is a subset of current");
  D21():
    deopt 76 [];
  L52():
    p14 = prom<V +>{
      ctxt6 = ld ctxt;
      ctxt7 = force? ctxt6;
      checkMissing(ctxt7);
      return ctxt7;
    };
    p15 = prom<V +>{
      ttxt4 = ld ttxt;
      ttxt5 = force? ttxt4;
      checkMissing(ttxt5);
      return ttxt5;
    };
    r40 = dyn pmatch1(p14, p15, 0);
    check L53() else D22();
  D22():
    deopt 80 [r40];
  L53():
    c12 = `as.logical`(r40);
    if c12 then L54() else L12();
  L12():
    goto L11("target, current do not match when deparsed");
  L54():
    goto L11("current is a subset of target");
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}