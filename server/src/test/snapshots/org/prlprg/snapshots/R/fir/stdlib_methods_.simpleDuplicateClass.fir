fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner55045992;
    st `.simpleDuplicateClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner55045992(def, prev) {
  (reg def:*, reg prev:*) -+> V { var def:*, var prev:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg __:cls, reg r2:V, reg names:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg __1:cls, reg r6:V, reg names1:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg supers:*, reg supers1:V, reg length:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg r15:V, reg prevSupers:*, reg prevSupers1:V, reg length1:cls, reg r16:V, reg r17:V, reg c:L, reg c1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg c5:L, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg c8:L, reg r21:V, reg supers2:*, reg supers3:V, reg prevSupers2:*, reg prevSupers3:V, reg match:cls, reg r22:V, reg anyNA:cls, reg r23:V, reg c9:L, reg c10:V, reg c12:L, reg getOption:cls, reg r26:V, reg _in_:cls, reg supers4:*, reg supers5:V, reg p:p(V +), reg r28:V, reg S3:*, reg S4:V, reg c13:L, reg _duplicateClassesExist:cls, reg r31:V, reg dupsExist:*, reg dupsExist1:V, reg c14:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg supers6:*, reg supers7:V, reg multipleClasses:cls, reg r34:V, reg match1:cls, reg r35:V, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg dups:*, reg dups1:V, reg any:cls, reg r39:V, reg c15:L, reg verbose:*, reg verbose1:V, reg c16:L, reg message:cls, reg gettextf:cls, reg dQuote:cls, reg __2:cls, reg r40:V, reg p1:p(V +), reg r42:V, reg p2:p(V +), reg sQuote:cls, reg __3:cls, reg r44:V, reg p3:p(V +), reg r46:V, reg p4:p(V +), reg sQuote1:cls, reg __4:cls, reg r48:V, reg p5:p(V +), reg r50:V, reg p6:p(V +), reg r52:V, reg p7:p(V +), reg r54:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg r60:V, reg __5:cls, reg r61:V, reg names2:cls, reg r62:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r63:V, reg r64:V, reg __6:cls, reg r65:V, reg names3:cls, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg slots:*, reg slots1:V, reg length2:cls, reg r69:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r72:V, reg r73:V, reg r74:V, reg prevSlots:*, reg prevSlots1:V, reg length3:cls, reg r75:V, reg r76:V, reg c17:L, reg c18:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r77:V, reg c22:L, reg r78:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg c25:L, reg r80:V, reg slots2:*, reg slots3:V, reg prevSlots2:*, reg prevSlots3:V, reg match2:cls, reg r81:V, reg anyNA1:cls, reg r82:V, reg c26:L, reg c27:V, reg c29:L, reg slots4:*, reg slots5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c30:L, reg x:V, reg __7:cls, reg r85:V, reg __8:cls, reg r86:V, reg slotClasses:*, reg slotClasses1:V, reg c31:L, reg i6:I, reg slotClasses3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg what:*, reg what1:V, reg __9:cls, reg r87:V, reg prevClasses:*, reg prevClasses1:V, reg c32:L, reg i10:I, reg prevClasses3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i12:I, reg dx3:V, reg what2:*, reg what3:V, reg __10:cls, reg r88:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r89:V, reg i15:I, reg r90:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r91:V, reg i18:I, reg r92:V, reg clWhat:*, reg clWhat1:V, reg as_character:cls, reg r93:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r94:V, reg i21:I, reg r95:V, reg prevWhat:*, reg prevWhat1:V, reg as_character1:cls, reg r96:V, reg identical:cls, reg r97:V, reg r98:V, reg c33:L, reg i22:I, reg c34:V, reg dupsExist2:*, reg dupsExist3:V, reg c36:L, reg i25:I, reg c39:L, reg c40:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r99:V, reg i28:I, reg c45:L, reg c46:L, reg r100:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r101:V, reg i31:I, reg c51:L, reg c52:L, reg r102:V, reg packageSlot:cls, reg clWhat2:*, reg clWhat3:V, reg p8:p(V +), reg r104:V, reg as_character2:cls, reg r105:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r106:V, reg i34:I, reg c57:L, reg c58:L, reg r107:V, reg packageSlot1:cls, reg prevWhat2:*, reg prevWhat3:V, reg p9:p(V +), reg r109:V, reg as_character3:cls, reg r110:V, reg identical1:cls, reg r111:V, reg r112:V, reg c59:L, reg c60:V, reg c63:L, reg c64:V, reg c66:L, reg verbose2:*, reg verbose3:V, reg c67:L, reg message1:cls, reg gettextf1:cls, reg dQuote1:cls, reg __11:cls, reg r115:V, reg p10:p(V +), reg r117:V, reg p11:p(V +), reg sQuote2:cls, reg __12:cls, reg r119:V, reg p12:p(V +), reg r121:V, reg p13:p(V +), reg sQuote3:cls, reg __13:cls, reg r123:V, reg p14:p(V +), reg r125:V, reg p15:p(V +), reg r127:V, reg p16:p(V +), reg r129:V |
    mkenv;
    st def = def;
    st prev = prev;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L0(r1):
    st supers = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L44():
    __ = ldf `@` in base;
    r2 = dyn __(<sym def>, <sym contains>);
    names = ldf names in base;
    r3 = dyn names(r2);
    check L46() else D0();
  L45():
    r = dyn base(<lang `@`(def, contains)>);
    goto L0(r);
  D0():
    deopt 5 [r3];
  L1(r5):
    st prevSupers = r5;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L46():
    goto L0(r3);
  L47():
    __1 = ldf `@` in base;
    r6 = dyn __1(<sym prev>, <sym contains>);
    names1 = ldf names in base;
    r7 = dyn names1(r6);
    check L49() else D1();
  L48():
    r4 = dyn base1(<lang `@`(prev, contains)>);
    goto L1(r4);
  D1():
    deopt 12 [r7];
  L2(r9):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L49():
    goto L1(r7);
  L50():
    supers = ld supers;
    check L52() else D2();
  L51():
    r8 = dyn base2(<sym supers>);
    goto L2(r8);
  D2():
    deopt 16 [supers];
  L3(r14, r15):
    r17 = `!=`(r14, r15);
    c = `as.logical`(r17);
    if c then L4(c) else L58();
  L52():
    supers1 = force? supers;
    checkMissing(supers1);
    length = ldf length in base;
    r10 = dyn length(supers1);
    check L53() else D3();
  L54():
    prevSupers = ld prevSupers;
    check L56() else D4();
  L55():
    r13 = dyn base3(<sym prevSupers>);
    goto L3(r9, r13);
  D3():
    deopt 19 [r10];
  D4():
    deopt 21 [r9, prevSupers];
  L4(c1):
    c12 = `as.logical`(c1);
    if c12 then L68() else L7();
  L53():
    goto L2(r10);
  L56():
    prevSupers1 = force? prevSupers;
    checkMissing(prevSupers1);
    length1 = ldf length in base;
    r16 = dyn length1(prevSupers1);
    check L57() else D5();
  L58():
    sym4 = ldf anyNA;
    base4 = ldf anyNA in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  D5():
    deopt 24 [r9, r16];
  L5(c5, r19):
    c9 = `as.logical`(r19);
    c10 = `||`(c5, c9);
    goto L4(c10);
  L7():
    getOption = ldf getOption;
    check L71() else D10();
  L57():
    goto L3(r9, r16);
  L59():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L60():
    r18 = dyn base4(<lang match(supers, prevSupers)>);
    goto L5(c, r18);
  L68():
    popenv;
    return FALSE;
  D10():
    deopt 47 [];
  L6(c8, r21):
    anyNA = ldf anyNA in base;
    r23 = dyn anyNA(r21);
    check L66() else D9();
  L61():
    supers2 = ld supers;
    check L63() else D6();
  L62():
    r20 = dyn base5(<sym supers>, <sym prevSupers>);
    goto L6(c, r20);
  L71():
    r26 = dyn getOption("verbose");
    check L72() else D11();
  D6():
    deopt 30 [c, supers2];
  D9():
    deopt 39 [c8, r23];
  D11():
    deopt 49 [r26];
  L63():
    supers3 = force? supers2;
    checkMissing(supers3);
    prevSupers2 = ld prevSupers;
    check L64() else D7();
  L66():
    goto L5(c8, r23);
  L72():
    st verbose = r26;
    _in_ = ldf `%in%`;
    check L73() else D12();
  D7():
    deopt 32 [c, prevSupers2];
  D12():
    deopt 52 [];
  L64():
    prevSupers3 = force? prevSupers2;
    checkMissing(prevSupers3);
    match = ldf match in base;
    r22 = dyn match(supers3, prevSupers3, NA_INT, NULL);
    check L65() else D8();
  L73():
    p = prom<V +>{
      supers4 = ld supers;
      supers5 = force? supers4;
      checkMissing(supers5);
      return supers5;
    };
    r28 = dyn _in_("oldClass", p);
    check L74() else D13();
  D8():
    deopt 37 [c, r22];
  D13():
    deopt 55 [r28];
  L65():
    goto L6(c, r22);
  L74():
    st S3 = r28;
    S3 = ld S3;
    check L75() else D14();
  D14():
    deopt 57 [S3];
  L75():
    S4 = force? S3;
    checkMissing(S4);
    c13 = `as.logical`(S4);
    if c13 then L76() else L9();
  L9():
    _duplicateClassesExist = ldf `.duplicateClassesExist`;
    check L79() else D15();
  L76():
    popenv;
    return TRUE;
  D15():
    deopt 65 [];
  L79():
    r31 = dyn _duplicateClassesExist();
    check L80() else D16();
  D16():
    deopt 66 [r31];
  L80():
    st dupsExist = r31;
    dupsExist = ld dupsExist;
    check L81() else D17();
  D17():
    deopt 68 [dupsExist];
  L81():
    dupsExist1 = force? dupsExist;
    checkMissing(dupsExist1);
    c14 = `as.logical`(dupsExist1);
    if c14 then L82() else L11();
  L11():
    goto L18();
  L18():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L82():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L83() else L84();
  L12(r33):
    r36 = `>`(r33, 0.0);
    st dups = r36;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L19(r60):
    st slots = r60;
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L105() else L106();
  L83():
    supers6 = ld supers;
    check L85() else D18();
  L84():
    r32 = dyn base6(<sym supers>, <lang multipleClasses()>, 0.0);
    goto L12(r32);
  L102():
    __5 = ldf `@` in base;
    r61 = dyn __5(<sym def>, <sym slots>);
    names2 = ldf names in base;
    r62 = dyn names2(r61);
    check L104() else D27();
  L103():
    r59 = dyn base8(<lang `@`(def, slots)>);
    goto L19(r59);
  D18():
    deopt 72 [supers6];
  D27():
    deopt 112 [r62];
  L13(r38):
    c15 = `as.logical`(r38);
    if c15 then L93() else L14();
  L20(r64):
    st prevSlots = r64;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L108() else L109();
  L85():
    supers7 = force? supers6;
    checkMissing(supers7);
    multipleClasses = ldf multipleClasses;
    check L86() else D19();
  L89():
    dups = ld dups;
    check L91() else D22();
  L90():
    r37 = dyn base7(<sym dups>);
    goto L13(r37);
  L104():
    goto L19(r62);
  L105():
    __6 = ldf `@` in base;
    r65 = dyn __6(<sym prev>, <sym slots>);
    names3 = ldf names in base;
    r66 = dyn names3(r65);
    check L107() else D28();
  L106():
    r63 = dyn base9(<lang `@`(prev, slots)>);
    goto L20(r63);
  D19():
    deopt 75 [];
  D22():
    deopt 86 [dups];
  D28():
    deopt 119 [r66];
  L14():
    goto L18();
  L21(r68):
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L112() else L113();
  L86():
    r34 = dyn multipleClasses();
    check L87() else D20();
  L91():
    dups1 = force? dups;
    checkMissing(dups1);
    any = ldf any in base;
    r39 = dyn any(dups1);
    check L92() else D23();
  L93():
    verbose = ld verbose;
    check L94() else D24();
  L107():
    goto L20(r66);
  L108():
    slots = ld slots;
    check L110() else D29();
  L109():
    r67 = dyn base10(<sym slots>);
    goto L21(r67);
  D20():
    deopt 76 [r34];
  D23():
    deopt 89 [r39];
  D24():
    deopt 90 [verbose];
  D29():
    deopt 123 [slots];
  L22(r73, r74):
    r76 = `!=`(r73, r74);
    c17 = `as.logical`(r76);
    if c17 then L23(c17) else L116();
  L87():
    match1 = ldf match in base;
    r35 = dyn match1(supers7, r34, 0.0, NULL);
    check L88() else D21();
  L92():
    goto L13(r39);
  L94():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c16 = `as.logical`(verbose1);
    if c16 then L95() else L15();
  L110():
    slots1 = force? slots;
    checkMissing(slots1);
    length2 = ldf length in base;
    r69 = dyn length2(slots1);
    check L111() else D30();
  L112():
    prevSlots = ld prevSlots;
    check L114() else D31();
  L113():
    r72 = dyn base11(<sym prevSlots>);
    goto L22(r68, r72);
  D21():
    deopt 80 [r35];
  D30():
    deopt 126 [r69];
  D31():
    deopt 128 [r68, prevSlots];
  L15():
    goto L16();
  L16():
    popenv;
    return FALSE;
  L23(c18):
    c29 = `as.logical`(c18);
    if c29 then L126() else L26();
  L88():
    goto L12(r35);
  L95():
    message = ldf message;
    check L96() else D25();
  L111():
    goto L21(r69);
  L114():
    prevSlots1 = force? prevSlots;
    checkMissing(prevSlots1);
    length3 = ldf length in base;
    r75 = dyn length3(prevSlots1);
    check L115() else D32();
  L116():
    sym12 = ldf anyNA;
    base12 = ldf anyNA in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L117() else L118();
  D25():
    deopt 93 [];
  D32():
    deopt 131 [r68, r75];
  L24(c22, r78):
    c26 = `as.logical`(r78);
    c27 = `||`(c22, c26);
    goto L23(c27);
  L26():
    slots4 = ld slots;
    check L129() else D37();
  L96():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        dQuote = ldf dQuote;
        p1 = prom<V +>{
          __2 = ldf `@` in base;
          r40 = dyn __2(<sym def>, <sym className>);
          return r40;
        };
        r42 = dyn dQuote(p1);
        return r42;
      };
      p4 = prom<V +>{
        sQuote = ldf sQuote;
        p3 = prom<V +>{
          __3 = ldf `@` in base;
          r44 = dyn __3(<sym def>, <sym package>);
          return r44;
        };
        r46 = dyn sQuote(p3);
        return r46;
      };
      p6 = prom<V +>{
        sQuote1 = ldf sQuote;
        p5 = prom<V +>{
          __4 = ldf `@` in base;
          r48 = dyn __4(<sym prev>, <sym package>);
          return r48;
        };
        r50 = dyn sQuote1(p5);
        return r50;
      };
      r52 = dyn gettextf("Note: some superclasses of class %s in package %s have duplicate definitions.  This definition is not being treated as equivalent to that from package %s", p2, p4, p6);
      return r52;
    };
    r54 = dyn message[, domain](p7, NA_LGL);
    check L97() else D26();
  L115():
    goto L22(r68, r75);
  L117():
    sym13 = ldf match;
    base13 = ldf match in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L119() else L120();
  L118():
    r77 = dyn base12(<lang match(slots, prevSlots)>);
    goto L24(c17, r77);
  L126():
    popenv;
    return FALSE;
  D26():
    deopt 97 [r54];
  D37():
    deopt 153 [slots4];
  L25(c25, r80):
    anyNA1 = ldf anyNA in base;
    r82 = dyn anyNA1(r80);
    check L124() else D36();
  L97():
    goto L16();
  L119():
    slots2 = ld slots;
    check L121() else D33();
  L120():
    r79 = dyn base13(<sym slots>, <sym prevSlots>);
    goto L25(c17, r79);
  L129():
    slots5 = force? slots4;
    checkMissing(slots5);
    s = toForSeq(slots5);
    l = length(s);
    i = 0;
    goto L28(i);
  D33():
    deopt 137 [c17, slots2];
  D36():
    deopt 146 [c25, r82];
  L28(i1):
    i2 = `+`.1(i1, 1);
    c30 = `<`.1(l, i2);
    if c30 then L130() else L41();
  L121():
    slots3 = force? slots2;
    checkMissing(slots3);
    prevSlots2 = ld prevSlots;
    check L122() else D34();
  L124():
    goto L24(c25, r82);
  D34():
    deopt 139 [c17, prevSlots2];
  L41():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    __7 = ldf `@` in base;
    r85 = dyn __7(<sym def>, <sym slots>);
    st slotClasses = r85;
    __8 = ldf `@` in base;
    r86 = dyn __8(<sym prev>, <sym slots>);
    st prevClasses = r86;
    slotClasses = ld slotClasses;
    check L131() else D38();
  L122():
    prevSlots3 = force? prevSlots2;
    checkMissing(prevSlots3);
    match2 = ldf match in base;
    r81 = dyn match2(slots3, prevSlots3, NA_INT, NULL);
    check L123() else D35();
  L130():
    verbose2 = ld verbose;
    check L173() else D55();
  D35():
    deopt 144 [c17, r81];
  D38():
    deopt 161 [i2, slotClasses];
  D55():
    deopt 237 [verbose2];
  L123():
    goto L25(c17, r81);
  L131():
    slotClasses1 = force? slotClasses;
    checkMissing(slotClasses1);
    c31 = `is.object`(slotClasses1);
    if c31 then L132() else L133(i2, slotClasses1);
  L173():
    verbose3 = force? verbose2;
    checkMissing(verbose3);
    c67 = `as.logical`(verbose3);
    if c67 then L174() else L42();
  L29(i8, dx1):
    st clWhat = dx1;
    prevClasses = ld prevClasses;
    check L136() else D40();
  L42():
    goto L43();
  L43():
    popenv;
    return TRUE;
  L132():
    dr = tryDispatchBuiltin.1("[[", slotClasses1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L134() else L133(i2, dr);
  L133(i6, slotClasses3):
    what = ld what;
    check L135() else D39();
  L174():
    message1 = ldf message;
    check L175() else D56();
  D39():
    deopt 163 [i6, slotClasses3, what];
  D40():
    deopt 167 [i8, prevClasses];
  D56():
    deopt 240 [];
  L134():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(i2, dx);
  L135():
    what1 = force? what;
    __9 = ldf `[[` in base;
    r87 = dyn __9(slotClasses3, what1);
    goto L29(i6, r87);
  L136():
    prevClasses1 = force? prevClasses;
    checkMissing(prevClasses1);
    c32 = `is.object`(prevClasses1);
    if c32 then L137() else L138(i8, prevClasses1);
  L175():
    p16 = prom<V +>{
      gettextf1 = ldf gettextf;
      p11 = prom<V +>{
        dQuote1 = ldf dQuote;
        p10 = prom<V +>{
          __11 = ldf `@` in base;
          r115 = dyn __11(<sym def>, <sym className>);
          return r115;
        };
        r117 = dyn dQuote1(p10);
        return r117;
      };
      p13 = prom<V +>{
        sQuote2 = ldf sQuote;
        p12 = prom<V +>{
          __12 = ldf `@` in base;
          r119 = dyn __12(<sym def>, <sym package>);
          return r119;
        };
        r121 = dyn sQuote2(p12);
        return r121;
      };
      p15 = prom<V +>{
        sQuote3 = ldf sQuote;
        p14 = prom<V +>{
          __13 = ldf `@` in base;
          r123 = dyn __13(<sym prev>, <sym package>);
          return r123;
        };
        r125 = dyn sQuote3(p14);
        return r125;
      };
      r127 = dyn gettextf1("Note: the specification for class %s in package %s seems equivalent to one from package %s: not turning on duplicate class definitions for this class.", p11, p13, p15);
      return r127;
    };
    r129 = dyn message1[, domain](p16, NA_LGL);
    check L176() else D57();
  D57():
    deopt 244 [r129];
  L30(i12, dx3):
    st prevWhat = dx3;
    sym14 = ldf identical;
    base14 = ldf identical in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L141() else L142();
  L137():
    dr2 = tryDispatchBuiltin.1("[[", prevClasses1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L139() else L138(i8, dr2);
  L138(i10, prevClasses3):
    what2 = ld what;
    check L140() else D41();
  L176():
    goto L43();
  D41():
    deopt 169 [i10, prevClasses3, what2];
  L31(i15, r90):
    r98 = `!`(r90);
    c33 = `as.logical`(r98);
    if c33 then L34(i15, c33) else L152();
  L139():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L30(i8, dx2);
  L140():
    what3 = force? what2;
    __10 = ldf `[[` in base;
    r88 = dyn __10(prevClasses3, what3);
    goto L30(i10, r88);
  L141():
    sym15 = ldf `as.character`;
    base15 = ldf `as.character` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L143() else L144();
  L142():
    r89 = dyn base14(<lang as.character(clWhat)>, <lang as.character(prevWhat)>);
    goto L31(i12, r89);
  L32(i18, r92):
    sym16 = ldf `as.character`;
    base16 = ldf `as.character` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L147() else L148();
  L34(i22, c34):
    c66 = `as.logical`(c34);
    if c66 then L170() else L39();
  L143():
    clWhat = ld clWhat;
    check L145() else D42();
  L144():
    r91 = dyn base15(<sym clWhat>);
    goto L32(i12, r91);
  L152():
    dupsExist2 = ld dupsExist;
    check L153() else D47();
  D42():
    deopt 177 [i12, clWhat];
  D47():
    deopt 197 [i15, c33, dupsExist2];
  L33(i21, r95):
    identical = ldf identical in base;
    r97 = dyn identical(r92, r95, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L151() else D46();
  L39():
    goto L28(i22);
  L145():
    clWhat1 = force? clWhat;
    checkMissing(clWhat1);
    as_character = ldf `as.character` in base;
    r93 = dyn as_character(clWhat1);
    check L146() else D43();
  L147():
    prevWhat = ld prevWhat;
    check L149() else D44();
  L148():
    r94 = dyn base16(<sym prevWhat>);
    goto L33(i18, r94);
  L153():
    dupsExist3 = force? dupsExist2;
    checkMissing(dupsExist3);
    c36 = `as.logical`(dupsExist3);
    if c36 then L154() else L35(i15, c33, c36);
  L170():
    popenv;
    return FALSE;
  D43():
    deopt 180 [i12, r93];
  D44():
    deopt 183 [i18, prevWhat];
  D46():
    deopt 195 [i21, r97];
  L35(i25, c39, c40):
    c63 = `as.logical`(c40);
    c64 = `||`(c39, c63);
    goto L34(i25, c64);
  L146():
    goto L32(i12, r93);
  L149():
    prevWhat1 = force? prevWhat;
    checkMissing(prevWhat1);
    as_character1 = ldf `as.character` in base;
    r96 = dyn as_character1(prevWhat1);
    check L150() else D45();
  L151():
    goto L31(i21, r97);
  L154():
    sym17 = ldf identical;
    base17 = ldf identical in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L155() else L156();
  D45():
    deopt 186 [i18, r96];
  L36(i28, c45, c46, r100):
    r112 = `!`(r100);
    c59 = `as.logical`(r112);
    c60 = `&&`(c46, c59);
    goto L35(i28, c45, c60);
  L150():
    goto L33(i18, r96);
  L155():
    sym18 = ldf `as.character`;
    base18 = ldf `as.character` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L157() else L158();
  L156():
    r99 = dyn base17(<lang as.character(packageSlot(clWhat))>, <lang as.character(packageSlot(prevWhat))>);
    goto L36(i15, c33, c36, r99);
  L37(i31, c51, c52, r102):
    sym19 = ldf `as.character`;
    base19 = ldf `as.character` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L162() else L163();
  L157():
    packageSlot = ldf packageSlot;
    check L159() else D48();
  L158():
    r101 = dyn base18(<lang packageSlot(clWhat)>);
    goto L37(i15, c33, c36, r101);
  D48():
    deopt 204 [i15, c33, c36];
  L38(i34, c57, c58, r107):
    identical1 = ldf identical in base;
    r111 = dyn identical1(r102, r107, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L167() else D54();
  L159():
    p8 = prom<V +>{
      clWhat2 = ld clWhat;
      clWhat3 = force? clWhat2;
      checkMissing(clWhat3);
      return clWhat3;
    };
    r104 = dyn packageSlot(p8);
    check L160() else D49();
  L162():
    packageSlot1 = ldf packageSlot;
    check L164() else D51();
  L163():
    r106 = dyn base19(<lang packageSlot(prevWhat)>);
    goto L38(i31, c51, c52, r106);
  D49():
    deopt 206 [i15, c33, c36, r104];
  D51():
    deopt 212 [i31, c51, c52];
  D54():
    deopt 225 [i34, c57, c58, r111];
  L160():
    as_character2 = ldf `as.character` in base;
    r105 = dyn as_character2(r104);
    check L161() else D50();
  L164():
    p9 = prom<V +>{
      prevWhat2 = ld prevWhat;
      prevWhat3 = force? prevWhat2;
      checkMissing(prevWhat3);
      return prevWhat3;
    };
    r109 = dyn packageSlot1(p9);
    check L165() else D52();
  L167():
    goto L36(i34, c57, c58, r111);
  D50():
    deopt 208 [i15, c33, c36, r105];
  D52():
    deopt 214 [i31, c51, c52, r109];
  L161():
    goto L37(i15, c33, c36, r105);
  L165():
    as_character3 = ldf `as.character` in base;
    r110 = dyn as_character3(r109);
    check L166() else D53();
  D53():
    deopt 216 [i31, c51, c52, r110];
  L166():
    goto L38(i31, c51, c52, r110);
  }
}