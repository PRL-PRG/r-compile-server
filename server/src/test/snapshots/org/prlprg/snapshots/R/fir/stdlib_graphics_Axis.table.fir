fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1049962223;
    st `Axis.table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1049962223(x, at, `...`, side, labels) {
  (reg x:*, reg at:*, reg ddd:dots, reg side:*, reg labels:*) -+> V { var x:*, var at:*, var `...`:dots?, var side:*, reg side_isMissing:L, reg side_orDefault:*, var labels:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg dim:cls, reg r4:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r9:V, reg c1:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg options:cls, reg p:p(V +), reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg nx:*, reg nx1:V, reg as_numeric:cls, reg r21:V, reg is_na:cls, reg r22:V, reg any:cls, reg r23:V, reg r24:V, reg options1:cls, reg ow:*, reg ow1:V, reg p1:p(V +), reg r26:V, reg is_num:*, reg is_num1:V, reg c2:L, reg xx:*, reg xx1:V, reg xx2:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg x5:*, reg x6:V, reg seq_int:cls, reg r28:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg missing:cls, reg r31:V, reg c3:L, reg x7:*, reg x8:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg missing1:cls, reg r34:V, reg c4:L, reg nx2:*, reg nx3:V, reg axis:cls, reg side1:*, reg side2:V, reg p2:p(V +), reg at1:*, reg at2:V, reg p3:p(V +), reg labels1:*, reg labels2:V, reg p4:p(V +), reg ddd1:dots?, reg r38:V, reg stop:cls, reg r39:V |
    mkenv;
    st x = x;
    st at = at;
    st `...` = ddd;
    side_isMissing = missing.0(side);
    if side_isMissing then L0(1.0) else L0(side);
  L0(side_orDefault):
    st side = side_orDefault;
    st labels = labels;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r1):
    r6 = `==`(r1, 1.0);
    c = `as.logical`(r6);
    if c then L24() else L3();
  L17():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L18():
    r = dyn base(<lang dim(x)>);
    goto L1(r);
  L2(r3):
    length = ldf length in base;
    r5 = dyn length(r3);
    check L23() else D2();
  L3():
    stop = ldf stop;
    check L67() else D21();
  L19():
    x1 = ld x;
    check L21() else D0();
  L20():
    r2 = dyn base1(<sym x>);
    goto L2(r2);
  L24():
    sym2 = ldf dimnames;
    base2 = ldf dimnames in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  D0():
    deopt 4 [x1];
  D2():
    deopt 9 [r5];
  D21():
    deopt 86 [];
  L4(r8):
    c1 = `is.object`(r8);
    if c1 then L29() else L30(r8);
  L21():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r4 = dyn dim(x2);
    check L22() else D1();
  L23():
    goto L1(r5);
  L25():
    x3 = ld x;
    check L27() else D3();
  L26():
    r7 = dyn base2(<sym x>);
    goto L4(r7);
  L67():
    r39 = dyn stop("only for 1-D table");
    check L68() else D22();
  D1():
    deopt 7 [r4];
  D3():
    deopt 14 [x3];
  D22():
    deopt 88 [r39];
  L5(dx1):
    st nx = dx1;
    options = ldf options;
    check L32() else D5();
  L22():
    goto L2(r4);
  L27():
    x4 = force? x3;
    checkMissing(x4);
    dimnames = ldf dimnames in base;
    r9 = dyn dimnames(x4);
    check L28() else D4();
  L29():
    dr = tryDispatchBuiltin.1("[[", r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(r11):
    __ = ldf `[[` in base;
    r12 = dyn __(r11, 1.0);
    goto L5(r12);
  L68():
    popenv;
    return r39;
  D4():
    deopt 17 [r9];
  D5():
    deopt 23 [];
  L28():
    goto L4(r9);
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L32():
    p = prom<V +>{
      return -1.0;
    };
    r14 = dyn options[warn](p);
    check L33() else D6();
  D6():
    deopt 26 [r14];
  L33():
    st ow = r14;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L6(r16):
    r24 = `!`(r16);
    st `is.num` = r24;
    options1 = ldf options;
    check L44() else D11();
  L34():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  L35():
    r15 = dyn base3(<lang is.na(`<-`(xx, as.numeric(nx)))>);
    goto L6(r15);
  D11():
    deopt 46 [];
  L7(r18):
    any = ldf any in base;
    r23 = dyn any(r18);
    check L43() else D10();
  L36():
    sym5 = ldf `as.numeric`;
    base5 = ldf `as.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L38() else L39();
  L37():
    r17 = dyn base4(<lang `<-`(xx, as.numeric(nx))>);
    goto L7(r17);
  L44():
    p1 = prom<V +>{
      ow = ld ow;
      ow1 = force? ow;
      checkMissing(ow1);
      return ow1;
    };
    r26 = dyn options1(p1);
    check L45() else D12();
  D10():
    deopt 42 [r23];
  D12():
    deopt 48 [r26];
  L8(r20):
    st xx = r20;
    is_na = ldf `is.na` in base;
    r22 = dyn is_na(r20);
    check L42() else D9();
  L38():
    nx = ld nx;
    check L40() else D7();
  L39():
    r19 = dyn base5(<sym nx>);
    goto L8(r19);
  L43():
    goto L6(r23);
  L45():
    is_num = ld `is.num`;
    check L46() else D13();
  D7():
    deopt 34 [nx];
  D9():
    deopt 40 [r22];
  D13():
    deopt 49 [is_num];
  L40():
    nx1 = force? nx;
    checkMissing(nx1);
    as_numeric = ldf `as.numeric` in base;
    r21 = dyn as_numeric(nx1);
    check L41() else D8();
  L42():
    goto L7(r22);
  L46():
    is_num1 = force? is_num;
    checkMissing(is_num1);
    c2 = `as.logical`(is_num1);
    if c2 then L47() else L9();
  D8():
    deopt 37 [r21];
  L9():
    sym6 = ldf `seq.int`;
    base6 = ldf `seq.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L50() else L51();
  L10(xx2):
    st x0 = xx2;
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L54() else L55();
  L41():
    goto L8(r21);
  L47():
    xx = ld xx;
    check L48() else D14();
  D14():
    deopt 51 [xx];
  L11(r30):
    c3 = `as.logical`(r30);
    if c3 then L56() else L12();
  L48():
    xx1 = force? xx;
    checkMissing(xx1);
    goto L10(xx1);
  L50():
    x5 = ld x;
    check L52() else D15();
  L51():
    r27 = dyn base6(<sym x>);
    goto L10(r27);
  L54():
    missing = ldf missing in base;
    r31 = dyn missing(<sym at>);
    goto L11(r31);
  L55():
    r29 = dyn base7(<sym at>);
    goto L11(r29);
  D15():
    deopt 55 [x5];
  L12():
    goto L13();
  L13():
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L59() else L60();
  L52():
    x6 = force? x5;
    checkMissing(x6);
    seq_int = ldf `seq.int` in base;
    r28 = dyn seq_int(x6);
    check L53() else D16();
  L56():
    x7 = ld x0;
    check L57() else D17();
  D16():
    deopt 58 [r28];
  D17():
    deopt 63 [x7];
  L14(r33):
    c4 = `as.logical`(r33);
    if c4 then L61() else L15();
  L53():
    goto L10(r28);
  L57():
    x8 = force? x7;
    checkMissing(x8);
    st at = x8;
    goto L13();
  L59():
    missing1 = ldf missing in base;
    r34 = dyn missing1(<sym labels>);
    goto L14(r34);
  L60():
    r32 = dyn base8(<sym labels>);
    goto L14(r32);
  L15():
    goto L16();
  L16():
    axis = ldf axis;
    check L64() else D19();
  L61():
    nx2 = ld nx;
    check L62() else D18();
  D18():
    deopt 71 [nx2];
  D19():
    deopt 77 [];
  L62():
    nx3 = force? nx2;
    checkMissing(nx3);
    st labels = nx3;
    goto L16();
  L64():
    p2 = prom<V +>{
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      return side2;
    };
    p3 = prom<V +>{
      at1 = ld at;
      at2 = force? at1;
      checkMissing(at2);
      return at2;
    };
    p4 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    ddd1 = ld `...`;
    r38 = dyn axis[, at, labels, `...`](p2, p3, p4, ddd1);
    check L65() else D20();
  D20():
    deopt 84 [r38];
  L65():
    popenv;
    return r38;
  }
}