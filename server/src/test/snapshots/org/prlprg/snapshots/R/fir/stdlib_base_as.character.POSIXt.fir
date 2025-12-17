fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner270580366;
    st `as.character.POSIXt` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner270580366(x, digits, OutDec, `...`) {
  (reg x:*, reg digits:*, reg OutDec:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg p:p(V +), var OutDec:*, reg OutDec_isMissing:L, reg OutDec_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg ___names:cls, reg r8:V, reg length:cls, reg r9:V, reg c1:L, reg c3:V, reg _in_:cls, reg dotn:*, reg dotn1:V, reg p1:p(V +), reg r11:V, reg c4:L, reg c5:V, reg c7:L, reg warning:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg missing:cls, reg r16:V, reg c8:L, reg force:cls, reg digits1:*, reg digits2:V, reg p2:p(V +), reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg digits3:*, reg digits4:V, reg is_numeric:cls, reg r22:V, reg r23:V, reg c9:L, reg stop:cls, reg r24:V, reg balancePOSIXlt:cls, reg as_POSIXlt:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r26:V, reg p4:p(V +), reg r28:V, reg x5:*, reg x6:V, reg c10:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r29:V, reg x9:*, reg x10:V, reg c11:L, reg x12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r30:V, reg x13:*, reg x14:V, reg c12:L, reg dx5:V, reg x16:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg r31:V, reg r32:V, reg s:*, reg s1:V, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg s2:*, reg s3:V, reg is_na:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg r41:V, reg s4:*, reg s5:V, reg is_nan:cls, reg r42:V, reg r43:V, reg r44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg time:*, reg time1:V, reg is_finite:cls, reg r47:V, reg character:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg ok:*, reg ok1:V, reg length1:cls, reg r50:V, reg p5:p(V +), reg r52:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg ok2:*, reg ok3:V, reg all:cls, reg r55:V, reg r56:V, reg c13:L, reg l:*, reg c14:L, reg r58:L, reg l2:*, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg ok4:*, reg ok5:V, reg r61:V, reg isNA:*, reg isNA1:V, reg r62:V, reg ___:cls, reg r63:V, reg ok6:*, reg ok7:V, reg r64:V, reg isNA2:*, reg isNA3:V, reg r65:V, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg s6:*, reg s7:V, reg c15:L, reg s9:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg i:*, reg i1:V, reg __:cls, reg r69:V, reg as_character:cls, reg r70:V, reg l3:*, reg c16:L, reg r72:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx14:V, reg r74:V, reg dx15:V, reg i2:*, reg i3:V, reg ___1:cls, reg r75:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r77:V, reg r78:V, reg ok8:*, reg ok9:V, reg any:cls, reg r79:V, reg c17:L, reg anyN:*, reg anyN1:V, reg c18:L, reg x17:*, reg x18:V, reg c19:L, reg x20:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg ok10:*, reg ok11:V, reg __1:cls, reg r80:V, reg time2:*, reg time3:V, reg c20:L, reg time5:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg ok12:*, reg ok13:V, reg __2:cls, reg r81:V, reg sprintf:cls, reg x21:*, reg x22:V, reg c21:L, reg r83:R, reg x24:V, reg dr16:V, reg dc8:L, reg dx21:V, reg r85:R, reg dx22:V, reg r86:V, reg r87:V, reg p6:p(V +), reg x25:*, reg x26:V, reg c22:L, reg x28:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg r89:V, reg r90:V, reg p7:p(V +), reg x29:*, reg x30:V, reg c23:L, reg x32:V, reg dr20:V, reg dc10:L, reg dx25:V, reg dx26:V, reg r92:V, reg p8:p(V +), reg r94:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r95:V, reg r96:V, reg time6:*, reg time7:V, reg r97:V, reg any1:cls, reg r98:V, reg c24:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r99:V, reg r100:V, reg round:cls, reg r101:V, reg getOption:cls, reg r102:V, reg OutDec1:*, reg OutDec2:V, reg r103:V, reg c25:L, reg options:cls, reg OutDec3:*, reg OutDec4:V, reg p9:p(V +), reg r105:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r106:V, reg r107:V, reg on_exit:cls, reg r108:V, reg getOption1:cls, reg r110:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r113:V, reg r114:V, reg r115:V, reg digits5:*, reg digits6:V, reg min:cls, reg r116:V, reg r117:V, reg c26:L, reg options1:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r118:V, reg r119:V, reg digits7:*, reg digits8:V, reg max:cls, reg r120:V, reg r121:V, reg p10:p(V +), reg r123:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r124:V, reg r125:V, reg on_exit1:cls, reg r126:V, reg paste0:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r128:V, reg r129:V, reg c27:cls, reg r130:V, reg c28:L, reg r132:V, reg dr22:V, reg dc11:L, reg dx27:V, reg dx28:V, reg s10:*, reg s11:V, reg r133:V, reg r134:V, reg __3:cls, reg r135:V, reg p11:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r137:V, reg r138:V, reg s12:*, reg s13:V, reg as_character1:cls, reg r139:V, reg p12:p(V +), reg r141:V, reg paste1:cls, reg r142:*, reg r143:V, reg c29:L, reg r145:V, reg dr24:V, reg dc12:L, reg dx29:V, reg dx30:V, reg n0:*, reg n1:V, reg __4:cls, reg r146:V, reg p13:p(V +), reg sprintf1:cls, reg x33:*, reg x34:V, reg c30:L, reg x36:V, reg dr26:V, reg dc13:L, reg dx31:V, reg dx32:V, reg r148:V, reg c31:L, reg dx34:V, reg dr28:V, reg dc14:L, reg dx35:V, reg dx36:V, reg n2:*, reg n3:V, reg __5:cls, reg r149:V, reg p14:p(V +), reg x37:*, reg x38:V, reg c32:L, reg x40:V, reg dr30:V, reg dc15:L, reg dx37:V, reg dx38:V, reg r151:V, reg c33:L, reg dx40:V, reg dr32:V, reg dc16:L, reg dx41:V, reg dx42:V, reg n4:*, reg n5:V, reg __6:cls, reg r152:V, reg p15:p(V +), reg sch:*, reg sch1:V, reg p16:p(V +), reg r155:V, reg p17:p(V +), reg r157:V, reg l6:*, reg c34:L, reg r159:V, reg l8:*, reg dr34:V, reg dc17:L, reg dx43:V, reg r161:V, reg dx44:V, reg n6:*, reg n7:V, reg ___2:cls, reg r162:V, reg r164:*, reg r165:V, reg l9:*, reg c35:L, reg r167:V, reg l11:*, reg dr36:V, reg dc18:L, reg dx45:V, reg r169:V, reg dx46:V, reg ok14:*, reg ok15:V, reg ___3:cls, reg r170:V, reg r172:*, reg r173:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf inherits;
      base = ldf inherits in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      c = `as.logical`(r1);
      if c then L4() else L1();
    L2():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      inherits = ldf inherits in base;
      r2 = dyn inherits(x2, "POSIXlt", FALSE);
      goto L0(r2);
    L3():
      r = dyn base(<sym x>, "POSIXlt");
      goto L0(r);
    L1():
      return 6;
    L4():
      return 14;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    OutDec_isMissing = missing.0(OutDec);
    if OutDec_isMissing then L2(".") else L2(OutDec);
  L2(OutDec_orDefault):
    st OutDec = OutDec_orDefault;
    st `...` = ddd;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L3(r5):
    c1 = `as.logical`(r5);
    if c1 then L49() else L5(c1);
  L43():
    sym2 = ldf `...names`;
    base2 = ldf `...names` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L44():
    r4 = dyn base1(<lang `<-`(dotn, ...names())>);
    goto L3(r4);
  L4(r7):
    st dotn = r7;
    length = ldf length in base;
    r9 = dyn length(r7);
    check L48() else D1();
  L5(c3):
    c7 = `as.logical`(c3);
    if c7 then L53() else L6();
  L45():
    ___names = ldf `...names` in base;
    r8 = dyn ___names();
    check L47() else D0();
  L46():
    r6 = dyn base2();
    goto L4(r6);
  L49():
    _in_ = ldf `%in%`;
    check L50() else D2();
  D0():
    deopt 5 [r8];
  D1():
    deopt 8 [r9];
  D2():
    deopt 10 [c1];
  L6():
    goto L7();
  L7():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L47():
    goto L4(r8);
  L48():
    goto L3(r9);
  L50():
    p1 = prom<V +>{
      dotn = ld dotn;
      dotn1 = force? dotn;
      checkMissing(dotn1);
      return dotn1;
    };
    r11 = dyn _in_("format", p1);
    check L51() else D3();
  L53():
    warning = ldf warning;
    check L54() else D4();
  D3():
    deopt 13 [c1, r11];
  D4():
    deopt 16 [];
  L8(r15):
    c8 = `as.logical`(r15);
    if c8 then L59() else L9();
  L51():
    c4 = `as.logical`(r11);
    c5 = `&&`(c1, c4);
    goto L5(c5);
  L54():
    r12 = dyn warning("as.character(td, ..) no longer obeys a 'format' argument; use format(td, ..) ?");
    check L55() else D5();
  L57():
    missing = ldf missing in base;
    r16 = dyn missing(<sym digits>);
    goto L8(r16);
  L58():
    r14 = dyn base3(<sym digits>);
    goto L8(r14);
  D5():
    deopt 18 [r12];
  L9():
    sym4 = ldf `is.numeric`;
    base4 = ldf `is.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L10():
    balancePOSIXlt = ldf balancePOSIXlt;
    check L71() else D12();
  L55():
    goto L7();
  L59():
    force = ldf force;
    check L60() else D6();
  D6():
    deopt 25 [];
  D12():
    deopt 42 [];
  L11(r21):
    r23 = `!`(r21);
    c9 = `as.logical`(r23);
    if c9 then L67() else L12();
  L60():
    p2 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    r18 = dyn force(p2);
    check L61() else D7();
  L63():
    digits3 = ld digits;
    check L65() else D8();
  L64():
    r20 = dyn base4(<sym digits>);
    goto L11(r20);
  L71():
    p4 = prom<V +>{
      as_POSIXlt = ldf `as.POSIXlt`;
      p3 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r26 = dyn as_POSIXlt(p3);
      return r26;
    };
    r28 = dyn balancePOSIXlt(p4);
    check L72() else D13();
  D7():
    deopt 27 [r18];
  D8():
    deopt 30 [digits3];
  D13():
    deopt 44 [r28];
  L12():
    goto L10();
  L61():
    goto L10();
  L65():
    digits4 = force? digits3;
    checkMissing(digits4);
    is_numeric = ldf `is.numeric` in base;
    r22 = dyn is_numeric(digits4);
    check L66() else D9();
  L67():
    stop = ldf stop;
    check L68() else D10();
  L72():
    st x = r28;
    x5 = ld x;
    check L73() else D14();
  D9():
    deopt 33 [r22];
  D10():
    deopt 36 [];
  D14():
    deopt 46 [x5];
  L66():
    goto L11(r22);
  L68():
    r24 = dyn stop("'digits' must be numeric, integer valued");
    check L69() else D11();
  L73():
    x6 = force? x5;
    checkMissing(x6);
    c10 = `is.object`(x6);
    if c10 then L75() else L76(x6);
  D11():
    deopt 38 [r24];
  L69():
    goto L10();
  L74(dx1):
    st s = dx1;
    x9 = ld x;
    check L78() else D15();
  L75():
    dr = tryDispatchBuiltin.1("$", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L77() else L76(dr);
  L76(x8):
    r29 = `$`(x8, <sym sec>);
    goto L74(r29);
  D15():
    deopt 50 [x9];
  L77():
    dx = getTryDispatchBuiltinValue(dr);
    goto L74(dx);
  L78():
    x10 = force? x9;
    checkMissing(x10);
    c11 = `is.object`(x10);
    if c11 then L80() else L81(x10);
  L79(dx3):
    x13 = ld x;
    check L83() else D16();
  L80():
    dr2 = tryDispatchBuiltin.1("$", x10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L82() else L81(dr2);
  L81(x12):
    r30 = `$`(x12, <sym hour>);
    goto L79(r30);
  D16():
    deopt 52 [dx3, x13];
  L82():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L79(dx2);
  L83():
    x14 = force? x13;
    checkMissing(x14);
    c12 = `is.object`(x14);
    if c12 then L85() else L86(dx3, x14);
  L84(dx8, dx9):
    r32 = `+`(dx8, dx9);
    s = ld s;
    check L88() else D17();
  L85():
    dr4 = tryDispatchBuiltin.1("$", x14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L87() else L86(dx3, dr4);
  L86(dx5, x16):
    r31 = `$`(x16, <sym min>);
    goto L84(dx5, r31);
  D17():
    deopt 55 [r32, s];
  L87():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L84(dx3, dx7);
  L88():
    s1 = force? s;
    checkMissing(s1);
    r33 = `+`(r32, s1);
    st time = r33;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L89() else L90();
  L13(r35):
    sym6 = ldf `is.nan`;
    base6 = ldf `is.nan` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L93() else L94();
  L89():
    s2 = ld s;
    check L91() else D18();
  L90():
    r34 = dyn base5(<sym s>);
    goto L13(r34);
  D18():
    deopt 61 [s2];
  L14(r40, r41):
    r43 = `!`(r41);
    r44 = `&&`(r40, r43);
    st isNA = r44;
    sym7 = ldf `is.finite`;
    base7 = ldf `is.finite` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L97() else L98();
  L91():
    s3 = force? s2;
    checkMissing(s3);
    is_na = ldf `is.na` in base;
    r36 = dyn is_na(s3);
    check L92() else D19();
  L93():
    s4 = ld s;
    check L95() else D20();
  L94():
    r39 = dyn base6(<sym s>);
    goto L14(r35, r39);
  D19():
    deopt 64 [r36];
  D20():
    deopt 66 [r35, s4];
  L15(r46):
    st ok = r46;
    character = ldf character;
    check L101() else D24();
  L92():
    goto L13(r36);
  L95():
    s5 = force? s4;
    checkMissing(s5);
    is_nan = ldf `is.nan` in base;
    r42 = dyn is_nan(s5);
    check L96() else D21();
  L97():
    time = ld time;
    check L99() else D22();
  L98():
    r45 = dyn base7(<sym time>);
    goto L15(r45);
  D21():
    deopt 69 [r35, r42];
  D22():
    deopt 75 [time];
  D24():
    deopt 81 [];
  L96():
    goto L14(r35, r42);
  L99():
    time1 = force? time;
    checkMissing(time1);
    is_finite = ldf `is.finite` in base;
    r47 = dyn is_finite(time1);
    check L100() else D23();
  L101():
    p5 = prom<V +>{
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      ok = ld ok;
      ok1 = force? ok;
      checkMissing(ok1);
      length1 = ldf length in base;
      r50 = dyn length1(ok1);
      goto L0(r50);
    L2():
      r48 = dyn base8(<sym ok>);
      goto L0(r48);
    };
    r52 = dyn character(p5);
    check L102() else D25();
  D23():
    deopt 78 [r47];
  D25():
    deopt 83 [r52];
  L100():
    goto L15(r47);
  L102():
    st r = r52;
    sym9 = ldf all;
    base9 = ldf all in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L103() else L104();
  L16(r54):
    r56 = `!`(r54);
    st anyN = r56;
    c13 = `as.logical`(r56);
    if c13 then L107() else L17();
  L103():
    ok2 = ld ok;
    check L105() else D26();
  L104():
    r53 = dyn base9(<sym ok>);
    goto L16(r53);
  D26():
    deopt 87 [ok2];
  L17():
    goto L22();
  L22():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L128() else L129();
  L105():
    ok3 = force? ok2;
    checkMissing(ok3);
    all = ldf all in base;
    r55 = dyn all(ok3);
    check L106() else D27();
  L107():
    l = ld r;
    c14 = `is.object`(l);
    if c14 then L108() else L109(NA_LGL, l);
  D27():
    deopt 90 [r55];
  L18(dx11):
    st r = dx11;
    ok6 = ld ok;
    check L113() else D30();
  L23(r78):
    c17 = `as.logical`(r78);
    if c17 then L132() else L24();
  L106():
    goto L16(r55);
  L108():
    dr6 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L110() else L109(NA_LGL, dr6);
  L109(r58, l2):
    ok4 = ld ok;
    check L111() else D28();
  L128():
    ok8 = ld ok;
    check L130() else D36();
  L129():
    r77 = dyn base11(<sym ok>);
    goto L23(r77);
  D28():
    deopt 96 [r58, l2, NA_LGL, ok4];
  D30():
    deopt 103 [ok6];
  D36():
    deopt 128 [ok8];
  L24():
    goto L42();
  L42():
    r172 = ld r;
    check L191() else D65();
  L110():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L18(dx10);
  L111():
    ok5 = force? ok4;
    checkMissing(ok5);
    r61 = `!`(ok5);
    isNA = ld isNA;
    check L112() else D29();
  L113():
    ok7 = force? ok6;
    checkMissing(ok7);
    r64 = `!`(ok7);
    isNA2 = ld isNA;
    check L114() else D31();
  L130():
    ok9 = force? ok8;
    checkMissing(ok9);
    any = ldf any in base;
    r79 = dyn any(ok9);
    check L131() else D37();
  L132():
    anyN = ld anyN;
    check L133() else D38();
  D29():
    deopt 98 [r58, l2, NA_LGL, r61, isNA];
  D31():
    deopt 105 [r64, isNA2];
  D37():
    deopt 131 [r79];
  D38():
    deopt 132 [anyN];
  D65():
    deopt 234 [r172];
  L112():
    isNA1 = force? isNA;
    checkMissing(isNA1);
    r62 = `&&`(r61, isNA1);
    ___ = ldf `[<-` in base;
    r63 = dyn ___(l2, NA_LGL, r62);
    goto L18(r63);
  L114():
    isNA3 = force? isNA2;
    checkMissing(isNA3);
    r65 = `!`(isNA3);
    r66 = `&&`(r64, r65);
    st i = r66;
    sym10 = ldf `as.character`;
    base10 = ldf `as.character` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L115() else L116();
  L131():
    goto L23(r79);
  L133():
    anyN1 = force? anyN;
    checkMissing(anyN1);
    c18 = `as.logical`(anyN1);
    if c18 then L134() else L25();
  L191():
    r173 = force? r172;
    checkMissing(r173);
    popenv;
    return r173;
  L19(r68):
    l3 = ld r;
    c16 = `is.object`(l3);
    if c16 then L123() else L124(r68, l3);
  L25():
    goto L28();
  L28():
    sprintf = ldf sprintf;
    check L146() else D43();
  L115():
    s6 = ld s;
    check L117() else D32();
  L116():
    r67 = dyn base10(<lang `[`(s, i)>);
    goto L19(r67);
  L134():
    x17 = ld x;
    check L135() else D39();
  D32():
    deopt 112 [s6];
  D39():
    deopt 134 [x17];
  D43():
    deopt 149 [];
  L21(r74, dx15):
    st r = dx15;
    goto L22();
  L117():
    s7 = force? s6;
    checkMissing(s7);
    c15 = `is.object`(s7);
    if c15 then L118() else L119(s7);
  L123():
    dr10 = tryDispatchBuiltin.0("[<-", l3, r68);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L125() else L124(r68, dr10);
  L124(r72, l5):
    i2 = ld i;
    check L126() else D35();
  L135():
    x18 = force? x17;
    checkMissing(x18);
    c19 = `is.object`(x18);
    if c19 then L136() else L137(x18);
  L146():
    p6 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c21 = `is.object`(x22);
      if c21 then L1() else L2(1900.0, x22);
    L0(r85, dx22):
      r87 = `+`(r85, dx22);
      return r87;
    L1():
      dr16 = tryDispatchBuiltin.1("$", x22);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(1900.0, dr16);
    L2(r83, x24):
      r86 = `$`(x24, <sym year>);
      goto L0(r83, r86);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr16);
      goto L0(1900.0, dx21);
    };
    p7 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c22 = `is.object`(x26);
      if c22 then L1() else L2(x26);
    L0(dx24):
      r90 = `+`(dx24, 1);
      return r90;
    L1():
      dr18 = tryDispatchBuiltin.1("$", x26);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(x28):
      r89 = `$`(x28, <sym mon>);
      goto L0(r89);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx23);
    };
    p8 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c23 = `is.object`(x30);
      if c23 then L1() else L2(x30);
    L0(dx26):
      return dx26;
    L1():
      dr20 = tryDispatchBuiltin.1("$", x30);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(x32):
      r92 = `$`(x32, <sym mday>);
      goto L0(r92);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx25);
    };
    r94 = dyn sprintf("%d-%02d-%02d", p6, p7, p8);
    check L147() else D44();
  D35():
    deopt 120 [r72, l5, r68, i2];
  D44():
    deopt 154 [r94];
  L20(dx13):
    as_character = ldf `as.character` in base;
    r70 = dyn as_character(dx13);
    check L122() else D34();
  L26(dx17):
    st x = dx17;
    time2 = ld time;
    check L140() else D41();
  L118():
    dr8 = tryDispatchBuiltin.1("[", s7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L120() else L119(dr8);
  L119(s9):
    i = ld i;
    check L121() else D33();
  L125():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L21(r68, dx14);
  L126():
    i3 = force? i2;
    ___1 = ldf `[<-` in base;
    r75 = dyn ___1(l5, r68, i3);
    goto L21(r72, r75);
  L136():
    dr12 = tryDispatchBuiltin.1("[", x18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L138() else L137(dr12);
  L137(x20):
    ok10 = ld ok;
    check L139() else D40();
  L147():
    st r1 = r94;
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L148() else L149();
  D33():
    deopt 114 [s9, i];
  D34():
    deopt 118 [r70];
  D40():
    deopt 136 [x20, ok10];
  D41():
    deopt 140 [time2];
  L29(r96):
    c24 = `as.logical`(r96);
    if c24 then L152() else L30();
  L120():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L20(dx12);
  L121():
    i1 = force? i;
    __ = ldf `[` in base;
    r69 = dyn __(s9, i1);
    goto L20(r69);
  L122():
    goto L19(r70);
  L138():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L26(dx16);
  L139():
    ok11 = force? ok10;
    __1 = ldf `[` in base;
    r80 = dyn __1(x20, ok11);
    goto L26(r80);
  L140():
    time3 = force? time2;
    checkMissing(time3);
    c20 = `is.object`(time3);
    if c20 then L141() else L142(time3);
  L148():
    time6 = ld time;
    check L150() else D45();
  L149():
    r95 = dyn base12(<lang `<-`(n0, `!=`(time, 0.0))>);
    goto L29(r95);
  D45():
    deopt 158 [time6];
  L27(dx19):
    st time = dx19;
    goto L28();
  L30():
    goto L40();
  L40():
    r164 = ld r1;
    check L185() else D63();
  L141():
    dr14 = tryDispatchBuiltin.1("[", time3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L143() else L142(dr14);
  L142(time5):
    ok12 = ld ok;
    check L144() else D42();
  L150():
    time7 = force? time6;
    checkMissing(time7);
    r97 = `!=`(time7, 0.0);
    st n0 = r97;
    any1 = ldf any in base;
    r98 = dyn any1(r97);
    check L151() else D46();
  L152():
    sym13 = ldf round;
    base13 = ldf round in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L153() else L154();
  D42():
    deopt 142 [time5, ok12];
  D46():
    deopt 164 [r98];
  D63():
    deopt 225 [r164];
  L31(r100):
    st s = r100;
    getOption = ldf getOption;
    check L155() else D47();
  L143():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L27(dx18);
  L144():
    ok13 = force? ok12;
    __2 = ldf `[` in base;
    r81 = dyn __2(time5, ok13);
    goto L27(r81);
  L151():
    goto L29(r98);
  L153():
    round = ldf round in base;
    r101 = dyn round(<lang `[`(`$`(x, sec), n0)>, <sym digits>);
    goto L31(r101);
  L154():
    r99 = dyn base13(<lang `[`(`$`(x, sec), n0)>, <sym digits>);
    goto L31(r99);
  L185():
    r165 = force? r164;
    checkMissing(r165);
    l9 = ld r;
    c35 = `is.object`(l9);
    if c35 then L186() else L187(r165, l9);
  D47():
    deopt 170 [];
  L41(r169, dx46):
    st r = dx46;
    goto L42();
  L155():
    r102 = dyn getOption("OutDec");
    check L156() else D48();
  L186():
    dr36 = tryDispatchBuiltin.0("[<-", l9, r165);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L188() else L187(r165, dr36);
  L187(r167, l11):
    ok14 = ld ok;
    check L189() else D64();
  D48():
    deopt 172 [r102];
  D64():
    deopt 228 [r167, l11, r165, ok14];
  L156():
    OutDec1 = ld OutDec;
    check L157() else D49();
  L188():
    dx45 = getTryDispatchBuiltinValue(dr36);
    goto L41(r165, dx45);
  L189():
    ok15 = force? ok14;
    ___3 = ldf `[<-` in base;
    r170 = dyn ___3(l11, r165, ok15);
    goto L41(r167, r170);
  D49():
    deopt 172 [r102, OutDec1];
  L157():
    OutDec2 = force? OutDec1;
    checkMissing(OutDec2);
    r103 = `!=`(r102, OutDec2);
    c25 = `as.logical`(r103);
    if c25 then L158() else L32();
  L32():
    goto L34();
  L34():
    getOption1 = ldf getOption;
    check L164() else D52();
  L158():
    options = ldf options;
    check L159() else D50();
  D50():
    deopt 176 [];
  D52():
    deopt 187 [];
  L159():
    p9 = prom<V +>{
      OutDec3 = ld OutDec;
      OutDec4 = force? OutDec3;
      checkMissing(OutDec4);
      return OutDec4;
    };
    r105 = dyn options[OutDec](p9);
    check L160() else D51();
  L164():
    r110 = dyn getOption1("scipen");
    check L165() else D53();
  D51():
    deopt 179 [r105];
  D53():
    deopt 189 [r110];
  L160():
    st op = r105;
    sym14 = ldf `on.exit`;
    base14 = ldf `on.exit` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L161() else L162();
  L165():
    sym15 = ldf min;
    base15 = ldf min in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L166() else L167();
  L33(r107):
    goto L34();
  L35(r114, r115):
    r117 = `<=`(r114, r115);
    c26 = `as.logical`(r117);
    if c26 then L170() else L36();
  L161():
    on_exit = ldf `on.exit` in base;
    r108 = dyn on_exit(<lang options(op)>);
    goto L33(r108);
  L162():
    r106 = dyn base14(<lang options(op)>);
    goto L33(r106);
  L166():
    digits5 = ld digits;
    check L168() else D54();
  L167():
    r113 = dyn base15(<sym digits>);
    goto L35(r110, r113);
  D54():
    deopt 191 [r110, digits5];
  L36():
    goto L38();
  L38():
    paste0 = ldf paste0;
    check L176() else D58();
  L168():
    digits6 = force? digits5;
    checkMissing(digits6);
    min = ldf min in base;
    r116 = dyn min(digits6);
    check L169() else D55();
  L170():
    options1 = ldf options;
    check L171() else D56();
  D55():
    deopt 194 [r110, r116];
  D56():
    deopt 197 [];
  D58():
    deopt 208 [];
  L169():
    goto L35(r110, r116);
  L171():
    p10 = prom<V +>{
      sym16 = ldf max;
      base16 = ldf max in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r119):
      r121 = `+`(r119, 1);
      return r121;
    L1():
      digits7 = ld digits;
      digits8 = force? digits7;
      checkMissing(digits8);
      max = ldf max in base;
      r120 = dyn max(digits8);
      goto L0(r120);
    L2():
      r118 = dyn base16(<sym digits>);
      goto L0(r118);
    };
    r123 = dyn options1[scipen](p10);
    check L172() else D57();
  L176():
    p11 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L2() else L3();
    L0(r129):
      c28 = `is.object`(r129);
      if c28 then L4() else L5(r129);
    L2():
      c27 = ldf c in base;
      r130 = dyn c27("", "0");
      goto L0(r130);
    L3():
      r128 = dyn base18("", "0");
      goto L0(r128);
    L1(dx28):
      return dx28;
    L4():
      dr22 = tryDispatchBuiltin.1("[", r129);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L6() else L5(dr22);
    L5(r132):
      s10 = ld s;
      s11 = force? s10;
      checkMissing(s11);
      r133 = `<`(s11, 10.0);
      r134 = `+`(r133, 1);
      __3 = ldf `[` in base;
      r135 = dyn __3(r132, r134);
      goto L1(r135);
    L6():
      dx27 = getTryDispatchBuiltinValue(dr22);
      goto L1(dx27);
    };
    p12 = prom<V +>{
      sym19 = ldf `as.character`;
      base19 = ldf `as.character` in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r138):
      return r138;
    L1():
      s12 = ld s;
      s13 = force? s12;
      checkMissing(s13);
      as_character1 = ldf `as.character` in base;
      r139 = dyn as_character1(s13);
      goto L0(r139);
    L2():
      r137 = dyn base19(<sym s>);
      goto L0(r137);
    };
    r141 = dyn paste0(p11, p12);
    check L177() else D59();
  D57():
    deopt 200 [r123];
  D59():
    deopt 211 [r141];
  L172():
    st o2 = r123;
    sym17 = ldf `on.exit`;
    base17 = ldf `on.exit` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L173() else L174();
  L177():
    st sch = r141;
    paste1 = ldf paste;
    check L178() else D60();
  D60():
    deopt 214 [];
  L37(r125):
    goto L38();
  L173():
    on_exit1 = ldf `on.exit` in base;
    r126 = dyn on_exit1(<lang options(o2)>, TRUE);
    goto L37(r126);
  L174():
    r124 = dyn base17[, add](<lang options(o2)>, TRUE);
    goto L37(r124);
  L178():
    p13 = prom<V +>{
      r142 = ld r1;
      r143 = force? r142;
      checkMissing(r143);
      c29 = `is.object`(r143);
      if c29 then L1() else L2(r143);
    L0(dx30):
      return dx30;
    L1():
      dr24 = tryDispatchBuiltin.1("[", r143);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(r145):
      n0 = ld n0;
      n1 = force? n0;
      __4 = ldf `[` in base;
      r146 = dyn __4(r145, n1);
      goto L0(r146);
    L3():
      dx29 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx29);
    };
    p17 = prom<V +>{
      sprintf1 = ldf sprintf;
      p14 = prom<V +>{
        x33 = ld x;
        x34 = force? x33;
        checkMissing(x34);
        c30 = `is.object`(x34);
        if c30 then L2() else L3(x34);
      L1(dx32):
        c31 = `is.object`(dx32);
        if c31 then L5() else L6(dx32);
      L2():
        dr26 = tryDispatchBuiltin.1("$", x34);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L4() else L3(dr26);
      L3(x36):
        r148 = `$`(x36, <sym hour>);
        goto L1(r148);
      L0(dx36):
        return dx36;
      L4():
        dx31 = getTryDispatchBuiltinValue(dr26);
        goto L1(dx31);
      L5():
        dr28 = tryDispatchBuiltin.1("[", dx32);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L7() else L6(dr28);
      L6(dx34):
        n2 = ld n0;
        n3 = force? n2;
        __5 = ldf `[` in base;
        r149 = dyn __5(dx34, n3);
        goto L0(r149);
      L7():
        dx35 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx35);
      };
      p15 = prom<V +>{
        x37 = ld x;
        x38 = force? x37;
        checkMissing(x38);
        c32 = `is.object`(x38);
        if c32 then L2() else L3(x38);
      L1(dx38):
        c33 = `is.object`(dx38);
        if c33 then L5() else L6(dx38);
      L2():
        dr30 = tryDispatchBuiltin.1("$", x38);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L4() else L3(dr30);
      L3(x40):
        r151 = `$`(x40, <sym min>);
        goto L1(r151);
      L0(dx42):
        return dx42;
      L4():
        dx37 = getTryDispatchBuiltinValue(dr30);
        goto L1(dx37);
      L5():
        dr32 = tryDispatchBuiltin.1("[", dx38);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L7() else L6(dr32);
      L6(dx40):
        n4 = ld n0;
        n5 = force? n4;
        __6 = ldf `[` in base;
        r152 = dyn __6(dx40, n5);
        goto L0(r152);
      L7():
        dx41 = getTryDispatchBuiltinValue(dr32);
        goto L0(dx41);
      };
      p16 = prom<V +>{
        sch = ld sch;
        sch1 = force? sch;
        checkMissing(sch1);
        return sch1;
      };
      r155 = dyn sprintf1("%02d:%02d:%s", p14, p15, p16);
      return r155;
    };
    r157 = dyn paste1(p13, p17);
    check L179() else D61();
  D61():
    deopt 217 [r157];
  L179():
    l6 = ld r1;
    c34 = `is.object`(l6);
    if c34 then L180() else L181(r157, l6);
  L39(r161, dx44):
    st r1 = dx44;
    goto L40();
  L180():
    dr34 = tryDispatchBuiltin.0("[<-", l6, r157);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L182() else L181(r157, dr34);
  L181(r159, l8):
    n6 = ld n0;
    check L183() else D62();
  D62():
    deopt 219 [r159, l8, r157, n6];
  L182():
    dx43 = getTryDispatchBuiltinValue(dr34);
    goto L39(r157, dx43);
  L183():
    n7 = force? n6;
    ___2 = ldf `[<-` in base;
    r162 = dyn ___2(l8, r157, n7);
    goto L39(r159, r162);
  }
}