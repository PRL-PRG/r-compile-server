fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner584326924;
    st `sort.list` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner584326924(x, partial, `na.last`, decreasing, method) {
  (reg x:*, reg partial:*, reg na_last:*, reg decreasing:*, reg method:*) -+> V { var x:*, var partial:*, reg partial_isMissing:L, reg partial_orDefault:*, var `na.last`:*, reg na_last_isMissing:L, reg na_last_orDefault:*, var decreasing:*, reg decreasing_isMissing:L, reg decreasing_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg decreasing1:*, reg decreasing2:V, reg as_logical:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg partial1:*, reg partial2:V, reg c1:V, reg c2:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg c7:L, reg r10:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r11:V, reg c8:L, reg c9:V, reg c11:L, reg c13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg c16:L, reg r13:V, reg x3:*, reg x4:V, reg c17:L, reg r14:V, reg c18:L, reg c19:V, reg c21:L, reg c23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg c26:L, reg r16:V, reg x5:*, reg x6:V, reg length:cls, reg r17:V, reg r18:V, reg c27:L, reg c28:V, reg c30:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg r20:V, reg x7:*, reg x8:V, reg decreasing3:*, reg decreasing4:V, reg na_last1:*, reg na_last2:V, reg sorted_fpass:cls, reg r21:V, reg c31:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r22:V, reg r23:V, reg x9:*, reg x10:V, reg r24:I, reg match_arg:cls, reg method1:*, reg method2:V, reg p1:p(V +), reg r29:V, reg method3:*, reg method4:V, reg r30:V, reg c32:L, reg c34:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg c37:L, reg r32:V, reg x11:*, reg x12:V, reg is_numeric1:cls, reg r33:V, reg c38:L, reg c39:L, reg c40:V, reg is_factor:cls, reg x13:*, reg x14:V, reg p2:p(V +), reg r35:V, reg c43:L, reg c44:V, reg c47:L, reg c48:L, reg c49:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r36:V, reg c56:L, reg c57:L, reg r37:V, reg x15:*, reg x16:V, reg c58:L, reg c59:L, reg c60:V, reg c63:L, reg c64:L, reg c65:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r38:V, reg c72:L, reg c73:L, reg r39:V, reg x17:*, reg x18:V, reg c74:L, reg c75:L, reg c79:L, reg c80:L, reg c81:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r40:V, reg c88:L, reg c89:L, reg c90:L, reg r41:V, reg x19:*, reg x20:V, reg is_atomic:cls, reg r42:V, reg r43:V, reg c91:L, reg c92:V, reg c96:L, reg c97:V, reg c100:L, reg c101:V, reg c103:L, reg c105:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r44:V, reg c108:L, reg r45:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r46:V, reg c111:L, reg r47:V, reg x21:*, reg x22:V, reg length1:cls, reg r48:V, reg c112:L, reg c113:L, reg c114:V, reg c116:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r50:V, reg r51:V, reg partial3:*, reg partial4:V, reg c117:V, reg r52:V, reg c118:L, reg _NotYetUsed:cls, reg r53:V, reg method5:*, reg method6:V, reg r55:V, reg c119:L, reg is_factor1:cls, reg x23:*, reg x24:V, reg p3:p(V +), reg r57:V, reg c120:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r58:V, reg r59:V, reg x25:*, reg x26:V, reg as_integer:cls, reg r60:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r62:V, reg r63:V, reg x27:*, reg x28:V, reg is_numeric2:cls, reg r64:V, reg c121:L, reg sort:cls, reg x29:*, reg x30:V, reg p4:p(V +), reg na_last3:*, reg na_last4:V, reg p5:p(V +), reg decreasing5:*, reg decreasing6:V, reg p6:p(V +), reg r68:V, reg c122:L, reg r70:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r71:V, reg stop:cls, reg r74:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r76:V, reg r77:V, reg na_last5:*, reg na_last6:V, reg is_na:cls, reg r78:V, reg c123:L, reg x31:*, reg x32:V, reg c124:L, reg x34:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r79:V, reg x37:V, reg r80:V, reg x38:*, reg x39:V, reg is_na1:cls, reg r81:V, reg r82:V, reg __:cls, reg r83:V, reg method7:*, reg method8:V, reg r85:V, reg c125:L, reg order:cls, reg x40:*, reg x41:V, reg p7:p(V +), reg na_last7:*, reg na_last8:V, reg p8:p(V +), reg decreasing7:*, reg decreasing8:V, reg p9:p(V +), reg r89:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r92:V, reg r93:V, reg x42:*, reg x43:V, reg is_atomic1:cls, reg r94:V, reg r95:V, reg c126:L, reg stop1:cls, reg r96:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r98:V, reg r99:V, reg na_last9:*, reg na_last10:V, reg decreasing9:*, reg decreasing10:V, reg x44:*, reg x45:V, reg order1:cls, reg r100:V |
    mkenv;
    st x = x;
    partial_isMissing = missing.0(partial);
    if partial_isMissing then L0(NULL) else L0(partial);
  L0(partial_orDefault):
    st partial = partial_orDefault;
    na_last_isMissing = missing.0(na_last);
    if na_last_isMissing then L1(TRUE) else L1(na_last);
  L1(na_last_orDefault):
    st `na.last` = na_last_orDefault;
    decreasing_isMissing = missing.0(decreasing);
    if decreasing_isMissing then L2(FALSE) else L2(decreasing);
  L2(decreasing_orDefault):
    st decreasing = decreasing_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L3() else L4(method);
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("auto", "shell", "quick", "radix");
      goto L0(r2);
    L2():
      r = dyn base("auto", "shell", "quick", "radix");
      goto L0(r);
    };
    goto L4(p);
  L4(method_orDefault):
    st method = method_orDefault;
    sym1 = ldf `as.logical`;
    base1 = ldf `as.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L55() else L56();
  L5(r5):
    st decreasing = r5;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L55():
    decreasing1 = ld decreasing;
    check L57() else D0();
  L56():
    r4 = dyn base1(<sym decreasing>);
    goto L5(r4);
  D0():
    deopt 2 [decreasing1];
  L6(r8):
    c2 = `as.logical`(r8);
    if c2 then L62() else L7(c2);
  L57():
    decreasing2 = force? decreasing1;
    checkMissing(decreasing2);
    as_logical = ldf `as.logical` in base;
    r6 = dyn as_logical(decreasing2);
    check L58() else D1();
  L59():
    partial1 = ld partial;
    check L61() else D2();
  L60():
    r7 = dyn base2(<sym partial>);
    goto L6(r7);
  D1():
    deopt 5 [r6];
  D2():
    deopt 8 [partial1];
  L7(c4):
    c11 = `as.logical`(c4);
    if c11 then L68() else L9(c11);
  L58():
    goto L5(r6);
  L61():
    partial2 = force? partial1;
    checkMissing(partial2);
    c1 = `==`(partial2, NULL);
    goto L6(c1);
  L62():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L63() else L64();
  L8(c7, r10):
    c8 = `as.logical`(r10);
    c9 = `&&`(c7, c8);
    goto L7(c9);
  L9(c13):
    c21 = `as.logical`(c13);
    if c21 then L73() else L11(c21);
  L63():
    x1 = ld x;
    check L65() else D3();
  L64():
    r9 = dyn base3(<sym x>);
    goto L8(c2, r9);
  L68():
    sym4 = ldf `is.object`;
    base4 = ldf `is.object` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L69() else L70();
  D3():
    deopt 13 [c2, x1];
  L10(c16, r13):
    r14 = `!`(r13);
    c18 = `as.logical`(r14);
    c19 = `&&`(c16, c18);
    goto L9(c19);
  L11(c23):
    c30 = `as.logical`(c23);
    if c30 then L79() else L13();
  L65():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric = ldf `is.numeric` in base;
    r11 = dyn is_numeric(x2);
    check L66() else D4();
  L69():
    x3 = ld x;
    check L71() else D5();
  L70():
    r12 = dyn base4(<sym x>);
    goto L10(c11, r12);
  L73():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  D4():
    deopt 16 [c2, r11];
  D5():
    deopt 19 [c11, x3];
  L12(c26, r16):
    r18 = `>`(r16, 0.0);
    c27 = `as.logical`(r18);
    c28 = `&&`(c26, c27);
    goto L11(c28);
  L13():
    goto L18();
  L18():
    match_arg = ldf `match.arg`;
    check L93() else D13();
  L66():
    goto L8(c2, r11);
  L71():
    x4 = force? x3;
    checkMissing(x4);
    c17 = `is.object`(x4);
    goto L10(c11, c17);
  L74():
    x5 = ld x;
    check L76() else D6();
  L75():
    r15 = dyn base5(<sym x>);
    goto L12(c21, r15);
  L79():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  D6():
    deopt 26 [c21, x5];
  D13():
    deopt 53 [];
  L14(r20):
    c31 = `as.logical`(r20);
    if c31 then L86() else L15();
  L76():
    x6 = force? x5;
    checkMissing(x6);
    length = ldf length in base;
    r17 = dyn length(x6);
    check L77() else D7();
  L80():
    x7 = ld x;
    check L82() else D8();
  L81():
    r19 = dyn base6(<lang sorted_fpass(x, decreasing, na.last)>);
    goto L14(r19);
  L93():
    p1 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r29 = dyn match_arg(p1);
    check L94() else D14();
  D7():
    deopt 29 [c21, r17];
  D8():
    deopt 35 [x7];
  D14():
    deopt 55 [r29];
  L15():
    goto L18();
  L77():
    goto L12(c21, r17);
  L82():
    x8 = force? x7;
    checkMissing(x8);
    decreasing3 = ld decreasing;
    check L83() else D9();
  L86():
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  L94():
    st method = r29;
    method3 = ld method;
    check L95() else D15();
  D9():
    deopt 37 [decreasing3];
  D15():
    deopt 57 [method3];
  L16(r23):
    popenv;
    return r23;
  L83():
    decreasing4 = force? decreasing3;
    checkMissing(decreasing4);
    na_last1 = ld `na.last`;
    check L84() else D10();
  L87():
    x9 = ld x;
    check L89() else D12();
  L88():
    r22 = dyn base7(<sym x>);
    goto L16(r22);
  L95():
    method4 = force? method3;
    checkMissing(method4);
    r30 = `==`(method4, "auto");
    c32 = `as.logical`(r30);
    if c32 then L96() else L19(c32);
  D10():
    deopt 39 [na_last1];
  D12():
    deopt 44 [x9];
  L19(c34):
    c103 = `as.logical`(c34);
    if c103 then L122() else L28(c103);
  L84():
    na_last2 = force? na_last1;
    checkMissing(na_last2);
    sorted_fpass = ldf sorted_fpass in base;
    r21 = dyn sorted_fpass(x8, decreasing4, na_last2);
    check L85() else D11();
  L89():
    x10 = force? x9;
    checkMissing(x10);
    r24 = seq_along(x10);
    goto L16(r24);
  L96():
    sym8 = ldf `is.numeric`;
    base8 = ldf `is.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L97() else L98();
  D11():
    deopt 42 [r21];
  L20(c37, r32):
    c38 = `as.logical`(r32);
    if c38 then L21(c37, c38) else L101();
  L28(c105):
    c116 = `as.logical`(c105);
    if c116 then L130() else L31();
  L85():
    goto L14(r21);
  L97():
    x11 = ld x;
    check L99() else D16();
  L98():
    r31 = dyn base8(<sym x>);
    goto L20(c32, r31);
  L122():
    sym12 = ldf `is.integer`;
    base12 = ldf `is.integer` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L123() else L124();
  D16():
    deopt 63 [c32, x11];
  L21(c39, c40):
    c47 = `as.logical`(c40);
    if c47 then L22(c39, c47) else L105();
  L29(c108, r45):
    c113 = `as.logical`(r45);
    c114 = `&&`(c108, c113);
    goto L28(c114);
  L31():
    goto L32();
  L32():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L132() else L133();
  L99():
    x12 = force? x11;
    checkMissing(x12);
    is_numeric1 = ldf `is.numeric` in base;
    r33 = dyn is_numeric1(x12);
    check L100() else D17();
  L101():
    is_factor = ldf `is.factor`;
    check L102() else D18();
  L123():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L125() else L126();
  L124():
    r44 = dyn base12(<lang length(x)>);
    goto L29(c103, r44);
  L130():
    st method = "radix";
    goto L32();
  D17():
    deopt 66 [c32, r33];
  D18():
    deopt 68 [c37, c38];
  L22(c48, c49):
    c63 = `as.logical`(c49);
    if c63 then L24(c48, c63) else L110();
  L30(c111, r47):
    c112 = `is.integer`(r47);
    goto L29(c111, c112);
  L33(r51):
    r52 = `!`(r51);
    c118 = `as.logical`(r52);
    if c118 then L135() else L34();
  L100():
    goto L20(c32, r33);
  L102():
    p2 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r35 = dyn is_factor(p2);
    check L103() else D19();
  L105():
    sym9 = ldf `is.logical`;
    base9 = ldf `is.logical` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L106() else L107();
  L125():
    x21 = ld x;
    check L127() else D24();
  L126():
    r46 = dyn base13(<sym x>);
    goto L30(c103, r46);
  L132():
    partial3 = ld partial;
    check L134() else D26();
  L133():
    r50 = dyn base14(<sym partial>);
    goto L33(r50);
  D19():
    deopt 70 [c37, c38, r35];
  D24():
    deopt 94 [c103, x21];
  D26():
    deopt 106 [partial3];
  L23(c56, c57, r37):
    c59 = `as.logical`(r37);
    c60 = `||`(c57, c59);
    goto L22(c56, c60);
  L24(c64, c65):
    c100 = `as.logical`(c65);
    c101 = `&&`(c64, c100);
    goto L19(c101);
  L34():
    goto L35();
  L35():
    method5 = ld method;
    check L139() else D29();
  L103():
    c43 = `as.logical`(r35);
    c44 = `||`(c38, c43);
    goto L21(c37, c44);
  L106():
    x15 = ld x;
    check L108() else D20();
  L107():
    r36 = dyn base9(<sym x>);
    goto L23(c39, c47, r36);
  L110():
    sym10 = ldf `is.object`;
    base10 = ldf `is.object` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L111() else L112();
  L127():
    x22 = force? x21;
    checkMissing(x22);
    length1 = ldf length in base;
    r48 = dyn length1(x22);
    check L128() else D25();
  L134():
    partial4 = force? partial3;
    checkMissing(partial4);
    c117 = `==`(partial4, NULL);
    goto L33(c117);
  L135():
    _NotYetUsed = ldf `.NotYetUsed`;
    check L136() else D27();
  D20():
    deopt 73 [c39, c47, x15];
  D25():
    deopt 97 [c103, r48];
  D27():
    deopt 111 [];
  D29():
    deopt 116 [method5];
  L25(c72, c73, r39):
    c75 = `as.logical`(r39);
    if c75 then L114() else L26(c72, c73, c75);
  L108():
    x16 = force? x15;
    checkMissing(x16);
    c58 = `is.logical`(x16);
    goto L23(c39, c47, c58);
  L111():
    x17 = ld x;
    check L113() else D21();
  L112():
    r38 = dyn base10(<sym x>);
    goto L25(c48, c63, r38);
  L128():
    goto L30(c103, r48);
  L136():
    r53 = dyn _NotYetUsed("partial != NULL");
    check L137() else D28();
  L139():
    method6 = force? method5;
    checkMissing(method6);
    r55 = `==`(method6, "quick");
    c119 = `as.logical`(r55);
    if c119 then L140() else L36();
  D21():
    deopt 78 [c48, c63, x17];
  D28():
    deopt 113 [r53];
  L26(c79, c80, c81):
    c96 = `as.logical`(c81);
    c97 = `||`(c80, c96);
    goto L24(c79, c97);
  L36():
    goto L43();
  L43():
    sym17 = ldf `is.na`;
    base17 = ldf `is.na` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L165() else L166();
  L113():
    x18 = force? x17;
    checkMissing(x18);
    c74 = `is.object`(x18);
    goto L25(c48, c63, c74);
  L114():
    sym11 = ldf `is.atomic`;
    base11 = ldf `is.atomic` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L115() else L116();
  L137():
    goto L35();
  L140():
    is_factor1 = ldf `is.factor`;
    check L141() else D30();
  D30():
    deopt 121 [];
  L27(c88, c89, c90, r41):
    r43 = `!`(r41);
    c91 = `as.logical`(r43);
    c92 = `&&`(c90, c91);
    goto L26(c88, c89, c92);
  L44(r77):
    c123 = `as.logical`(r77);
    if c123 then L169() else L45();
  L115():
    x19 = ld x;
    check L117() else D22();
  L116():
    r40 = dyn base11(<sym x>);
    goto L27(c72, c73, c75, r40);
  L141():
    p3 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    r57 = dyn is_factor1(p3);
    check L142() else D31();
  L165():
    na_last5 = ld `na.last`;
    check L167() else D40();
  L166():
    r76 = dyn base17(<sym na.last>);
    goto L44(r76);
  D22():
    deopt 83 [c72, c73, c75, x19];
  D31():
    deopt 123 [r57];
  D40():
    deopt 161 [na_last5];
  L45():
    goto L48();
  L48():
    method7 = ld method;
    check L179() else D45();
  L117():
    x20 = force? x19;
    checkMissing(x20);
    is_atomic = ldf `is.atomic` in base;
    r42 = dyn is_atomic(x20);
    check L118() else D23();
  L142():
    c120 = `as.logical`(r57);
    if c120 then L143() else L37();
  L167():
    na_last6 = force? na_last5;
    checkMissing(na_last6);
    is_na = ldf `is.na` in base;
    r78 = dyn is_na(na_last6);
    check L168() else D41();
  L169():
    x31 = ld x;
    check L170() else D42();
  D23():
    deopt 86 [c72, c73, c75, r42];
  D41():
    deopt 164 [r78];
  D42():
    deopt 165 [x31];
  D45():
    deopt 181 [method7];
  L37():
    goto L39();
  L39():
    sym16 = ldf `is.numeric`;
    base16 = ldf `is.numeric` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L149() else L150();
  L118():
    goto L27(c72, c73, c75, r42);
  L143():
    sym15 = ldf `as.integer`;
    base15 = ldf `as.integer` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L144() else L145();
  L168():
    goto L44(r78);
  L170():
    x32 = force? x31;
    checkMissing(x32);
    c124 = `is.object`(x32);
    if c124 then L171() else L172(x32);
  L179():
    method8 = force? method7;
    checkMissing(method8);
    r85 = `==`(method8, "radix");
    c125 = `as.logical`(r85);
    if c125 then L180() else L49();
  L38(r59):
    st x = r59;
    goto L39();
  L40(r63):
    c121 = `as.logical`(r63);
    if c121 then L153() else L41();
  L46(dx3):
    st x = dx3;
    st `na.last` = TRUE;
    goto L48();
  L49():
    sym19 = ldf `is.atomic`;
    base19 = ldf `is.atomic` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L185() else L186();
  L144():
    x25 = ld x;
    check L146() else D32();
  L145():
    r58 = dyn base15(<sym x>);
    goto L38(r58);
  L149():
    x27 = ld x;
    check L151() else D34();
  L150():
    r62 = dyn base16(<sym x>);
    goto L40(r62);
  L171():
    dr2 = tryDispatchBuiltin.1("[", x32);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L173() else L172(dr2);
  L172(x34):
    sym18 = ldf `is.na`;
    base18 = ldf `is.na` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L174() else L175();
  L180():
    order = ldf order;
    check L181() else D46();
  D32():
    deopt 126 [x25];
  D34():
    deopt 135 [x27];
  D46():
    deopt 186 [];
  L41():
    stop = ldf stop;
    check L162() else D38();
  L47(x37, r80):
    r82 = `!`(r80);
    __ = ldf `[` in base;
    r83 = dyn __(x37, r82);
    goto L46(r83);
  L51(r93):
    r95 = `!`(r93);
    c126 = `as.logical`(r95);
    if c126 then L189() else L52();
  L146():
    x26 = force? x25;
    checkMissing(x26);
    as_integer = ldf `as.integer` in base;
    r60 = dyn as_integer(x26);
    check L147() else D33();
  L151():
    x28 = force? x27;
    checkMissing(x28);
    is_numeric2 = ldf `is.numeric` in base;
    r64 = dyn is_numeric2(x28);
    check L152() else D35();
  L153():
    sort = ldf sort;
    check L154() else D36();
  L173():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L46(dx2);
  L174():
    x38 = ld x;
    check L176() else D43();
  L175():
    r79 = dyn base18(<sym x>);
    goto L47(x34, r79);
  L181():
    p7 = prom<V +>{
      x40 = ld x;
      x41 = force? x40;
      checkMissing(x41);
      return x41;
    };
    p8 = prom<V +>{
      na_last7 = ld `na.last`;
      na_last8 = force? na_last7;
      checkMissing(na_last8);
      return na_last8;
    };
    p9 = prom<V +>{
      decreasing7 = ld decreasing;
      decreasing8 = force? decreasing7;
      checkMissing(decreasing8);
      return decreasing8;
    };
    r89 = dyn order[, `na.last`, decreasing, method](p7, p8, p9, "radix");
    check L182() else D47();
  L185():
    x42 = ld x;
    check L187() else D48();
  L186():
    r92 = dyn base19(<sym x>);
    goto L51(r92);
  D33():
    deopt 129 [r60];
  D35():
    deopt 138 [r64];
  D36():
    deopt 140 [];
  D38():
    deopt 154 [];
  D43():
    deopt 169 [x34, x38];
  D47():
    deopt 194 [r89];
  D48():
    deopt 200 [x42];
  L52():
    goto L53();
  L53():
    sym20 = ldf `.Internal`;
    base20 = ldf `.Internal` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L193() else L194();
  L147():
    goto L38(r60);
  L152():
    goto L40(r64);
  L154():
    p4 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    p5 = prom<V +>{
      na_last3 = ld `na.last`;
      na_last4 = force? na_last3;
      checkMissing(na_last4);
      return na_last4;
    };
    p6 = prom<V +>{
      decreasing5 = ld decreasing;
      decreasing6 = force? decreasing5;
      checkMissing(decreasing6);
      return decreasing6;
    };
    r68 = dyn sort[, `na.last`, decreasing, method, `index.return`](p4, p5, p6, "quick", TRUE);
    check L155() else D37();
  L162():
    r74 = dyn stop("method = \"quick\" is only for numeric 'x'");
    check L163() else D39();
  L176():
    x39 = force? x38;
    checkMissing(x39);
    is_na1 = ldf `is.na` in base;
    r81 = dyn is_na1(x39);
    check L177() else D44();
  L182():
    popenv;
    return r89;
  L187():
    x43 = force? x42;
    checkMissing(x43);
    is_atomic1 = ldf `is.atomic` in base;
    r94 = dyn is_atomic1(x43);
    check L188() else D49();
  L189():
    stop1 = ldf stop;
    check L190() else D50();
  D37():
    deopt 150 [r68];
  D39():
    deopt 156 [r74];
  D44():
    deopt 172 [x34, r81];
  D49():
    deopt 203 [r94];
  D50():
    deopt 206 [];
  L54(r99):
    popenv;
    return r99;
  L155():
    c122 = `is.object`(r68);
    if c122 then L157() else L158(r68);
  L163():
    goto L43();
  L177():
    goto L47(x34, r81);
  L188():
    goto L51(r94);
  L190():
    r96 = dyn stop1("'x' must be atomic for 'sort.list', method \"shell\" and \"quick\"\nHave you called 'sort' on a list?");
    check L191() else D51();
  L193():
    na_last9 = ld `na.last`;
    check L195() else D52();
  L194():
    r98 = dyn base20(<lang order(na.last, decreasing, x)>);
    goto L54(r98);
  D51():
    deopt 208 [r96];
  D52():
    deopt 213 [na_last9];
  L156(dx1):
    popenv;
    return dx1;
  L157():
    dr = tryDispatchBuiltin.1("$", r68);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L159() else L158(dr);
  L158(r70):
    r71 = `$`(r70, <sym ix>);
    goto L156(r71);
  L191():
    goto L53();
  L195():
    na_last10 = force? na_last9;
    checkMissing(na_last10);
    decreasing9 = ld decreasing;
    check L196() else D53();
  D53():
    deopt 215 [decreasing9];
  L159():
    dx = getTryDispatchBuiltinValue(dr);
    goto L156(dx);
  L196():
    decreasing10 = force? decreasing9;
    checkMissing(decreasing10);
    x44 = ld x;
    check L197() else D54();
  D54():
    deopt 217 [x44];
  L197():
    x45 = force? x44;
    checkMissing(x45);
    order1 = ldf order in base;
    r100 = dyn order1(na_last10, decreasing10, x45);
    check L198() else D55();
  D55():
    deopt 220 [r100];
  L198():
    goto L54(r100);
  }
}