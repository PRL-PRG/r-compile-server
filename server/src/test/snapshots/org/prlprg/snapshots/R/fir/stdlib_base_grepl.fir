fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1039849809;
    st grepl = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1039849809(pattern, x, `ignore.case`, perl, fixed, useBytes) {
  (reg pattern:*, reg x:*, reg ignore_case:*, reg perl:*, reg fixed:*, reg useBytes:*) -+> V { var pattern:*, var x:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg is_factor:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg levels:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r5:V, reg length:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c8:L, reg r10:V, reg r11:V, reg x5:*, reg x6:V, reg length1:cls, reg r12:V, reg r13:V, reg c9:L, reg c10:V, reg c12:L, reg grepl:cls, reg pattern1:*, reg pattern2:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg levels1:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r18:V, reg c13:cls, reg r19:V, reg p4:p(V +), reg ignore_case1:*, reg ignore_case2:V, reg p5:p(V +), reg perl1:*, reg perl2:V, reg p6:p(V +), reg fixed1:*, reg fixed2:V, reg p7:p(V +), reg useBytes1:*, reg useBytes2:V, reg p8:p(V +), reg r25:V, reg out:*, reg out1:V, reg c14:L, reg out3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg out6:V, reg r27:V, reg out7:*, reg out8:V, reg length2:cls, reg r28:V, reg __:cls, reg r29:V, reg out9:*, reg out10:V, reg c15:L, reg out12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg x9:*, reg x10:V, reg __1:cls, reg r30:V, reg outna:*, reg outna1:V, reg l:*, reg c16:L, reg outna3:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg outna10:V, reg l5:*, reg outna11:V, reg r32:V, reg x11:*, reg x12:V, reg is_na:cls, reg r33:V, reg ___:cls, reg r34:V, reg out13:*, reg out14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg x13:*, reg x14:V, reg c17:L, reg r37:V, reg c18:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg x15:*, reg x16:V, reg as_character:cls, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg pattern3:*, reg pattern4:V, reg as_character1:cls, reg r46:V, reg x17:*, reg x18:V, reg ignore_case3:*, reg ignore_case4:V, reg perl3:*, reg perl4:V, reg fixed3:*, reg fixed4:V, reg useBytes3:*, reg useBytes4:V, reg grepl1:cls, reg r47:V |
    mkenv;
    st pattern = pattern;
    st x = x;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L0(FALSE) else L0(ignore_case);
  L0(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L1(FALSE) else L1(perl);
  L1(perl_orDefault):
    st perl = perl_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L2(FALSE) else L2(fixed);
  L2(fixed_orDefault):
    st fixed = fixed_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L3(FALSE) else L3(useBytes);
  L3(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    is_factor = ldf `is.factor`;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_factor(p);
    check L20() else D1();
  D1():
    deopt 3 [r1];
  L20():
    c = `as.logical`(r1);
    if c then L21() else L4(c);
  L4(c2):
    c12 = `as.logical`(c2);
    if c12 then L32() else L7();
  L21():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L5(c5, r3):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L7():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L22():
    levels = ldf levels;
    check L24() else D2();
  L23():
    r2 = dyn base(<lang levels(x)>);
    goto L5(c, r2);
  L32():
    grepl = ldf grepl;
    check L33() else D7();
  D2():
    deopt 7 [c];
  D7():
    deopt 20 [];
  L6(c8, r10, r11):
    r13 = `<`(r10, r11);
    c9 = `as.logical`(r13);
    c10 = `&&`(c8, c9);
    goto L4(c10);
  L13(r36):
    r37 = `!`(r36);
    c18 = `as.logical`(r37);
    if c18 then L61() else L14();
  L24():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn levels(p1);
    check L25() else D3();
  L27():
    x5 = ld x;
    check L29() else D5();
  L28():
    r9 = dyn base1(<sym x>);
    goto L6(c5, r3, r9);
  L33():
    p2 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      levels1 = ldf levels;
      p3 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r18 = dyn levels1(p3);
      c13 = ldf c in base;
      r19 = dyn c13(r18, NA_STR);
      goto L0(r19);
    L2():
      r15 = dyn base2(<lang levels(x)>, NA_STR);
      goto L0(r15);
    };
    p5 = prom<V +>{
      ignore_case1 = ld `ignore.case`;
      ignore_case2 = force? ignore_case1;
      checkMissing(ignore_case2);
      return ignore_case2;
    };
    p6 = prom<V +>{
      perl1 = ld perl;
      perl2 = force? perl1;
      checkMissing(perl2);
      return perl2;
    };
    p7 = prom<V +>{
      fixed1 = ld fixed;
      fixed2 = force? fixed1;
      checkMissing(fixed2);
      return fixed2;
    };
    p8 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    r25 = dyn grepl(p2, p4, p5, p6, p7, p8);
    check L34() else D8();
  L58():
    x13 = ld x;
    check L60() else D18();
  L59():
    r35 = dyn base5(<sym x>);
    goto L13(r35);
  D3():
    deopt 9 [c, r5];
  D5():
    deopt 13 [c5, r3, x5];
  D8():
    deopt 27 [r25];
  D18():
    deopt 59 [x13];
  L14():
    goto L16();
  L16():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L67() else L68();
  L25():
    length = ldf length in base;
    r6 = dyn length(r5);
    check L26() else D4();
  L29():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r12 = dyn length1(x6);
    check L30() else D6();
  L34():
    st out = r25;
    out = ld out;
    check L35() else D9();
  L60():
    x14 = force? x13;
    checkMissing(x14);
    c17 = `is.character`(x14);
    goto L13(c17);
  L61():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  D4():
    deopt 11 [c, r6];
  D6():
    deopt 16 [c5, r3, r12];
  D9():
    deopt 29 [out];
  L15(r39):
    st x = r39;
    goto L16();
  L17(r43):
    popenv;
    return r43;
  L26():
    goto L5(c, r6);
  L30():
    goto L6(c5, r3, r12);
  L35():
    out1 = force? out;
    checkMissing(out1);
    c14 = `is.object`(out1);
    if c14 then L36() else L37(out1);
  L62():
    x15 = ld x;
    check L64() else D19();
  L63():
    r38 = dyn base6(<sym x>);
    goto L15(r38);
  L67():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L69() else L70();
  L68():
    r42 = dyn base7(<lang grepl(as.character(pattern), x, ignore.case, FALSE, perl, fixed, useBytes, FALSE)>);
    goto L17(r42);
  D19():
    deopt 65 [x15];
  L8(dx1):
    st outna = dx1;
    out9 = ld out;
    check L43() else D12();
  L18(r45):
    x17 = ld x;
    check L73() else D23();
  L36():
    dr = tryDispatchBuiltin.1("[", out1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(dr);
  L37(out3):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L64():
    x16 = force? x15;
    checkMissing(x16);
    as_character = ldf `as.character` in base;
    r40 = dyn as_character(x16);
    check L65() else D20();
  L69():
    pattern3 = ld pattern;
    check L71() else D21();
  L70():
    r44 = dyn base8(<sym pattern>);
    goto L18(r44);
  D12():
    deopt 39 [out9];
  D20():
    deopt 68 [r40];
  D21():
    deopt 76 [pattern3];
  D23():
    deopt 80 [x17];
  L9(out6, r27):
    __ = ldf `[` in base;
    r29 = dyn __(out6, r27);
    goto L8(r29);
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L39():
    out7 = ld out;
    check L41() else D10();
  L40():
    r26 = dyn base3(<sym out>);
    goto L9(out3, r26);
  L43():
    out10 = force? out9;
    checkMissing(out10);
    c15 = `is.object`(out10);
    if c15 then L44() else L45(out10);
  L65():
    goto L15(r40);
  L71():
    pattern4 = force? pattern3;
    checkMissing(pattern4);
    as_character1 = ldf `as.character` in base;
    r46 = dyn as_character1(pattern4);
    check L72() else D22();
  L73():
    x18 = force? x17;
    checkMissing(x18);
    ignore_case3 = ld `ignore.case`;
    check L74() else D24();
  D10():
    deopt 33 [out3, out7];
  D22():
    deopt 79 [r46];
  D24():
    deopt 82 [ignore_case3];
  L10(dx3):
    st out = dx3;
    outna = ld outna;
    check L48() else D14();
  L41():
    out8 = force? out7;
    checkMissing(out8);
    length2 = ldf length in base;
    r28 = dyn length2(out8);
    check L42() else D11();
  L44():
    dr2 = tryDispatchBuiltin.1("[", out10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L46() else L45(dr2);
  L45(out12):
    x9 = ld x;
    check L47() else D13();
  L72():
    goto L18(r46);
  L74():
    ignore_case4 = force? ignore_case3;
    checkMissing(ignore_case4);
    perl3 = ld perl;
    check L75() else D25();
  D11():
    deopt 36 [out3, r28];
  D13():
    deopt 41 [out12, x9];
  D14():
    deopt 45 [outna];
  D25():
    deopt 85 [perl3];
  L42():
    goto L9(out3, r28);
  L46():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L47():
    x10 = force? x9;
    __1 = ldf `[` in base;
    r30 = dyn __1(out12, x10);
    goto L10(r30);
  L48():
    outna1 = force? outna;
    checkMissing(outna1);
    l = ld out;
    c16 = `is.object`(l);
    if c16 then L49() else L50(outna1, l);
  L75():
    perl4 = force? perl3;
    checkMissing(perl4);
    fixed3 = ld fixed;
    check L76() else D26();
  D26():
    deopt 87 [fixed3];
  L11(dx5):
    st out = dx5;
    out13 = ld out;
    check L56() else D17();
  L49():
    dr4 = tryDispatchBuiltin.0("[<-", l, outna1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L51() else L50(outna1, dr4);
  L50(outna3, l2):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L76():
    fixed4 = force? fixed3;
    checkMissing(fixed4);
    useBytes3 = ld useBytes;
    check L77() else D27();
  D17():
    deopt 56 [out13];
  D27():
    deopt 89 [useBytes3];
  L12(outna10, l5, outna11, r32):
    ___ = ldf `[<-` in base;
    r34 = dyn ___(l5, outna11, r32);
    goto L11(r34);
  L51():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L52():
    x11 = ld x;
    check L54() else D15();
  L53():
    r31 = dyn base4(<sym x>);
    goto L12(outna3, l2, outna1, r31);
  L56():
    out14 = force? out13;
    checkMissing(out14);
    popenv;
    return out14;
  L77():
    useBytes4 = force? useBytes3;
    checkMissing(useBytes4);
    grepl1 = ldf grepl in base;
    r47 = dyn grepl1(r45, x18, ignore_case4, FALSE, perl4, fixed4, useBytes4, FALSE);
    check L78() else D28();
  D15():
    deopt 50 [outna3, l2, outna1, x11];
  D28():
    deopt 93 [r47];
  L54():
    x12 = force? x11;
    checkMissing(x12);
    is_na = ldf `is.na` in base;
    r33 = dyn is_na(x12);
    check L55() else D16();
  L78():
    goto L17(r47);
  D16():
    deopt 53 [outna3, l2, outna1, r33];
  L55():
    goto L12(outna3, l2, outna1, r33);
  }
}