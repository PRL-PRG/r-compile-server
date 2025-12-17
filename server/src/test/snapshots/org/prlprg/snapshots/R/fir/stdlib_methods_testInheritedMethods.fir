fun main() {
  () -+> V { reg r:cls, reg testInheritedMethods:cls, reg r1:V |
    mkenv;
    r = clos inner780635389;
    st testInheritedMethods = r;
    testInheritedMethods = ldf testInheritedMethods;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn testInheritedMethods("+");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner780635389(f, signatures, test, virtual, groupMethods, where) {
  (reg f:*, reg signatures:*, reg test:*, reg virtual:*, reg groupMethods:*, reg where:*) -+> V { var f:*, var signatures:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, var virtual:*, reg virtual_isMissing:L, reg virtual_orDefault:*, var groupMethods:*, reg groupMethods_isMissing:L, reg groupMethods_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p:p(V +), reg r1:cls, reg is:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg getGeneric:cls, reg f3:*, reg f4:V, reg p2:p(V +), reg r6:V, reg __:cls, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c1:L, reg findMethods:cls, reg f5:*, reg f6:V, reg p3:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg mdefs:*, reg mdefs1:V, reg names:cls, reg r16:V, reg findMethodSignatures:cls, reg mdefs2:*, reg mdefs3:V, reg p4:p(V +), reg r18:V, reg groupMethods1:*, reg groupMethods2:V, reg c2:L, reg getGroup:cls, reg f7:*, reg f8:V, reg p5:p(V +), reg r20:V, reg groups:*, reg groups1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg getGeneric1:cls, reg group:*, reg group1:V, reg p6:p(V +), reg r22:V, reg findMethods1:cls, reg fg:*, reg fg1:V, reg p7:p(V +), reg r24:V, reg findMethodSignatures1:cls, reg mg:*, reg mg1:V, reg p8:p(V +), reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg i7:I, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg i10:I, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg i13:I, reg r32:V, reg mg2:*, reg mg3:V, reg names1:cls, reg r33:V, reg mnames:*, reg mnames1:V, reg match:cls, reg r34:V, reg is_na:cls, reg r35:V, reg rbind:cls, reg sigs:*, reg sigs1:V, reg p9:p(V +), reg sigsg:*, reg sigsg1:V, reg c4:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg newSigs:*, reg newSigs1:V, reg __1:cls, reg r37:V, reg p10:p(V +), reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg i16:I, reg r41:V, reg mnames2:*, reg mnames3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg i19:I, reg r43:V, reg mg4:*, reg mg5:V, reg names2:cls, reg r44:V, reg c5:L, reg i21:I, reg r46:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i23:I, reg dx3:V, reg newSigs2:*, reg newSigs3:V, reg __2:cls, reg r47:V, reg c6:cls, reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg sigs2:*, reg sigs3:V, reg length:cls, reg r51:V, reg r52:V, reg c7:L, reg new:cls, reg fname:*, reg fname1:V, reg p11:p(V +), reg r54:V, reg _in_:cls, reg fname2:*, reg fname3:V, reg p12:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg r59:V, reg c8:cls, reg r60:V, reg p13:p(V +), reg r62:V, reg c9:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r63:V, reg r64:V, reg colnames:cls, reg sigs4:*, reg sigs5:V, reg p14:p(V +), reg r66:V, reg match1:cls, reg r67:V, reg r68:V, reg r69:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r70:V, reg ncol:cls, reg sigs6:*, reg sigs7:V, reg p15:p(V +), reg r72:V, reg rep_int:cls, reg r73:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg ncol1:cls, reg sigs8:*, reg sigs9:V, reg p16:p(V +), reg r77:V, reg r78:I, reg s1:V, reg l1:I, reg i25:I, reg i26:I, reg i27:I, reg c10:L, reg x1:V, reg unique:cls, reg sigs10:*, reg sigs11:V, reg c11:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg j:*, reg j1:V, reg __3:cls, reg r79:V, reg p17:p(V +), reg r81:V, reg character:cls, reg r82:V, reg _relevantClasses:cls, reg classesj:*, reg classesj1:V, reg p18:p(V +), reg virtual1:*, reg virtual2:V, reg r84:V, reg p19:p(V +), reg where1:*, reg where2:V, reg p20:p(V +), reg ok:*, reg ok1:V, reg c12:L, reg ok3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg j2:*, reg j3:V, reg __4:cls, reg r87:V, reg p21:p(V +), reg r89:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r90:V, reg i32:I, reg r91:V, reg subclasses:*, reg subclasses1:V, reg length1:cls, reg r92:V, reg j4:*, reg j5:V, reg r93:V, reg c13:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r94:V, reg i37:I, reg r95:V, reg rep:cls, reg r96:V, reg ncomb:*, reg ncomb1:V, reg nj:*, reg nj1:V, reg r97:V, reg paste:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r98:V, reg r99:V, reg rep1:cls, reg r100:V, reg p22:p(V +), reg subclasses2:*, reg subclasses3:V, reg p23:p(V +), reg r103:V, reg i38:I, reg subclasses4:*, reg subclasses5:V, reg nj2:*, reg nj3:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r105:V, reg i41:I, reg r106:V, reg _undefClasses:*, reg _undefClasses1:V, reg length2:cls, reg r107:V, reg c14:L, reg warning:cls, reg gettextf:cls, reg paste1:cls, reg unique1:cls, reg _undefClasses2:*, reg _undefClasses3:V, reg p24:p(V +), reg r109:V, reg p25:p(V +), reg r111:V, reg p26:p(V +), reg colnames1:cls, reg sigs14:*, reg sigs15:V, reg p27:p(V +), reg r114:V, reg c15:L, reg r116:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg j6:*, reg j7:V, reg __5:cls, reg r117:V, reg p28:p(V +), reg r119:V, reg p29:p(V +), reg r121:V, reg character1:cls, reg r122:V, reg i44:I, reg strsplit:cls, reg sigLabels:*, reg sigLabels1:V, reg p30:p(V +), reg r125:V, reg is1:cls, reg signatures1:*, reg signatures2:V, reg p31:p(V +), reg r128:V, reg c16:L, reg c18:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r129:V, reg c21:L, reg r130:V, reg signatures3:*, reg signatures4:V, reg typeof:cls, reg r131:V, reg r132:V, reg c22:L, reg c23:V, reg c25:L, reg c27:V, reg ncol2:cls, reg signatures5:*, reg signatures6:V, reg p32:p(V +), reg r134:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r137:V, reg c30:L, reg r138:V, reg r139:V, reg __6:cls, reg r140:V, reg length3:cls, reg r141:V, reg r142:V, reg c31:L, reg c32:V, reg c34:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r143:V, reg r144:V, reg nrow:cls, reg signatures7:*, reg signatures8:V, reg p33:p(V +), reg r146:V, reg vector:cls, reg r147:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r148:V, reg r149:V, reg nrow1:cls, reg signatures9:*, reg signatures10:V, reg p34:p(V +), reg r151:V, reg r152:I, reg s2:V, reg l2:I, reg i45:I, reg i46:I, reg i47:I, reg c35:L, reg x2:V, reg signatures11:*, reg signatures12:V, reg c36:L, reg i51:I, reg signatures14:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i53:I, reg dx11:V, reg i54:*, reg i55:V, reg __7:cls, reg r153:V, reg l3:*, reg c37:L, reg i57:I, reg dx13:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx15:V, reg i59:I, reg dx17:V, reg i60:*, reg i61:V, reg ____:cls, reg r154:V, reg siglist:*, reg siglist1:V, reg stop:cls, reg r155:V, reg character2:cls, reg r156:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r157:V, reg r158:V, reg list:cls, reg r159:V, reg character3:cls, reg r160:V, reg character4:cls, reg r161:V, reg test1:*, reg test2:V, reg c38:L, reg r162:cls, reg options:cls, reg warninghandler:*, reg warninghandler1:V, reg p35:p(V +), reg r164:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r165:V, reg on_exit:cls, reg r167:V, reg r168:cls, reg lapply:cls, reg signatures15:*, reg signatures16:V, reg p36:p(V +), reg doSelect:*, reg doSelect1:V, reg p37:p(V +), reg r171:V, reg sapply:cls, reg signatures17:*, reg signatures18:V, reg p38:p(V +), reg paste2:*, reg paste3:V, reg p39:p(V +), reg r175:V, reg sigLabels2:*, reg sigLabels3:V, reg l6:*, reg names__:cls, reg r176:V, reg new1:cls, reg fname4:*, reg fname5:V, reg p40:p(V +), reg signatures19:*, reg signatures20:V, reg p41:p(V +), reg ambig_target:*, reg ambig_target1:V, reg p42:p(V +), reg ambig_selected:*, reg ambig_selected1:V, reg p43:p(V +), reg ambig_candidates:*, reg ambig_candidates1:V, reg p44:p(V +), reg ambig_note:*, reg ambig_note1:V, reg p45:p(V +), reg r183:V |
    mkenv;
    st f = f;
    st signatures = signatures;
    test_isMissing = missing.0(test);
    if test_isMissing then L0(TRUE) else L0(test);
  L0(test_orDefault):
    st test = test_orDefault;
    virtual_isMissing = missing.0(virtual);
    if virtual_isMissing then L1(FALSE) else L1(virtual);
  L1(virtual_orDefault):
    st virtual = virtual_orDefault;
    groupMethods_isMissing = missing.0(groupMethods);
    if groupMethods_isMissing then L2(TRUE) else L2(groupMethods);
  L2(groupMethods_orDefault):
    st groupMethods = groupMethods_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L3() else L4(where);
  L3():
    p = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    goto L4(p);
  L4(where_orDefault):
    st where = where_orDefault;
    r1 = clos inner705497215;
    st `.relevantClasses` = r1;
    is = ldf is;
    check L52() else D0();
  D0():
    deopt 4 [];
  L52():
    p1 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r3 = dyn is(p1, "genericFunction");
    check L53() else D1();
  D1():
    deopt 7 [r3];
  L53():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L54() else L5();
  L5():
    goto L6();
  L6():
    __ = ldf `@` in base;
    r8 = dyn __(<sym f>, <sym generic>);
    st fname = r8;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L58() else L59();
  L54():
    getGeneric = ldf getGeneric;
    check L55() else D2();
  D2():
    deopt 10 [];
  L7(r10):
    c1 = `as.logical`(r10);
    if c1 then L60() else L8();
  L55():
    p2 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r6 = dyn getGeneric(p2);
    check L56() else D3();
  L58():
    missing = ldf missing in base;
    r11 = dyn missing(<sym signatures>);
    goto L7(r11);
  L59():
    r9 = dyn base(<sym signatures>);
    goto L7(r9);
  D3():
    deopt 12 [r6];
  L8():
    is1 = ldf is;
    check L169() else D69();
  L36():
    character2 = ldf character;
    check L208() else D87();
  L56():
    st f = r6;
    goto L6();
  L60():
    findMethods = ldf findMethods;
    check L61() else D4();
  D4():
    deopt 23 [];
  D69():
    deopt 245 [];
  D87():
    deopt 308 [];
  L61():
    p3 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    r13 = dyn findMethods(p3);
    check L62() else D5();
  L169():
    p31 = prom<V +>{
      signatures1 = ld signatures;
      signatures2 = force? signatures1;
      checkMissing(signatures2);
      return signatures2;
    };
    r128 = dyn is1(p31, "matrix");
    check L170() else D70();
  L208():
    r156 = dyn character2();
    check L209() else D88();
  D5():
    deopt 25 [r13];
  D70():
    deopt 248 [r128];
  D88():
    deopt 309 [r156];
  L62():
    st mdefs = r13;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L63() else L64();
  L170():
    c16 = `as.logical`(r128);
    if c16 then L171() else L37(c16);
  L209():
    st ambig_target = r156;
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L210() else L211();
  L9(r15):
    st mnames = r15;
    findMethodSignatures = ldf findMethodSignatures;
    check L67() else D8();
  L37(c18):
    c25 = `as.logical`(c18);
    if c25 then L177() else L39(c25);
  L48(r158):
    st ambig_candidates = r158;
    character3 = ldf character;
    check L213() else D90();
  L63():
    mdefs = ld mdefs;
    check L65() else D6();
  L64():
    r14 = dyn base1(<sym mdefs>);
    goto L9(r14);
  L171():
    sym16 = ldf typeof;
    base16 = ldf typeof in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L172() else L173();
  L210():
    list = ldf list in base;
    r159 = dyn list();
    check L212() else D89();
  L211():
    r157 = dyn base20();
    goto L48(r157);
  D6():
    deopt 29 [mdefs];
  D8():
    deopt 35 [];
  D89():
    deopt 314 [r159];
  D90():
    deopt 317 [];
  L38(c21, r130):
    r132 = `==`(r130, "character");
    c22 = `as.logical`(r132);
    c23 = `&&`(c21, c22);
    goto L37(c23);
  L39(c27):
    c34 = `as.logical`(c27);
    if c34 then L184() else L41();
  L65():
    mdefs1 = force? mdefs;
    checkMissing(mdefs1);
    names = ldf names in base;
    r16 = dyn names(mdefs1);
    check L66() else D7();
  L67():
    p4 = prom<V +>{
      mdefs2 = ld mdefs;
      mdefs3 = force? mdefs2;
      checkMissing(mdefs3);
      return mdefs3;
    };
    r18 = dyn findMethodSignatures[methods](p4);
    check L68() else D9();
  L172():
    signatures3 = ld signatures;
    check L174() else D71();
  L173():
    r129 = dyn base16(<sym signatures>);
    goto L38(c16, r129);
  L177():
    ncol2 = ldf ncol;
    check L178() else D73();
  L212():
    goto L48(r159);
  L213():
    r160 = dyn character3();
    check L214() else D91();
  D7():
    deopt 32 [r16];
  D9():
    deopt 38 [r18];
  D71():
    deopt 251 [c16, signatures3];
  D73():
    deopt 259 [c25];
  D91():
    deopt 318 [r160];
  L41():
    stop = ldf stop;
    check L206() else D85();
  L66():
    goto L9(r16);
  L68():
    st sigs = r18;
    groupMethods1 = ld groupMethods;
    check L69() else D10();
  L174():
    signatures4 = force? signatures3;
    checkMissing(signatures4);
    typeof = ldf typeof in base;
    r131 = dyn typeof(signatures4);
    check L175() else D72();
  L178():
    p32 = prom<V +>{
      signatures5 = ld signatures;
      signatures6 = force? signatures5;
      checkMissing(signatures6);
      return signatures6;
    };
    r134 = dyn ncol2(p32);
    check L179() else D74();
  L184():
    sym18 = ldf vector;
    base18 = ldf vector in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L185() else L186();
  L214():
    st ambig_selected = r160;
    character4 = ldf character;
    check L215() else D92();
  D10():
    deopt 40 [groupMethods1];
  D72():
    deopt 254 [c16, r131];
  D74():
    deopt 261 [c25, r134];
  D85():
    deopt 304 [];
  D92():
    deopt 321 [];
  L42(r144):
    st siglist = r144;
    sym19 = ldf seq_len;
    base19 = ldf seq_len in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L190() else L191();
  L69():
    groupMethods2 = force? groupMethods1;
    checkMissing(groupMethods2);
    c2 = `as.logical`(groupMethods2);
    if c2 then L70() else L10();
  L175():
    goto L38(c16, r131);
  L179():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L180() else L181();
  L185():
    nrow = ldf nrow;
    check L187() else D76();
  L186():
    r143 = dyn base18("list", <lang nrow(signatures)>);
    goto L42(r143);
  L206():
    r155 = dyn stop("argument 'signatures' must be a character matrix whose rows are method signatures");
    check L207() else D86();
  L215():
    r161 = dyn character4();
    check L216() else D93();
  D76():
    deopt 273 [];
  D86():
    deopt 306 [r155];
  D93():
    deopt 322 [r161];
  L10():
    goto L19();
  L19():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L107() else L108();
  L40(c30, r138, r139):
    r142 = `<=`(r138, r139);
    c31 = `as.logical`(r142);
    c32 = `&&`(c30, c31);
    goto L39(c32);
  L43(r149):
    s2 = toForSeq(r149);
    l2 = length(s2);
    i45 = 0;
    goto L44(i45);
  L70():
    getGroup = ldf getGroup;
    check L71() else D11();
  L180():
    __6 = ldf `@` in base;
    r140 = dyn __6(<sym f>, <sym signature>);
    length3 = ldf length in base;
    r141 = dyn length3(r140);
    check L182() else D75();
  L181():
    r137 = dyn base17(<lang `@`(f, signature)>);
    goto L40(c25, r134, r137);
  L187():
    p33 = prom<V +>{
      signatures7 = ld signatures;
      signatures8 = force? signatures7;
      checkMissing(signatures8);
      return signatures8;
    };
    r146 = dyn nrow(p33);
    check L188() else D77();
  L190():
    nrow1 = ldf nrow;
    check L192() else D79();
  L191():
    r148 = dyn base19(<lang nrow(signatures)>);
    goto L43(r148);
  L207():
    goto L36();
  L216():
    st ambig_note = r161;
    test1 = ld test;
    check L217() else D94();
  D11():
    deopt 43 [];
  D75():
    deopt 266 [c25, r134, r141];
  D77():
    deopt 275 [r146];
  D79():
    deopt 281 [];
  D94():
    deopt 324 [test1];
  L20(r50):
    r52 = `==`(r50, 0.0);
    c7 = `as.logical`(r52);
    if c7 then L111() else L21();
  L44(i46):
    i47 = `+`.1(i46, 1);
    c35 = `<`.1(l2, i47);
    if c35 then L194() else L47();
  L71():
    p5 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    r20 = dyn getGroup[, recursive](p5, TRUE);
    check L72() else D12();
  L107():
    sigs2 = ld sigs;
    check L109() else D32();
  L108():
    r49 = dyn base7(<sym sigs>);
    goto L20(r49);
  L182():
    goto L40(c25, r134, r141);
  L188():
    vector = ldf vector in base;
    r147 = dyn vector("list", r146);
    check L189() else D78();
  L192():
    p34 = prom<V +>{
      signatures9 = ld signatures;
      signatures10 = force? signatures9;
      checkMissing(signatures10);
      return signatures10;
    };
    r151 = dyn nrow1(p34);
    check L193() else D80();
  L217():
    test2 = force? test1;
    checkMissing(test2);
    c38 = `as.logical`(test2);
    if c38 then L218() else L49();
  D12():
    deopt 47 [r20];
  D32():
    deopt 115 [sigs2];
  D78():
    deopt 277 [r147];
  D80():
    deopt 283 [r151];
  L21():
    _in_ = ldf `%in%`;
    check L116() else D36();
  L47():
    x2 = `[[`(s2, i47, NULL, TRUE);
    st i = x2;
    signatures11 = ld signatures;
    check L195() else D81();
  L49():
    goto L51();
  L51():
    sapply = ldf sapply;
    check L226() else D99();
  L72():
    st groups = r20;
    groups = ld groups;
    check L73() else D13();
  L109():
    sigs3 = force? sigs2;
    checkMissing(sigs3);
    length = ldf length in base;
    r51 = dyn length(sigs3);
    check L110() else D33();
  L111():
    new = ldf new;
    check L112() else D34();
  L189():
    goto L42(r147);
  L193():
    r152 = seq_len(r151);
    goto L43(r152);
  L194():
    siglist = ld siglist;
    check L204() else D84();
  L218():
    r162 = clos inner913928130;
    st warninghandler = r162;
    options = ldf options;
    check L219() else D95();
  D13():
    deopt 49 [groups];
  D33():
    deopt 118 [r51];
  D34():
    deopt 122 [];
  D36():
    deopt 131 [];
  D81():
    deopt 285 [i47, signatures11];
  D84():
    deopt 300 [siglist];
  D95():
    deopt 330 [];
  D99():
    deopt 350 [];
  L73():
    groups1 = force? groups;
    checkMissing(groups1);
    s = toForSeq(groups1);
    l = length(s);
    i = 0;
    goto L11(i);
  L110():
    goto L20(r51);
  L112():
    p11 = prom<V +>{
      fname = ld fname;
      fname1 = force? fname;
      checkMissing(fname1);
      return fname1;
    };
    r54 = dyn new[, generic]("MethodSelectionReport", p11);
    check L113() else D35();
  L116():
    p12 = prom<V +>{
      fname2 = ld fname;
      fname3 = force? fname2;
      checkMissing(fname3);
      return fname3;
    };
    p13 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      c8 = ldf c in base;
      r60 = dyn c8("coerce", "coerce<-");
      goto L0(r60);
    L2():
      r58 = dyn base8("coerce", "coerce<-");
      goto L0(r58);
    };
    r62 = dyn _in_(p12, p13);
    check L117() else D37();
  L195():
    signatures12 = force? signatures11;
    checkMissing(signatures12);
    c36 = `is.object`(signatures12);
    if c36 then L196() else L197(i47, signatures12);
  L204():
    siglist1 = force? siglist;
    checkMissing(siglist1);
    st signatures = siglist1;
    goto L36();
  L219():
    p35 = prom<V +>{
      warninghandler = ld warninghandler;
      warninghandler1 = force? warninghandler;
      checkMissing(warninghandler1);
      return warninghandler1;
    };
    r164 = dyn options[ambiguousMethodSelection](p35);
    check L220() else D96();
  L226():
    p38 = prom<V +>{
      signatures17 = ld signatures;
      signatures18 = force? signatures17;
      checkMissing(signatures18);
      return signatures18;
    };
    p39 = prom<V +>{
      paste2 = ld paste0;
      paste3 = force? paste2;
      checkMissing(paste3);
      return paste3;
    };
    r175 = dyn sapply[, , collapse](p38, p39, "#");
    check L227() else D100();
  D35():
    deopt 126 [r54];
  D37():
    deopt 134 [r62];
  D96():
    deopt 333 [r164];
  D100():
    deopt 355 [r175];
  L11(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L74() else L18();
  L45(i53, dx11):
    l3 = ld siglist;
    c37 = `is.object`(l3);
    if c37 then L200() else L201(i53, dx11, l3);
  L113():
    popenv;
    return r54;
  L117():
    c9 = `as.logical`(r62);
    if c9 then L118() else L23();
  L196():
    dr10 = tryDispatchBuiltin.1("[", signatures12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L198() else L197(i47, dr10);
  L197(i51, signatures14):
    i54 = ld i;
    check L199() else D82();
  L220():
    st ambigOpt = r164;
    sym21 = ldf `on.exit`;
    base21 = ldf `on.exit` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L221() else L222();
  L227():
    st signatures = r175;
    sigLabels2 = ld sigLabels;
    check L228() else D101();
  D82():
    deopt 287 [i51, signatures14, i54];
  D101():
    deopt 357 [sigLabels2];
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st group = x;
    getGeneric1 = ldf getGeneric;
    check L75() else D14();
  L23():
    sym10 = ldf `rep.int`;
    base10 = ldf `rep.int` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L125() else L126();
  L25(r69):
    st ok = r69;
    sym11 = ldf seq_len;
    base11 = ldf seq_len in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L130() else L131();
  L46(i59, dx17):
    st siglist = dx17;
    goto L44(i59);
  L50():
    r168 = clos inner2755828749;
    st doSelect = r168;
    lapply = ldf lapply;
    check L223() else D97();
  L74():
    goto L19();
  L118():
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L119() else L120();
  L198():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L45(i47, dx10);
  L199():
    i55 = force? i54;
    __7 = ldf `[` in base;
    r153 = dyn __7(signatures12, i55, <missing>);
    goto L45(i51, r153);
  L200():
    dr12 = tryDispatchBuiltin.0("[[<-", l3, dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L202() else L201(i53, dx11, dr12);
  L201(i57, dx13, l5):
    i60 = ld i;
    check L203() else D83();
  L221():
    on_exit = ldf `on.exit` in base;
    r167 = dyn on_exit(<lang options(ambigOpt)>);
    goto L50();
  L222():
    r165 = dyn base21(<lang options(ambigOpt)>);
    goto L50();
  L228():
    sigLabels3 = force? sigLabels2;
    checkMissing(sigLabels3);
    l6 = ld signatures;
    names__ = ldf `names<-`;
    check L229() else D102();
  D14():
    deopt 52 [i2];
  D83():
    deopt 293 [i57, dx13, l5, dx11, i60];
  D97():
    deopt 342 [];
  D102():
    deopt 360 [sigLabels3, l6, sigLabels3];
  L24(r64):
    r68 = `>`(r64, 0);
    goto L25(r68);
  L26(r75):
    s1 = toForSeq(r75);
    l1 = length(s1);
    i25 = 0;
    goto L27(i25);
  L75():
    p6 = prom<V +>{
      group = ld group;
      group1 = force? group;
      checkMissing(group1);
      return group1;
    };
    r22 = dyn getGeneric1(p6);
    check L76() else D15();
  L119():
    colnames = ldf colnames;
    check L121() else D38();
  L120():
    r63 = dyn base9(<lang colnames(sigs)>, "from", 0);
    goto L24(r63);
  L125():
    ncol = ldf ncol;
    check L127() else D41();
  L126():
    r70 = dyn base10(TRUE, <lang ncol(sigs)>);
    goto L25(r70);
  L130():
    ncol1 = ldf ncol;
    check L132() else D44();
  L131():
    r74 = dyn base11(<lang ncol(sigs)>);
    goto L26(r74);
  L202():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L46(i53, dx15);
  L203():
    i61 = force? i60;
    ____ = ldf `[[<-` in base;
    r154 = dyn ____(l5, dx11, i61);
    goto L46(i57, r154);
  L223():
    p36 = prom<V +>{
      signatures15 = ld signatures;
      signatures16 = force? signatures15;
      checkMissing(signatures16);
      return signatures16;
    };
    p37 = prom<V +>{
      doSelect = ld doSelect;
      doSelect1 = force? doSelect;
      checkMissing(doSelect1);
      return doSelect1;
    };
    r171 = dyn lapply(p36, p37);
    check L224() else D98();
  L229():
    r176 = dyn names__(l6, NULL, sigLabels3);
    check L230() else D103();
  D15():
    deopt 54 [i2, r22];
  D38():
    deopt 138 [];
  D41():
    deopt 152 [];
  D44():
    deopt 160 [];
  D98():
    deopt 345 [r171];
  D103():
    deopt 362 [sigLabels3, r176];
  L27(i26):
    i27 = `+`.1(i26, 1);
    c10 = `<`.1(l1, i27);
    if c10 then L134() else L35();
  L76():
    st fg = r22;
    findMethods1 = ldf findMethods;
    check L77() else D16();
  L121():
    p14 = prom<V +>{
      sigs4 = ld sigs;
      sigs5 = force? sigs4;
      checkMissing(sigs5);
      return sigs5;
    };
    r66 = dyn colnames(p14);
    check L122() else D39();
  L127():
    p15 = prom<V +>{
      sigs6 = ld sigs;
      sigs7 = force? sigs6;
      checkMissing(sigs7);
      return sigs7;
    };
    r72 = dyn ncol(p15);
    check L128() else D42();
  L132():
    p16 = prom<V +>{
      sigs8 = ld sigs;
      sigs9 = force? sigs8;
      checkMissing(sigs9);
      return sigs9;
    };
    r77 = dyn ncol1(p16);
    check L133() else D45();
  L224():
    st signatures = r171;
    goto L51();
  L230():
    st signatures = r176;
    new1 = ldf new;
    check L231() else D104();
  D16():
    deopt 57 [i2];
  D39():
    deopt 140 [r66];
  D42():
    deopt 154 [r72];
  D45():
    deopt 162 [r77];
  D104():
    deopt 365 [];
  L35():
    x1 = `[[`(s1, i27, NULL, TRUE);
    st j = x1;
    unique = ldf unique;
    check L135() else D46();
  L77():
    p7 = prom<V +>{
      fg = ld fg;
      fg1 = force? fg;
      checkMissing(fg1);
      return fg1;
    };
    r24 = dyn findMethods1(p7);
    check L78() else D17();
  L122():
    match1 = ldf match in base;
    r67 = dyn match1(r66, "from", 0, NULL);
    check L123() else D40();
  L128():
    rep_int = ldf `rep.int` in base;
    r73 = dyn rep_int(TRUE, r72);
    check L129() else D43();
  L133():
    r78 = seq_len(r77);
    goto L26(r78);
  L134():
    strsplit = ldf strsplit;
    check L166() else D67();
  L231():
    p40 = prom<V +>{
      fname4 = ld fname;
      fname5 = force? fname4;
      checkMissing(fname5);
      return fname5;
    };
    p41 = prom<V +>{
      signatures19 = ld signatures;
      signatures20 = force? signatures19;
      checkMissing(signatures20);
      return signatures20;
    };
    p42 = prom<V +>{
      ambig_target = ld ambig_target;
      ambig_target1 = force? ambig_target;
      checkMissing(ambig_target1);
      return ambig_target1;
    };
    p43 = prom<V +>{
      ambig_selected = ld ambig_selected;
      ambig_selected1 = force? ambig_selected;
      checkMissing(ambig_selected1);
      return ambig_selected1;
    };
    p44 = prom<V +>{
      ambig_candidates = ld ambig_candidates;
      ambig_candidates1 = force? ambig_candidates;
      checkMissing(ambig_candidates1);
      return ambig_candidates1;
    };
    p45 = prom<V +>{
      ambig_note = ld ambig_note;
      ambig_note1 = force? ambig_note;
      checkMissing(ambig_note1);
      return ambig_note1;
    };
    r183 = dyn new1[, generic, allSelections, target, selected, candidates, note]("MethodSelectionReport", p40, p41, p42, p43, p44, p45);
    check L232() else D105();
  D17():
    deopt 59 [i2, r24];
  D40():
    deopt 145 [r67];
  D43():
    deopt 156 [r73];
  D46():
    deopt 165 [i27];
  D67():
    deopt 237 [];
  D105():
    deopt 379 [r183];
  L78():
    st mg = r24;
    findMethodSignatures1 = ldf findMethodSignatures;
    check L79() else D18();
  L123():
    goto L24(r67);
  L129():
    goto L25(r73);
  L135():
    p17 = prom<V +>{
      sigs10 = ld sigs;
      sigs11 = force? sigs10;
      checkMissing(sigs11);
      c11 = `is.object`(sigs11);
      if c11 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", sigs11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      j = ld j;
      j1 = force? j;
      __3 = ldf `[` in base;
      r79 = dyn __3(sigs11, <missing>, j1);
      goto L0(r79);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r81 = dyn unique(p17);
    check L136() else D47();
  L166():
    p30 = prom<V +>{
      sigLabels = ld sigLabels;
      sigLabels1 = force? sigLabels;
      checkMissing(sigLabels1);
      return sigLabels1;
    };
    r125 = dyn strsplit[, , fixed](p30, "#", TRUE);
    check L167() else D68();
  L232():
    popenv;
    return r183;
  D18():
    deopt 62 [i2];
  D47():
    deopt 167 [i27, r81];
  D68():
    deopt 242 [r125];
  L79():
    p8 = prom<V +>{
      mg = ld mg;
      mg1 = force? mg;
      checkMissing(mg1);
      return mg1;
    };
    r26 = dyn findMethodSignatures1[methods](p8);
    check L80() else D19();
  L136():
    st classesj = r81;
    character = ldf character;
    check L137() else D48();
  L167():
    st signatures = r125;
    goto L36();
  D19():
    deopt 65 [i2, r26];
  D48():
    deopt 170 [i27];
  L80():
    st sigsg = r26;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L81() else L82();
  L137():
    r82 = dyn character();
    check L138() else D49();
  D49():
    deopt 171 [i27, r82];
  L12(i7, r28):
    st newSigs = r28;
    rbind = ldf rbind;
    check L92() else D25();
  L81():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L83() else L84();
  L82():
    r27 = dyn base2(<lang match(names(mg), mnames)>);
    goto L12(i2, r27);
  L138():
    st `.undefClasses` = r82;
    _relevantClasses = ldf `.relevantClasses`;
    check L139() else D50();
  D25():
    deopt 87 [i7];
  D50():
    deopt 174 [i27];
  L13(i10, r30):
    is_na = ldf `is.na` in base;
    r35 = dyn is_na(r30);
    check L91() else D24();
  L83():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L85() else L86();
  L84():
    r29 = dyn base3(<lang names(mg)>, <sym mnames>);
    goto L13(i2, r29);
  L92():
    p9 = prom<V +>{
      sigs = ld sigs;
      sigs1 = force? sigs;
      checkMissing(sigs1);
      return sigs1;
    };
    p10 = prom<V +>{
      sigsg = ld sigsg;
      sigsg1 = force? sigsg;
      checkMissing(sigsg1);
      c4 = `is.object`(sigsg1);
      if c4 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", sigsg1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      newSigs = ld newSigs;
      newSigs1 = force? newSigs;
      __1 = ldf `[` in base;
      r37 = dyn __1(sigsg1, newSigs1, <missing>);
      goto L0(r37);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r39 = dyn rbind(p9, p10);
    check L93() else D26();
  L139():
    p18 = prom<V +>{
      classesj = ld classesj;
      classesj1 = force? classesj;
      checkMissing(classesj1);
      return classesj1;
    };
    p19 = prom<V +>{
      virtual1 = ld virtual;
      virtual2 = force? virtual1;
      checkMissing(virtual2);
      r84 = `!`(virtual2);
      return r84;
    };
    p20 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p21 = prom<V +>{
      ok = ld ok;
      ok1 = force? ok;
      checkMissing(ok1);
      c12 = `is.object`(ok1);
      if c12 then L1() else L2(ok1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", ok1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(ok3):
      j2 = ld j;
      j3 = force? j2;
      __4 = ldf `[[` in base;
      r87 = dyn __4(ok3, j3);
      goto L0(r87);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r89 = dyn _relevantClasses(p18, p19, p20, p21);
    check L140() else D51();
  D24():
    deopt 84 [i10, r35];
  D26():
    deopt 90 [i7, r39];
  D51():
    deopt 179 [i27, r89];
  L14(i13, r32):
    mnames = ld mnames;
    check L89() else D22();
  L85():
    mg2 = ld mg;
    check L87() else D20();
  L86():
    r31 = dyn base4(<sym mg>);
    goto L14(i2, r31);
  L91():
    goto L12(i10, r35);
  L93():
    st sigs = r39;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L94() else L95();
  L140():
    st subclasses = r89;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L141() else L142();
  D20():
    deopt 73 [i2, mg2];
  D22():
    deopt 77 [i13, mnames];
  L15(i16, r41):
    st mnames = r41;
    goto L11(i16);
  L28(i32, r91):
    st nj = r91;
    j4 = ld j;
    check L145() else D54();
  L87():
    mg3 = force? mg2;
    checkMissing(mg3);
    names1 = ldf names in base;
    r33 = dyn names1(mg3);
    check L88() else D21();
  L89():
    mnames1 = force? mnames;
    checkMissing(mnames1);
    match = ldf match in base;
    r34 = dyn match(r32, mnames1, NA_INT, NULL);
    check L90() else D23();
  L94():
    mnames2 = ld mnames;
    check L96() else D27();
  L95():
    r40 = dyn base5(<sym mnames>, <lang `[`(names(mg), newSigs)>);
    goto L15(i7, r40);
  L141():
    subclasses = ld subclasses;
    check L143() else D52();
  L142():
    r90 = dyn base12(<sym subclasses>);
    goto L28(i27, r90);
  D21():
    deopt 76 [i2, r33];
  D23():
    deopt 82 [i13, r34];
  D27():
    deopt 94 [i7, mnames2];
  D52():
    deopt 183 [i27, subclasses];
  D54():
    deopt 188 [i32, j4];
  L88():
    goto L14(i2, r33);
  L90():
    goto L13(i13, r34);
  L96():
    mnames3 = force? mnames2;
    checkMissing(mnames3);
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L97() else L98();
  L143():
    subclasses1 = force? subclasses;
    checkMissing(subclasses1);
    length1 = ldf length in base;
    r92 = dyn length1(subclasses1);
    check L144() else D53();
  L145():
    j5 = force? j4;
    checkMissing(j5);
    r93 = `>`(j5, 1.0);
    c13 = `as.logical`(r93);
    if c13 then L146() else L29();
  D53():
    deopt 186 [i27, r92];
  L16(i19, r43):
    c5 = `is.object`(r43);
    if c5 then L101() else L102(i19, r43);
  L29():
    subclasses4 = ld subclasses;
    check L154() else D59();
  L31(i38):
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L156() else L157();
  L97():
    mg4 = ld mg;
    check L99() else D28();
  L98():
    r42 = dyn base6(<sym mg>);
    goto L16(i7, r42);
  L144():
    goto L28(i27, r92);
  L146():
    sym13 = ldf rep;
    base13 = ldf rep in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L147() else L148();
  D28():
    deopt 98 [i7, mg4];
  D59():
    deopt 209 [i32, subclasses4];
  L17(i23, dx3):
    c6 = ldf c in base;
    r48 = dyn c6(mnames3, dx3);
    check L105() else D31();
  L30(i37, r95):
    st subclasses = r95;
    ncomb = ld ncomb;
    check L149() else D55();
  L32(i41, r106):
    c14 = `as.logical`(r106);
    if c14 then L160() else L33();
  L99():
    mg5 = force? mg4;
    checkMissing(mg5);
    names2 = ldf names in base;
    r44 = dyn names2(mg5);
    check L100() else D29();
  L101():
    dr2 = tryDispatchBuiltin.1("[", r43);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L103() else L102(i19, dr2);
  L102(i21, r46):
    newSigs2 = ld newSigs;
    check L104() else D30();
  L147():
    rep = ldf rep in base;
    r96 = dyn rep(<sym subclasses>, <lang rep.int(ncomb, nj)>);
    goto L30(i32, r96);
  L148():
    r94 = dyn base13(<sym subclasses>, <lang rep.int(ncomb, nj)>);
    goto L30(i32, r94);
  L154():
    subclasses5 = force? subclasses4;
    checkMissing(subclasses5);
    st sigLabels = subclasses5;
    nj2 = ld nj;
    check L155() else D60();
  L156():
    _undefClasses = ld `.undefClasses`;
    check L158() else D61();
  L157():
    r105 = dyn base15(<sym .undefClasses>);
    goto L32(i38, r105);
  D29():
    deopt 101 [i7, r44];
  D30():
    deopt 102 [i21, r46, newSigs2];
  D31():
    deopt 106 [i23, r48];
  D55():
    deopt 196 [i37, ncomb];
  D60():
    deopt 212 [i32, nj2];
  D61():
    deopt 217 [i38, _undefClasses];
  L33():
    goto L34(i41);
  L34(i44):
    goto L27(i44);
  L100():
    goto L16(i7, r44);
  L103():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(i19, dx2);
  L104():
    newSigs3 = force? newSigs2;
    __2 = ldf `[` in base;
    r47 = dyn __2(r46, newSigs3);
    goto L17(i21, r47);
  L105():
    goto L15(i23, r48);
  L149():
    ncomb1 = force? ncomb;
    checkMissing(ncomb1);
    nj = ld nj;
    check L150() else D56();
  L155():
    nj3 = force? nj2;
    checkMissing(nj3);
    st ncomb = nj3;
    goto L31(i32);
  L158():
    _undefClasses1 = force? _undefClasses;
    checkMissing(_undefClasses1);
    length2 = ldf length in base;
    r107 = dyn length2(_undefClasses1);
    check L159() else D62();
  L160():
    warning = ldf warning;
    check L161() else D63();
  D56():
    deopt 197 [i37, ncomb1, nj];
  D62():
    deopt 220 [i38, r107];
  D63():
    deopt 222 [i41];
  L150():
    nj1 = force? nj;
    checkMissing(nj1);
    r97 = `*`(ncomb1, nj1);
    st ncomb = r97;
    paste = ldf paste;
    check L151() else D57();
  L159():
    goto L32(i38, r107);
  L161():
    p29 = prom<V +>{
      gettextf = ldf gettextf;
      p26 = prom<V +>{
        paste1 = ldf paste0;
        p25 = prom<V +>{
          unique1 = ldf unique;
          p24 = prom<V +>{
            _undefClasses2 = ld `.undefClasses`;
            _undefClasses3 = force? _undefClasses2;
            checkMissing(_undefClasses3);
            return _undefClasses3;
          };
          r109 = dyn unique1(p24);
          return r109;
        };
        r111 = dyn paste1[, , , collapse]("\"", p25, "\"", ", ");
        return r111;
      };
      p28 = prom<V +>{
        colnames1 = ldf colnames;
        p27 = prom<V +>{
          sigs14 = ld sigs;
          sigs15 = force? sigs14;
          checkMissing(sigs15);
          return sigs15;
        };
        r114 = dyn colnames1(p27);
        c15 = `is.object`(r114);
        if c15 then L1() else L2(r114);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[[", r114);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(r116):
        j6 = ld j;
        j7 = force? j6;
        __5 = ldf `[[` in base;
        r117 = dyn __5(r116, j7);
        goto L0(r117);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r119 = dyn gettextf("undefined classes (%s) will be ignored for argument '%s'", p26, p28);
      return r119;
    };
    r121 = dyn warning[, domain](p29, NA_LGL);
    check L162() else D64();
  D57():
    deopt 202 [i37];
  D64():
    deopt 226 [i41, r121];
  L151():
    p22 = prom<V +>{
      sym14 = ldf rep;
      base14 = ldf rep in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r99):
      return r99;
    L1():
      rep1 = ldf rep in base;
      r100 = dyn rep1(<sym sigLabels>, <sym nj>);
      goto L0(r100);
    L2():
      r98 = dyn base14[, times](<sym sigLabels>, <sym nj>);
      goto L0(r98);
    };
    p23 = prom<V +>{
      subclasses2 = ld subclasses;
      subclasses3 = force? subclasses2;
      checkMissing(subclasses3);
      return subclasses3;
    };
    r103 = dyn paste[, , sep](p22, p23, "#");
    check L152() else D58();
  L162():
    character1 = ldf character;
    check L163() else D65();
  D58():
    deopt 207 [i37, r103];
  D65():
    deopt 228 [i41];
  L152():
    st sigLabels = r103;
    goto L31(i37);
  L163():
    r122 = dyn character1();
    check L164() else D66();
  D66():
    deopt 229 [i41, r122];
  L164():
    st `.undefClasses` = r122;
    goto L34(i41);
  }
}
fun inner705497215(classes, excludeVirtual, where, doinheritance) {
  (reg classes:*, reg excludeVirtual:*, reg where:*, reg doinheritance:*) -+> V { var classes:*, var excludeVirtual:*, var where:*, var doinheritance:*, reg lapply:cls, reg classes1:*, reg classes2:V, reg p:p(V +), reg getClassDef:*, reg getClassDef1:V, reg p1:p(V +), reg where1:*, reg where2:V, reg p2:p(V +), reg r3:V, reg vapply:cls, reg classDefs:*, reg classDefs1:V, reg p3:p(V +), reg is_null:*, reg is_null1:V, reg p4:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg undefs:*, reg undefs1:V, reg any:cls, reg r9:V, reg c:L, reg unique:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg _undefClasses:*, reg _undefClasses1:V, reg classes3:*, reg classes4:V, reg c1:L, reg classes6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg undefs2:*, reg undefs3:V, reg __:cls, reg r12:V, reg c2:cls, reg r13:V, reg p5:p(V +), reg r15:V, reg classes7:*, reg classes8:V, reg c3:L, reg classes10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg undefs4:*, reg undefs5:V, reg r16:V, reg __1:cls, reg r17:V, reg classDefs2:*, reg classDefs3:V, reg c4:L, reg classDefs5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg undefs6:*, reg undefs7:V, reg r18:V, reg __2:cls, reg r19:V, reg doinheritance1:*, reg doinheritance2:V, reg c5:L, reg lapply1:cls, reg classDefs6:*, reg classDefs7:V, reg p6:p(V +), reg r21:cls, reg p7:p(V +), reg r23:V, reg unique1:cls, reg unlist:cls, reg allSubs:*, reg allSubs1:V, reg p8:p(V +), reg r25:V, reg p9:p(V +), reg r27:V, reg sapply:cls, reg allSubs2:*, reg allSubs3:V, reg p10:p(V +), reg _matchSubsPattern:*, reg _matchSubsPattern1:V, reg p11:p(V +), reg classes11:*, reg classes12:V, reg p12:p(V +), reg excludeVirtual1:*, reg excludeVirtual2:V, reg p13:p(V +), reg r32:V, reg excludeVirtual3:*, reg excludeVirtual4:V, reg c6:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg pattern:*, reg pattern1:V, reg nzchar:cls, reg r35:V, reg pattern2:*, reg pattern3:V, reg c7:L, reg pattern5:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg excl:*, reg excl1:V, reg __3:cls, reg r36:V, reg allSubs4:*, reg allSubs5:V, reg c8:L, reg allSubs7:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg excl2:*, reg excl3:V, reg __4:cls, reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg allSubs8:*, reg allSubs9:V, reg length:cls, reg r40:V, reg r41:V, reg c9:L, reg sapply1:cls, reg split:cls, reg allSubs10:*, reg allSubs11:V, reg p14:p(V +), reg pattern6:*, reg pattern7:V, reg p15:p(V +), reg r44:V, reg p16:p(V +), reg __5:*, reg __6:V, reg p17:p(V +), reg r47:V, reg r48:V, reg character:cls, reg r49:V, reg character1:cls, reg r51:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r52:V, reg r53:V, reg classes13:*, reg classes14:V, reg match:cls, reg r54:V, reg iAny:*, reg iAny1:V, reg r55:V, reg c10:L, reg l:*, reg c11:L, reg r57:S, reg l2:*, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg iAny2:*, reg iAny3:V, reg ____:cls, reg r60:V, reg getClassDef2:cls, reg r61:V, reg l3:*, reg c12:L, reg r63:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx14:V, reg r65:V, reg dx15:V, reg iAny4:*, reg iAny5:V, reg ____1:cls, reg r66:V, reg excludeVirtual5:*, reg excludeVirtual6:V, reg c13:L, reg classes15:*, reg classes16:V, reg c14:L, reg classes18:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg vapply1:cls, reg classDefs8:*, reg classDefs9:V, reg p18:p(V +), reg r69:cls, reg p19:p(V +), reg r71:V, reg __7:cls, reg r72:V, reg unique2:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r73:V, reg r74:V, reg classes19:*, reg classes20:V, reg allSubs12:*, reg allSubs13:V, reg c15:cls, reg r75:V, reg p20:p(V +), reg r77:V |
    mkenv;
    st classes = classes;
    st excludeVirtual = excludeVirtual;
    st where = where;
    st doinheritance = doinheritance;
    lapply = ldf lapply;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p = prom<V +>{
      classes1 = ld classes;
      classes2 = force? classes1;
      checkMissing(classes2);
      return classes2;
    };
    p1 = prom<V +>{
      getClassDef = ld getClassDef;
      getClassDef1 = force? getClassDef;
      checkMissing(getClassDef1);
      return getClassDef1;
    };
    p2 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r3 = dyn lapply(p, p1, p2);
    check L24() else D1();
  D1():
    deopt 5 [r3];
  L24():
    st classDefs = r3;
    vapply = ldf vapply;
    check L25() else D2();
  D2():
    deopt 8 [];
  L25():
    p3 = prom<V +>{
      classDefs = ld classDefs;
      classDefs1 = force? classDefs;
      checkMissing(classDefs1);
      return classDefs1;
    };
    p4 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r6 = dyn vapply(p3, p4, NA_LGL);
    check L26() else D3();
  D3():
    deopt 12 [r6];
  L26():
    st undefs = r6;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L0(r8):
    c = `as.logical`(r8);
    if c then L31() else L1();
  L27():
    undefs = ld undefs;
    check L29() else D4();
  L28():
    r7 = dyn base(<sym undefs>);
    goto L0(r7);
  D4():
    deopt 16 [undefs];
  L1():
    goto L4();
  L4():
    doinheritance1 = ld doinheritance;
    check L45() else D12();
  L29():
    undefs1 = force? undefs;
    checkMissing(undefs1);
    any = ldf any in base;
    r9 = dyn any(undefs1);
    check L30() else D5();
  L31():
    unique = ldf unique;
    check L32() else D6();
  D5():
    deopt 19 [r9];
  D6():
    deopt 21 [];
  D12():
    deopt 41 [doinheritance1];
  L30():
    goto L0(r9);
  L32():
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r11):
      return r11;
    L2():
      _undefClasses = ld `.undefClasses`;
      _undefClasses1 = force? _undefClasses;
      checkMissing(_undefClasses1);
      classes3 = ld classes;
      classes4 = force? classes3;
      checkMissing(classes4);
      c1 = `is.object`(classes4);
      if c1 then L4() else L5(classes4);
    L3():
      r10 = dyn base1(<sym .undefClasses>, <lang `[`(classes, undefs)>);
      goto L0(r10);
    L1(dx1):
      c2 = ldf c in base;
      r13 = dyn c2(_undefClasses1, dx1);
      goto L0(r13);
    L4():
      dr = tryDispatchBuiltin.1("[", classes4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(classes6):
      undefs2 = ld undefs;
      undefs3 = force? undefs2;
      __ = ldf `[` in base;
      r12 = dyn __(classes6, undefs3);
      goto L1(r12);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r15 = dyn unique(p5);
    check L33() else D7();
  L45():
    doinheritance2 = force? doinheritance1;
    checkMissing(doinheritance2);
    c5 = `as.logical`(doinheritance2);
    if c5 then L46() else L5();
  D7():
    deopt 23 [r15];
  L5():
    character1 = ldf character;
    check L81() else D32();
  L14():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L83() else L84();
  L33():
    sst `.undefClasses` = r15;
    classes7 = ld classes;
    check L34() else D8();
  L46():
    lapply1 = ldf lapply;
    check L47() else D13();
  D8():
    deopt 25 [classes7];
  D13():
    deopt 44 [];
  D32():
    deopt 105 [];
  L15(r53):
    st iAny = r53;
    iAny = ld iAny;
    check L87() else D36();
  L34():
    classes8 = force? classes7;
    checkMissing(classes8);
    c3 = `is.object`(classes8);
    if c3 then L35() else L36(classes8);
  L47():
    p6 = prom<V +>{
      classDefs6 = ld classDefs;
      classDefs7 = force? classDefs6;
      checkMissing(classDefs7);
      return classDefs7;
    };
    p7 = prom<V +>{
      r21 = clos inner2203017188;
      return r21;
    };
    r23 = dyn lapply1(p6, p7);
    check L48() else D14();
  L81():
    r51 = dyn character1();
    check L82() else D33();
  L83():
    classes13 = ld classes;
    check L85() else D34();
  L84():
    r52 = dyn base4("ANY", <sym classes>, 0);
    goto L15(r52);
  D14():
    deopt 47 [r23];
  D33():
    deopt 106 [r51];
  D34():
    deopt 111 [classes13];
  D36():
    deopt 118 [iAny];
  L2(dx3):
    st classes = dx3;
    classDefs2 = ld classDefs;
    check L39() else D10();
  L35():
    dr2 = tryDispatchBuiltin.1("[", classes8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L37() else L36(dr2);
  L36(classes10):
    undefs4 = ld undefs;
    check L38() else D9();
  L48():
    st allSubs = r23;
    unique1 = ldf unique;
    check L49() else D15();
  L82():
    st allSubs = r51;
    goto L14();
  L85():
    classes14 = force? classes13;
    checkMissing(classes14);
    match = ldf match in base;
    r54 = dyn match("ANY", classes14, 0, NULL);
    check L86() else D35();
  L87():
    iAny1 = force? iAny;
    checkMissing(iAny1);
    r55 = `>`(iAny1, 0);
    c10 = `as.logical`(r55);
    if c10 then L88() else L16();
  D9():
    deopt 27 [classes10, undefs4];
  D10():
    deopt 32 [classDefs2];
  D15():
    deopt 50 [];
  D35():
    deopt 116 [r54];
  L16():
    goto L19();
  L19():
    excludeVirtual5 = ld excludeVirtual;
    check L100() else D41();
  L37():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L38():
    undefs5 = force? undefs4;
    checkMissing(undefs5);
    r16 = `!`(undefs5);
    __1 = ldf `[` in base;
    r17 = dyn __1(classes10, r16);
    goto L2(r17);
  L39():
    classDefs3 = force? classDefs2;
    checkMissing(classDefs3);
    c4 = `is.object`(classDefs3);
    if c4 then L40() else L41(classDefs3);
  L49():
    p9 = prom<V +>{
      unlist = ldf unlist;
      p8 = prom<V +>{
        allSubs = ld allSubs;
        allSubs1 = force? allSubs;
        checkMissing(allSubs1);
        return allSubs1;
      };
      r25 = dyn unlist(p8);
      return r25;
    };
    r27 = dyn unique1(p9);
    check L50() else D16();
  L86():
    goto L15(r54);
  L88():
    l = ld classes;
    c11 = `is.object`(l);
    if c11 then L89() else L90(".Other", l);
  D16():
    deopt 52 [r27];
  D41():
    deopt 140 [excludeVirtual5];
  L3(dx5):
    st classDefs = dx5;
    goto L4();
  L17(dx13):
    st classes = dx13;
    getClassDef2 = ldf getClassDef;
    check L93() else D38();
  L40():
    dr4 = tryDispatchBuiltin.1("[", classDefs3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L42() else L41(dr4);
  L41(classDefs5):
    undefs6 = ld undefs;
    check L43() else D11();
  L50():
    st allSubs = r27;
    sapply = ldf sapply;
    check L51() else D17();
  L89():
    dr10 = tryDispatchBuiltin.0("[[<-", l, ".Other");
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L91() else L90(".Other", dr10);
  L90(r57, l2):
    iAny2 = ld iAny;
    check L92() else D37();
  L100():
    excludeVirtual6 = force? excludeVirtual5;
    checkMissing(excludeVirtual6);
    c13 = `as.logical`(excludeVirtual6);
    if c13 then L101() else L20();
  D11():
    deopt 34 [classDefs5, undefs6];
  D17():
    deopt 55 [];
  D37():
    deopt 125 [r57, l2, ".Other", iAny2];
  D38():
    deopt 130 [];
  L20():
    goto L22();
  L22():
    unique2 = ldf unique;
    check L109() else D45();
  L42():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L43():
    undefs7 = force? undefs6;
    checkMissing(undefs7);
    r18 = `!`(undefs7);
    __2 = ldf `[` in base;
    r19 = dyn __2(classDefs5, r18);
    goto L3(r19);
  L51():
    p10 = prom<V +>{
      allSubs2 = ld allSubs;
      allSubs3 = force? allSubs2;
      checkMissing(allSubs3);
      return allSubs3;
    };
    p11 = prom<V +>{
      _matchSubsPattern = ld `.matchSubsPattern`;
      _matchSubsPattern1 = force? _matchSubsPattern;
      checkMissing(_matchSubsPattern1);
      return _matchSubsPattern1;
    };
    p12 = prom<V +>{
      classes11 = ld classes;
      classes12 = force? classes11;
      checkMissing(classes12);
      return classes12;
    };
    p13 = prom<V +>{
      excludeVirtual1 = ld excludeVirtual;
      excludeVirtual2 = force? excludeVirtual1;
      checkMissing(excludeVirtual2);
      return excludeVirtual2;
    };
    r32 = dyn sapply(p10, p11, p12, p13);
    check L52() else D18();
  L91():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L17(dx12);
  L92():
    iAny3 = force? iAny2;
    ____ = ldf `[[<-` in base;
    r60 = dyn ____(l2, ".Other", iAny3);
    goto L17(r60);
  L93():
    r61 = dyn getClassDef2(".Other");
    check L94() else D39();
  L101():
    classes15 = ld classes;
    check L102() else D42();
  D18():
    deopt 60 [r32];
  D39():
    deopt 132 [r61];
  D42():
    deopt 142 [classes15];
  D45():
    deopt 155 [];
  L52():
    st pattern = r32;
    excludeVirtual3 = ld excludeVirtual;
    check L53() else D19();
  L94():
    l3 = ld classDefs;
    c12 = `is.object`(l3);
    if c12 then L95() else L96(r61, l3);
  L102():
    classes16 = force? classes15;
    checkMissing(classes16);
    c14 = `is.object`(classes16);
    if c14 then L103() else L104(classes16);
  L109():
    p20 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r74):
      return r74;
    L1():
      classes19 = ld classes;
      classes20 = force? classes19;
      checkMissing(classes20);
      allSubs12 = ld allSubs;
      allSubs13 = force? allSubs12;
      checkMissing(allSubs13);
      c15 = ldf c in base;
      r75 = dyn c15(classes20, allSubs13);
      goto L0(r75);
    L2():
      r73 = dyn base5(<sym classes>, <sym allSubs>);
      goto L0(r73);
    };
    r77 = dyn unique2(p20);
    check L110() else D46();
  D19():
    deopt 62 [excludeVirtual3];
  D46():
    deopt 157 [r77];
  L18(r65, dx15):
    st classDefs = dx15;
    goto L19();
  L21(dx17):
    st classes = dx17;
    goto L22();
  L53():
    excludeVirtual4 = force? excludeVirtual3;
    checkMissing(excludeVirtual4);
    c6 = `as.logical`(excludeVirtual4);
    if c6 then L54() else L6();
  L95():
    dr12 = tryDispatchBuiltin.0("[[<-", l3, r61);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L97() else L96(r61, dr12);
  L96(r63, l5):
    iAny4 = ld iAny;
    check L98() else D40();
  L103():
    dr14 = tryDispatchBuiltin.1("[", classes16);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L105() else L104(dr14);
  L104(classes18):
    vapply1 = ldf vapply;
    check L106() else D43();
  L110():
    popenv;
    return r77;
  D40():
    deopt 134 [r63, l5, r61, iAny4];
  D43():
    deopt 145 [classes18];
  L6():
    goto L10();
  L10():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L70() else L71();
  L54():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L55() else L56();
  L97():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L18(r61, dx14);
  L98():
    iAny5 = force? iAny4;
    ____1 = ldf `[[<-` in base;
    r66 = dyn ____1(l5, r61, iAny5);
    goto L18(r63, r66);
  L105():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L21(dx16);
  L106():
    p18 = prom<V +>{
      classDefs8 = ld classDefs;
      classDefs9 = force? classDefs8;
      checkMissing(classDefs9);
      return classDefs9;
    };
    p19 = prom<V +>{
      r69 = clos inner1317922881;
      return r69;
    };
    r71 = dyn vapply1(p18, p19, NA_LGL);
    check L107() else D44();
  D44():
    deopt 149 [classes18, r71];
  L7(r34):
    st excl = r34;
    pattern2 = ld pattern;
    check L59() else D22();
  L11(r39):
    r41 = `>`(r39, 0.0);
    c9 = `as.logical`(r41);
    if c9 then L74() else L12();
  L55():
    pattern = ld pattern;
    check L57() else D20();
  L56():
    r33 = dyn base2(<sym pattern>);
    goto L7(r33);
  L70():
    allSubs8 = ld allSubs;
    check L72() else D26();
  L71():
    r38 = dyn base3(<sym allSubs>);
    goto L11(r38);
  L107():
    __7 = ldf `[` in base;
    r72 = dyn __7(classes18, r71);
    goto L21(r72);
  D20():
    deopt 66 [pattern];
  D22():
    deopt 71 [pattern2];
  D26():
    deopt 87 [allSubs8];
  L12():
    character = ldf character;
    check L78() else D30();
  L13(r48):
    goto L14();
  L57():
    pattern1 = force? pattern;
    checkMissing(pattern1);
    nzchar = ldf nzchar in base;
    r35 = dyn nzchar(pattern1);
    check L58() else D21();
  L59():
    pattern3 = force? pattern2;
    checkMissing(pattern3);
    c7 = `is.object`(pattern3);
    if c7 then L60() else L61(pattern3);
  L72():
    allSubs9 = force? allSubs8;
    checkMissing(allSubs9);
    length = ldf length in base;
    r40 = dyn length(allSubs9);
    check L73() else D27();
  L74():
    sapply1 = ldf sapply;
    check L75() else D28();
  D21():
    deopt 69 [r35];
  D27():
    deopt 90 [r40];
  D28():
    deopt 94 [];
  D30():
    deopt 101 [];
  L8(dx8):
    st pattern = dx8;
    allSubs4 = ld allSubs;
    check L64() else D24();
  L58():
    goto L7(r35);
  L60():
    dr6 = tryDispatchBuiltin.1("[", pattern3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L62() else L61(dr6);
  L61(pattern5):
    excl = ld excl;
    check L63() else D23();
  L73():
    goto L11(r40);
  L75():
    p16 = prom<V +>{
      split = ldf split;
      p14 = prom<V +>{
        allSubs10 = ld allSubs;
        allSubs11 = force? allSubs10;
        checkMissing(allSubs11);
        return allSubs11;
      };
      p15 = prom<V +>{
        pattern6 = ld pattern;
        pattern7 = force? pattern6;
        checkMissing(pattern7);
        return pattern7;
      };
      r44 = dyn split(p14, p15);
      return r44;
    };
    p17 = prom<V +>{
      __5 = ld `[[`;
      __6 = force? __5;
      checkMissing(__6);
      return __6;
    };
    r47 = dyn sapply1(p16, p17, 1.0);
    check L76() else D29();
  L78():
    r49 = dyn character();
    check L79() else D31();
  D23():
    deopt 73 [pattern5, excl];
  D24():
    deopt 77 [allSubs4];
  D29():
    deopt 98 [r47];
  D31():
    deopt 102 [r49];
  L62():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx7);
  L63():
    excl1 = force? excl;
    __3 = ldf `[` in base;
    r36 = dyn __3(pattern5, excl1);
    goto L8(r36);
  L64():
    allSubs5 = force? allSubs4;
    checkMissing(allSubs5);
    c8 = `is.object`(allSubs5);
    if c8 then L65() else L66(allSubs5);
  L76():
    st allSubs = r47;
    goto L13(r47);
  L79():
    st allSubs = r49;
    goto L13(r49);
  L9(dx10):
    st allSubs = dx10;
    goto L10();
  L65():
    dr8 = tryDispatchBuiltin.1("[", allSubs5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L67() else L66(dr8);
  L66(allSubs7):
    excl2 = ld excl;
    check L68() else D25();
  D25():
    deopt 79 [allSubs7, excl2];
  L67():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L9(dx9);
  L68():
    excl3 = force? excl2;
    __4 = ldf `[` in base;
    r37 = dyn __4(allSubs7, excl3);
    goto L9(r37);
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg __:cls, reg r2:V, reg names:cls, reg r3:V |
    mkenv;
    st what = what;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    __ = ldf `@` in base;
    r2 = dyn __(<sym what>, <sym subclasses>);
    names = ldf names in base;
    r3 = dyn names(r2);
    check L3() else D0();
  L2():
    r = dyn base(<lang `@`(what, subclasses)>);
    goto L0(r);
  D0():
    deopt 5 [r3];
  L3():
    goto L0(r3);
  }
}
fun inner1317922881(def) {
  (reg def:*) -+> V { var def:*, reg isFALSE:cls, reg __:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st def = def;
    isFALSE = ldf isFALSE;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym def>, <sym virtual>);
      return r;
    };
    r2 = dyn isFALSE(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner913928130(cond) {
  (reg cond:*) -+> V { var cond:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ambig_target:*, reg ambig_target1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg cond1:*, reg cond2:V, reg attr:cls, reg r4:V, reg c:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg ambig_candidates:*, reg ambig_candidates1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r10:V, reg r11:V, reg cond3:*, reg cond4:V, reg attr1:cls, reg r12:V, reg list:cls, reg r13:V, reg c1:cls, reg r14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg r16:V, reg ambig_selected:*, reg ambig_selected1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r17:V, reg r18:V, reg cond5:*, reg cond6:V, reg attr2:cls, reg r19:V, reg c2:cls, reg r20:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r21:V, reg r22:V, reg ambig_note:*, reg ambig_note1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r23:V, reg r24:V, reg cond7:*, reg cond8:V, reg attr3:cls, reg r25:V, reg c3:cls, reg r26:V |
    mkenv;
    st cond = cond;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    sst ambig_target = r1;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L9():
    ambig_target = ld ambig_target;
    check L11() else D0();
  L10():
    r = dyn base(<sym ambig_target>, <lang attr(cond, "target")>);
    goto L0(r);
  D0():
    deopt 2 [ambig_target];
  L2(r7):
    sst ambig_candidates = r7;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L28() else L29();
  L11():
    ambig_target1 = force? ambig_target;
    checkMissing(ambig_target1);
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L17():
    ambig_candidates = ld ambig_candidates;
    check L19() else D4();
  L18():
    r6 = dyn base2(<sym ambig_candidates>, <lang list(attr(cond, "candidates"))>);
    goto L2(r6);
  D4():
    deopt 16 [ambig_candidates];
  L1(r3):
    c = ldf c in base;
    r5 = dyn c(ambig_target1, r3);
    check L16() else D3();
  L5(r16):
    sst ambig_selected = r16;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L36() else L37();
  L12():
    cond1 = ld cond;
    check L14() else D1();
  L13():
    r2 = dyn base1(<sym cond>, "target");
    goto L1(r2);
  L19():
    ambig_candidates1 = force? ambig_candidates;
    checkMissing(ambig_candidates1);
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L28():
    ambig_selected = ld ambig_selected;
    check L30() else D9();
  L29():
    r15 = dyn base5(<sym ambig_selected>, <lang attr(cond, "selected")>);
    goto L5(r15);
  D1():
    deopt 6 [cond1];
  D3():
    deopt 12 [r5];
  D9():
    deopt 34 [ambig_selected];
  L3(r9):
    c1 = ldf c in base;
    r14 = dyn c1(ambig_candidates1, r9);
    check L27() else D8();
  L7(r22):
    sst ambig_note = r22;
    invisible.0();
    popenv;
    return r22;
  L14():
    cond2 = force? cond1;
    checkMissing(cond2);
    attr = ldf attr in base;
    r4 = dyn attr(cond2, "target");
    check L15() else D2();
  L16():
    goto L0(r5);
  L20():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L22() else L23();
  L21():
    r8 = dyn base3(<lang attr(cond, "candidates")>);
    goto L3(r8);
  L30():
    ambig_selected1 = force? ambig_selected;
    checkMissing(ambig_selected1);
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L31() else L32();
  L36():
    ambig_note = ld ambig_note;
    check L38() else D13();
  L37():
    r21 = dyn base7(<sym ambig_note>, <lang attr(cond, "notes")>);
    goto L7(r21);
  D2():
    deopt 10 [r4];
  D8():
    deopt 30 [r14];
  D13():
    deopt 48 [ambig_note];
  L4(r11):
    list = ldf list in base;
    r13 = dyn list(r11);
    check L26() else D7();
  L6(r18):
    c2 = ldf c in base;
    r20 = dyn c2(ambig_selected1, r18);
    check L35() else D12();
  L15():
    goto L1(r4);
  L22():
    cond3 = ld cond;
    check L24() else D5();
  L23():
    r10 = dyn base4(<sym cond>, "candidates");
    goto L4(r10);
  L27():
    goto L2(r14);
  L31():
    cond5 = ld cond;
    check L33() else D10();
  L32():
    r17 = dyn base6(<sym cond>, "selected");
    goto L6(r17);
  L38():
    ambig_note1 = force? ambig_note;
    checkMissing(ambig_note1);
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L39() else L40();
  D5():
    deopt 22 [cond3];
  D7():
    deopt 28 [r13];
  D10():
    deopt 38 [cond5];
  D12():
    deopt 44 [r20];
  L8(r24):
    c3 = ldf c in base;
    r26 = dyn c3(ambig_note1, r24);
    check L43() else D16();
  L24():
    cond4 = force? cond3;
    checkMissing(cond4);
    attr1 = ldf attr in base;
    r12 = dyn attr1(cond4, "candidates");
    check L25() else D6();
  L26():
    goto L3(r13);
  L33():
    cond6 = force? cond5;
    checkMissing(cond6);
    attr2 = ldf attr in base;
    r19 = dyn attr2(cond6, "selected");
    check L34() else D11();
  L35():
    goto L5(r20);
  L39():
    cond7 = ld cond;
    check L41() else D14();
  L40():
    r23 = dyn base8(<sym cond>, "notes");
    goto L8(r23);
  D6():
    deopt 26 [r12];
  D11():
    deopt 42 [r19];
  D14():
    deopt 52 [cond7];
  D16():
    deopt 58 [r26];
  L25():
    goto L4(r12);
  L34():
    goto L6(r19);
  L41():
    cond8 = force? cond7;
    checkMissing(cond8);
    attr3 = ldf attr in base;
    r25 = dyn attr3(cond8, "notes");
    check L42() else D15();
  L43():
    goto L7(r26);
  D15():
    deopt 56 [r25];
  L42():
    goto L8(r25);
  }
}
fun inner2755828749(sig) {
  (reg sig:*) -+> V { var sig:*, reg selectMethod:cls, reg f:*, reg f1:V, reg p:p(V +), reg sig1:*, reg sig2:V, reg p1:p(V +), reg r2:V, reg is:cls, reg x:*, reg x1:V, reg p2:p(V +), reg r4:V, reg c:L, reg __:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg nsig:*, reg nsig1:V, reg length:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg r13:V, reg sig3:*, reg sig4:V, reg length1:cls, reg r14:V, reg r15:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg nsig2:*, reg nsig3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg rep:cls, reg r20:V, reg c2:cls, reg r21:V, reg nsig4:*, reg nsig5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg x2:*, reg x3:V, reg c3:V, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg sig5:*, reg sig6:V, reg length2:cls, reg r28:V, reg rep_len:cls, reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg sig7:*, reg sig8:V, reg length3:cls, reg r34:V, reg rep_len1:cls, reg r35:V |
    mkenv;
    st sig = sig;
    selectMethod = ldf selectMethod;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p1 = prom<V +>{
      sig1 = ld sig;
      sig2 = force? sig1;
      checkMissing(sig2);
      return sig2;
    };
    r2 = dyn selectMethod[f, , optional](p, p1, TRUE);
    check L13() else D1();
  D1():
    deopt 7 [r2];
  L13():
    st x = r2;
    is = ldf is;
    check L14() else D2();
  D2():
    deopt 10 [];
  L14():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r4 = dyn is(p2, "MethodDefinition");
    check L15() else D3();
  D3():
    deopt 13 [r4];
  L15():
    c = `as.logical`(r4);
    if c then L16() else L0();
  L0():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  L16():
    __ = ldf `@` in base;
    r5 = dyn __(<sym x>, <sym defined>);
    st nsig = r5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r7):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L6(r23):
    c4 = `as.logical`(r23);
    if c4 then L38() else L7();
  L17():
    nsig = ld nsig;
    check L19() else D4();
  L18():
    r6 = dyn base(<sym nsig>);
    goto L1(r6);
  L35():
    x2 = ld x;
    check L37() else D11();
  L36():
    r22 = dyn base4(<sym x>);
    goto L6(r22);
  D4():
    deopt 19 [nsig];
  D11():
    deopt 41 [x2];
  L2(r12, r13):
    r15 = `<`(r12, r13);
    c1 = `as.logical`(r15);
    if c1 then L25() else L3();
  L7():
    sym7 = ldf rep_len;
    base7 = ldf rep_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L47() else L48();
  L19():
    nsig1 = force? nsig;
    checkMissing(nsig1);
    length = ldf length in base;
    r8 = dyn length(nsig1);
    check L20() else D5();
  L21():
    sig3 = ld sig;
    check L23() else D6();
  L22():
    r11 = dyn base1(<sym sig>);
    goto L2(r7, r11);
  L37():
    x3 = force? x2;
    checkMissing(x3);
    c3 = `==`(x3, NULL);
    goto L6(c3);
  L38():
    sym5 = ldf rep_len;
    base5 = ldf rep_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  D5():
    deopt 22 [r8];
  D6():
    deopt 24 [r7, sig3];
  L3():
    nsig4 = ld nsig;
    check L33() else D10();
  L8(r25):
    popenv;
    return r25;
  L10(r31):
    popenv;
    return r31;
  L20():
    goto L1(r8);
  L23():
    sig4 = force? sig3;
    checkMissing(sig4);
    length1 = ldf length in base;
    r14 = dyn length1(sig4);
    check L24() else D7();
  L25():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L39():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L41() else L42();
  L40():
    r24 = dyn base5("<NONE>", <lang length(sig)>);
    goto L8(r24);
  L47():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L49() else L50();
  L48():
    r30 = dyn base7("ANY", <lang length(sig)>);
    goto L10(r30);
  D7():
    deopt 27 [r7, r14];
  D10():
    deopt 38 [nsig4];
  L4(r17):
    popenv;
    return r17;
  L9(r27):
    rep_len = ldf rep_len in base;
    r29 = dyn rep_len("<NONE>", r27);
    check L45() else D14();
  L11(r33):
    rep_len1 = ldf rep_len in base;
    r35 = dyn rep_len1("ANY", r33);
    check L53() else D17();
  L24():
    goto L2(r7, r14);
  L26():
    nsig2 = ld nsig;
    check L28() else D8();
  L27():
    r16 = dyn base2(<sym nsig>, <lang rep("ANY", `-`(length(sig), length(nsig)))>);
    goto L4(r16);
  L33():
    nsig5 = force? nsig4;
    checkMissing(nsig5);
    popenv;
    return nsig5;
  L41():
    sig5 = ld sig;
    check L43() else D12();
  L42():
    r26 = dyn base6(<sym sig>);
    goto L9(r26);
  L49():
    sig7 = ld sig;
    check L51() else D15();
  L50():
    r32 = dyn base8(<sym sig>);
    goto L11(r32);
  D8():
    deopt 31 [nsig2];
  D12():
    deopt 49 [sig5];
  D14():
    deopt 54 [r29];
  D15():
    deopt 60 [sig7];
  D17():
    deopt 65 [r35];
  L28():
    nsig3 = force? nsig2;
    checkMissing(nsig3);
    sym3 = ldf rep;
    base3 = ldf rep in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L43():
    sig6 = force? sig5;
    checkMissing(sig6);
    length2 = ldf length in base;
    r28 = dyn length2(sig6);
    check L44() else D13();
  L45():
    goto L8(r29);
  L51():
    sig8 = force? sig7;
    checkMissing(sig8);
    length3 = ldf length in base;
    r34 = dyn length3(sig8);
    check L52() else D16();
  L53():
    goto L10(r35);
  D13():
    deopt 52 [r28];
  D16():
    deopt 63 [r34];
  L5(r19):
    c2 = ldf c in base;
    r21 = dyn c2(nsig3, r19);
    check L31() else D9();
  L29():
    rep = ldf rep in base;
    r20 = dyn rep("ANY", <lang `-`(length(sig), length(nsig))>);
    goto L5(r20);
  L30():
    r18 = dyn base3("ANY", <lang `-`(length(sig), length(nsig))>);
    goto L5(r18);
  L44():
    goto L9(r28);
  L52():
    goto L11(r34);
  D9():
    deopt 37 [r21];
  L31():
    goto L4(r21);
  }
}