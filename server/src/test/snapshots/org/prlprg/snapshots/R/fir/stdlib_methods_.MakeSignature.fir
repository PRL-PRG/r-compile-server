fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3682569449;
    st `.MakeSignature` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3682569449(object, def, signature, fdef) {
  (reg object:*, reg def:*, reg signature:*, reg fdef:*) -+> V { var object:*, var def:*, reg def_isMissing:L, reg def_orDefault:*, var signature:*, var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, reg def1:*, reg def2:V, reg p:p(V +), reg unlist:cls, reg signature1:*, reg signature2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg signature3:*, reg signature4:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg signature5:*, reg signature6:V, reg as_character:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg signature7:*, reg signature8:V, reg names:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg signature9:*, reg signature10:V, reg attr:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg pkgs:*, reg pkgs1:V, reg c1:V, reg c2:L, reg character:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg signature11:*, reg signature12:V, reg length1:cls, reg r20:V, reg p2:p(V +), reg r22:V, reg is:cls, reg fdef1:*, reg fdef2:V, reg p3:p(V +), reg r25:V, reg c3:L, reg __:cls, reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg def3:*, reg def4:V, reg is_function:cls, reg r30:V, reg c4:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg fdef3:*, reg fdef4:V, reg is_function1:cls, reg r33:V, reg r34:V, reg c5:L, reg def5:*, reg def6:V, reg formalArgs:cls, reg fdef5:*, reg fdef6:V, reg p4:p(V +), reg r36:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg formalNames:*, reg formalNames1:V, reg match:cls, reg r39:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg dots:*, reg dots1:V, reg is_na:cls, reg r42:V, reg r43:V, reg c6:L, reg formalNames2:*, reg formalNames3:V, reg c7:L, reg formalNames5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dots2:*, reg dots3:V, reg r44:V, reg __1:cls, reg r45:V, reg dx2:V, reg character1:cls, reg r46:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r47:V, reg r48:V, reg formalNames6:*, reg formalNames7:V, reg length2:cls, reg r49:V, reg r50:V, reg c8:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg r52:V, reg sigArgs:*, reg sigArgs1:V, reg c9:V, reg c10:L, reg formalNames8:*, reg formalNames9:V, reg c11:L, reg formalNames11:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r53:V, reg formalNames14:V, reg r54:V, reg classes:*, reg classes1:V, reg r55:I, reg __2:cls, reg r56:V, reg l:*, reg names__:cls, reg r57:V, reg dx5:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r58:V, reg r59:V, reg sigArgs2:*, reg sigArgs3:V, reg length3:cls, reg r60:V, reg c12:L, reg c14:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r61:V, reg c17:L, reg r62:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r63:V, reg c20:L, reg r64:V, reg sigArgs4:*, reg sigArgs5:V, reg formalNames15:*, reg formalNames16:V, reg match1:cls, reg r65:V, reg anyNA:cls, reg r66:V, reg c21:L, reg c22:V, reg c24:L, reg is1:cls, reg fdef7:*, reg fdef8:V, reg p5:p(V +), reg r68:V, reg c25:L, reg stop:cls, reg sprintf:cls, reg gettext:cls, reg r69:V, reg p6:p(V +), reg paste:cls, reg sigArgs6:*, reg sigArgs7:V, reg p7:p(V +), reg r72:V, reg p8:p(V +), reg __3:cls, reg r74:V, reg p9:p(V +), reg paste1:cls, reg formalNames17:*, reg formalNames18:V, reg p10:p(V +), reg r77:V, reg p11:p(V +), reg r79:V, reg p12:p(V +), reg r81:V, reg r82:V, reg stop1:cls, reg sprintf1:cls, reg gettext1:cls, reg r83:V, reg p13:p(V +), reg paste2:cls, reg sigArgs8:*, reg sigArgs9:V, reg p14:p(V +), reg r86:V, reg p15:p(V +), reg paste3:cls, reg formalNames19:*, reg formalNames20:V, reg p16:p(V +), reg r89:V, reg p17:p(V +), reg r91:V, reg p18:p(V +), reg r93:V, reg signature13:*, reg signature14:V, reg l1:*, reg ___:cls, reg r94:V, reg pkgs2:*, reg pkgs3:V, reg l2:*, reg ___1:cls, reg r95:V, reg object1:*, reg object2:V |
    mkenv;
    st object = object;
    def_isMissing = missing.0(def);
    if def_isMissing then L0(NULL) else L0(def);
  L0(def_orDefault):
    st def = def_orDefault;
    st signature = signature;
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L1() else L2(fdef);
  L1():
    p = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    goto L2(p);
  L2(fdef_orDefault):
    st fdef = fdef_orDefault;
    unlist = ldf unlist;
    check L39() else D0();
  D0():
    deopt 1 [];
  L39():
    p1 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    r2 = dyn unlist(p1);
    check L40() else D1();
  D1():
    deopt 3 [r2];
  L40():
    st signature = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L41() else L42();
  L3(r4):
    r6 = `>`(r4, 0.0);
    c = `as.logical`(r6);
    if c then L45() else L4();
  L41():
    signature3 = ld signature;
    check L43() else D2();
  L42():
    r3 = dyn base(<sym signature>);
    goto L3(r3);
  D2():
    deopt 7 [signature3];
  L4():
    goto L38();
  L38():
    object1 = ld object;
    check L152() else D55();
  L43():
    signature4 = force? signature3;
    checkMissing(signature4);
    length = ldf length in base;
    r5 = dyn length(signature4);
    check L44() else D3();
  L45():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  D3():
    deopt 10 [r5];
  D55():
    deopt 191 [object1];
  L5(r8):
    st classes = r8;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L44():
    goto L3(r5);
  L46():
    signature5 = ld signature;
    check L48() else D4();
  L47():
    r7 = dyn base1(<sym signature>);
    goto L5(r7);
  L152():
    object2 = force? object1;
    checkMissing(object2);
    popenv;
    return object2;
  D4():
    deopt 15 [signature5];
  L6(r11):
    st sigArgs = r11;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L48():
    signature6 = force? signature5;
    checkMissing(signature6);
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(signature6);
    check L49() else D5();
  L50():
    signature7 = ld signature;
    check L52() else D6();
  L51():
    r10 = dyn base2(<sym signature>);
    goto L6(r10);
  D5():
    deopt 18 [r9];
  D6():
    deopt 22 [signature7];
  L7(r14):
    st pkgs = r14;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  L49():
    goto L5(r9);
  L52():
    signature8 = force? signature7;
    checkMissing(signature8);
    names = ldf names in base;
    r12 = dyn names(signature8);
    check L53() else D7();
  L54():
    signature9 = ld signature;
    check L56() else D8();
  L55():
    r13 = dyn base3(<sym signature>, "package");
    goto L7(r13);
  D7():
    deopt 25 [r12];
  D8():
    deopt 29 [signature9];
  L8(r17):
    c2 = `as.logical`(r17);
    if c2 then L61() else L9();
  L53():
    goto L6(r12);
  L56():
    signature10 = force? signature9;
    checkMissing(signature10);
    attr = ldf attr in base;
    r15 = dyn attr(signature10, "package");
    check L57() else D9();
  L58():
    pkgs = ld pkgs;
    check L60() else D10();
  L59():
    r16 = dyn base4(<sym pkgs>);
    goto L8(r16);
  D9():
    deopt 33 [r15];
  D10():
    deopt 36 [pkgs];
  L9():
    goto L10();
  L10():
    is = ldf is;
    check L65() else D13();
  L57():
    goto L7(r15);
  L60():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    c1 = `==`(pkgs1, NULL);
    goto L8(c1);
  L61():
    character = ldf character;
    check L62() else D11();
  D11():
    deopt 40 [];
  D13():
    deopt 47 [];
  L62():
    p2 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      signature11 = ld signature;
      signature12 = force? signature11;
      checkMissing(signature12);
      length1 = ldf length in base;
      r20 = dyn length1(signature12);
      goto L0(r20);
    L2():
      r18 = dyn base5(<sym signature>);
      goto L0(r18);
    };
    r22 = dyn character(p2);
    check L63() else D12();
  L65():
    p3 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r25 = dyn is(p3, "genericFunction");
    check L66() else D14();
  D12():
    deopt 42 [r22];
  D14():
    deopt 50 [r25];
  L63():
    st pkgs = r22;
    goto L10();
  L66():
    c3 = `as.logical`(r25);
    if c3 then L67() else L11();
  L11():
    sym6 = ldf `is.function`;
    base6 = ldf `is.function` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L12():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L101() else L102();
  L67():
    __ = ldf `@` in base;
    r26 = dyn __(<sym fdef>, <sym signature>);
    st formalNames = r26;
    goto L12();
  L13(r29):
    c4 = `as.logical`(r29);
    if c4 then L73() else L14();
  L23(r48):
    r50 = `>`(r48, 0.0);
    c8 = `as.logical`(r50);
    if c8 then L105() else L24();
  L69():
    def3 = ld def;
    check L71() else D15();
  L70():
    r28 = dyn base6(<sym def>);
    goto L13(r28);
  L101():
    formalNames6 = ld formalNames;
    check L103() else D30();
  L102():
    r47 = dyn base10(<sym formalNames>);
    goto L23(r47);
  D15():
    deopt 56 [def3];
  D30():
    deopt 109 [formalNames6];
  L14():
    character1 = ldf character;
    check L99() else D28();
  L24():
    goto L37();
  L37():
    signature13 = ld signature;
    check L145() else D49();
  L71():
    def4 = force? def3;
    checkMissing(def4);
    is_function = ldf `is.function` in base;
    r30 = dyn is_function(def4);
    check L72() else D16();
  L73():
    sym7 = ldf `is.function`;
    base7 = ldf `is.function` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L103():
    formalNames7 = force? formalNames6;
    checkMissing(formalNames7);
    length2 = ldf length in base;
    r49 = dyn length2(formalNames7);
    check L104() else D31();
  L105():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L106() else L107();
  D16():
    deopt 59 [r30];
  D28():
    deopt 104 [];
  D31():
    deopt 112 [r49];
  D49():
    deopt 173 [signature13];
  L15(r32):
    r34 = `!`(r32);
    c5 = `as.logical`(r34);
    if c5 then L78() else L16();
  L25(r52):
    c10 = `as.logical`(r52);
    if c10 then L109() else L26();
  L72():
    goto L13(r30);
  L74():
    fdef3 = ld fdef;
    check L76() else D17();
  L75():
    r31 = dyn base7(<sym fdef>);
    goto L15(r31);
  L99():
    r46 = dyn character1();
    check L100() else D29();
  L104():
    goto L23(r49);
  L106():
    sigArgs = ld sigArgs;
    check L108() else D32();
  L107():
    r51 = dyn base11(<sym sigArgs>);
    goto L25(r51);
  L145():
    signature14 = force? signature13;
    checkMissing(signature14);
    l1 = ld object;
    ___ = ldf `@<-`;
    check L146() else D50();
  D17():
    deopt 62 [fdef3];
  D29():
    deopt 105 [r46];
  D32():
    deopt 116 [sigArgs];
  D50():
    deopt 176 [signature14, l1, signature14];
  L16():
    goto L17();
  L17():
    formalArgs = ldf formalArgs;
    check L81() else D20();
  L26():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L120() else L121();
  L29(dx5):
    goto L37();
  L76():
    fdef4 = force? fdef3;
    checkMissing(fdef4);
    is_function1 = ldf `is.function` in base;
    r33 = dyn is_function1(fdef4);
    check L77() else D18();
  L78():
    def5 = ld def;
    check L79() else D19();
  L100():
    st formalNames = r46;
    goto L12();
  L108():
    sigArgs1 = force? sigArgs;
    checkMissing(sigArgs1);
    c9 = `==`(sigArgs1, NULL);
    goto L25(c9);
  L109():
    formalNames8 = ld formalNames;
    check L110() else D33();
  L146():
    r94 = dyn ___(l1, NULL, ".Data", signature14);
    check L147() else D51();
  D18():
    deopt 65 [r33];
  D19():
    deopt 67 [def5];
  D20():
    deopt 73 [];
  D33():
    deopt 119 [formalNames8];
  D51():
    deopt 179 [signature14, r94];
  L30(r59):
    c12 = `as.logical`(r59);
    if c12 then L124() else L31(c12);
  L77():
    goto L15(r33);
  L79():
    def6 = force? def5;
    checkMissing(def6);
    st fdef = def6;
    goto L17();
  L81():
    p4 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    r36 = dyn formalArgs(p4);
    check L82() else D21();
  L110():
    formalNames9 = force? formalNames8;
    checkMissing(formalNames9);
    c11 = `is.object`(formalNames9);
    if c11 then L111() else L112(formalNames9);
  L120():
    sigArgs2 = ld sigArgs;
    check L122() else D37();
  L121():
    r58 = dyn base13(<sym sigArgs>);
    goto L30(r58);
  L147():
    st object = r94;
    pkgs2 = ld pkgs;
    check L148() else D52();
  D21():
    deopt 75 [r36];
  D37():
    deopt 133 [sigArgs2];
  D52():
    deopt 181 [pkgs2];
  L27(dx4):
    l = ld signature;
    names__ = ldf `names<-`;
    check L117() else D35();
  L31(c14):
    c24 = `as.logical`(c14);
    if c24 then L134() else L34();
  L82():
    st formalNames = r36;
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L83() else L84();
  L111():
    dr2 = tryDispatchBuiltin.1("[", formalNames9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L113() else L112(dr2);
  L112(formalNames11):
    sym12 = ldf seq_along;
    base12 = ldf seq_along in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L114() else L115();
  L122():
    sigArgs3 = force? sigArgs2;
    checkMissing(sigArgs3);
    length3 = ldf length in base;
    r60 = dyn length3(sigArgs3);
    check L123() else D38();
  L124():
    sym14 = ldf anyNA;
    base14 = ldf anyNA in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L125() else L126();
  L148():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    l2 = ld object;
    ___1 = ldf `@<-`;
    check L149() else D53();
  D35():
    deopt 127 [dx4, l, dx4];
  D38():
    deopt 136 [r60];
  D53():
    deopt 184 [pkgs3, l2, pkgs3];
  L18(r38):
    st dots = r38;
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L87() else L88();
  L28(formalNames14, r54):
    __2 = ldf `[` in base;
    r56 = dyn __2(formalNames14, r54);
    goto L27(r56);
  L32(c17, r62):
    c21 = `as.logical`(r62);
    c22 = `&&`(c17, c21);
    goto L31(c22);
  L34():
    goto L29(NULL);
  L83():
    formalNames = ld formalNames;
    check L85() else D22();
  L84():
    r37 = dyn base8("...", <sym formalNames>);
    goto L18(r37);
  L113():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L27(dx3);
  L114():
    classes = ld classes;
    check L116() else D34();
  L115():
    r53 = dyn base12(<sym classes>);
    goto L28(formalNames11, r53);
  L117():
    r57 = dyn names__(l, NULL, dx4);
    check L118() else D36();
  L123():
    goto L30(r60);
  L125():
    sym15 = ldf match;
    base15 = ldf match in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L127() else L128();
  L126():
    r61 = dyn base14(<lang match(sigArgs, formalNames)>);
    goto L32(c12, r61);
  L134():
    is1 = ldf is;
    check L135() else D43();
  L149():
    r95 = dyn ___1(l2, NULL, "package", pkgs3);
    check L150() else D54();
  D22():
    deopt 80 [formalNames];
  D34():
    deopt 122 [formalNames11, classes];
  D36():
    deopt 129 [dx4, r57];
  D43():
    deopt 153 [];
  D54():
    deopt 187 [pkgs3, r95];
  L19(r41):
    r43 = `!`(r41);
    c6 = `as.logical`(r43);
    if c6 then L91() else L20();
  L33(c20, r64):
    anyNA = ldf anyNA in base;
    r66 = dyn anyNA(r64);
    check L132() else D42();
  L85():
    formalNames1 = force? formalNames;
    checkMissing(formalNames1);
    match = ldf match in base;
    r39 = dyn match("...", formalNames1, NA_INT, NULL);
    check L86() else D23();
  L87():
    dots = ld dots;
    check L89() else D24();
  L88():
    r40 = dyn base9(<sym dots>);
    goto L19(r40);
  L116():
    classes1 = force? classes;
    checkMissing(classes1);
    r55 = seq_along(classes1);
    goto L28(formalNames11, r55);
  L118():
    st signature = r57;
    goto L29(dx4);
  L127():
    sigArgs4 = ld sigArgs;
    check L129() else D39();
  L128():
    r63 = dyn base15(<sym sigArgs>, <sym formalNames>);
    goto L33(c12, r63);
  L135():
    p5 = prom<V +>{
      fdef7 = ld fdef;
      fdef8 = force? fdef7;
      checkMissing(fdef8);
      return fdef8;
    };
    r68 = dyn is1(p5, "genericFunction");
    check L136() else D44();
  L150():
    st object = r95;
    goto L38();
  D23():
    deopt 85 [r39];
  D24():
    deopt 89 [dots];
  D39():
    deopt 141 [c12, sigArgs4];
  D42():
    deopt 150 [c20, r66];
  D44():
    deopt 156 [r68];
  L20():
    goto L22(NULL);
  L22(dx2):
    goto L12();
  L86():
    goto L18(r39);
  L89():
    dots1 = force? dots;
    checkMissing(dots1);
    is_na = ldf `is.na` in base;
    r42 = dyn is_na(dots1);
    check L90() else D25();
  L91():
    formalNames2 = ld formalNames;
    check L92() else D26();
  L129():
    sigArgs5 = force? sigArgs4;
    checkMissing(sigArgs5);
    formalNames15 = ld formalNames;
    check L130() else D40();
  L132():
    goto L32(c20, r66);
  L136():
    c25 = `as.logical`(r68);
    if c25 then L137() else L35();
  D25():
    deopt 92 [r42];
  D26():
    deopt 94 [formalNames2];
  D40():
    deopt 143 [c12, formalNames15];
  L35():
    stop1 = ldf stop;
    check L141() else D47();
  L36(r82):
    goto L29(r82);
  L90():
    goto L19(r42);
  L92():
    formalNames3 = force? formalNames2;
    checkMissing(formalNames3);
    c7 = `is.object`(formalNames3);
    if c7 then L93() else L94(formalNames3);
  L130():
    formalNames16 = force? formalNames15;
    checkMissing(formalNames16);
    match1 = ldf match in base;
    r65 = dyn match1(sigArgs5, formalNames16, NA_INT, NULL);
    check L131() else D41();
  L137():
    stop = ldf stop;
    check L138() else D45();
  D41():
    deopt 148 [c12, r65];
  D45():
    deopt 158 [];
  D47():
    deopt 164 [];
  L21(dx1):
    st formalNames = dx1;
    goto L22(dx1);
  L93():
    dr = tryDispatchBuiltin.1("[", formalNames3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L95() else L94(dr);
  L94(formalNames5):
    dots2 = ld dots;
    check L96() else D27();
  L131():
    goto L33(c12, r65);
  L138():
    p12 = prom<V +>{
      sprintf = ldf sprintf;
      p6 = prom<V +>{
        gettext = ldf gettext;
        r69 = dyn gettext[, domain]("the names in signature for method (%s) do not match %s's arguments (%s)", "R-methods");
        return r69;
      };
      p8 = prom<V +>{
        paste = ldf paste;
        p7 = prom<V +>{
          sigArgs6 = ld sigArgs;
          sigArgs7 = force? sigArgs6;
          checkMissing(sigArgs7);
          return sigArgs7;
        };
        r72 = dyn paste[, collapse](p7, ", ");
        return r72;
      };
      p9 = prom<V +>{
        __3 = ldf `@` in base;
        r74 = dyn __3(<sym fdef>, <sym generic>);
        return r74;
      };
      p11 = prom<V +>{
        paste1 = ldf paste;
        p10 = prom<V +>{
          formalNames17 = ld formalNames;
          formalNames18 = force? formalNames17;
          checkMissing(formalNames18);
          return formalNames18;
        };
        r77 = dyn paste1[, collapse](p10, ", ");
        return r77;
      };
      r79 = dyn sprintf(p6, p8, p9, p11);
      return r79;
    };
    r81 = dyn stop[, domain](p12, NA_LGL);
    check L139() else D46();
  L141():
    p18 = prom<V +>{
      sprintf1 = ldf sprintf;
      p13 = prom<V +>{
        gettext1 = ldf gettext;
        r83 = dyn gettext1[, domain]("the names in signature for method (%s) do not match function's arguments (%s)", "R-methods");
        return r83;
      };
      p15 = prom<V +>{
        paste2 = ldf paste;
        p14 = prom<V +>{
          sigArgs8 = ld sigArgs;
          sigArgs9 = force? sigArgs8;
          checkMissing(sigArgs9);
          return sigArgs9;
        };
        r86 = dyn paste2[, collapse](p14, ", ");
        return r86;
      };
      p17 = prom<V +>{
        paste3 = ldf paste;
        p16 = prom<V +>{
          formalNames19 = ld formalNames;
          formalNames20 = force? formalNames19;
          checkMissing(formalNames20);
          return formalNames20;
        };
        r89 = dyn paste3[, collapse](p16, ", ");
        return r89;
      };
      r91 = dyn sprintf1(p13, p15, p17);
      return r91;
    };
    r93 = dyn stop1[, domain](p18, NA_LGL);
    check L142() else D48();
  D27():
    deopt 96 [formalNames5, dots2];
  D46():
    deopt 162 [r81];
  D48():
    deopt 168 [r93];
  L95():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L96():
    dots3 = force? dots2;
    checkMissing(dots3);
    r44 = `-`(<missing>, dots3);
    __1 = ldf `[` in base;
    r45 = dyn __1(formalNames5, r44);
    goto L21(r45);
  L139():
    goto L36(r81);
  L142():
    goto L36(r93);
  }
}