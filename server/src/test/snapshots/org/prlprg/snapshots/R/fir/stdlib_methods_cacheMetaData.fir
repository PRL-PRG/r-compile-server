fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner487625076;
    st cacheMetaData = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner487625076(where, attach, searchWhere, doCheck) {
  (reg where:*, reg attach:*, reg searchWhere:*, reg doCheck:*) -+> V { var where:*, var attach:*, reg attach_isMissing:L, reg attach_orDefault:*, var searchWhere:*, reg searchWhere_isMissing:L, reg searchWhere_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r2:V, reg p:p(V +), var doCheck:*, reg doCheck_isMissing:L, reg doCheck_orDefault:*, reg getPackageName:cls, reg where3:*, reg where4:V, reg p1:p(V +), reg r5:V, reg getClasses:cls, reg where5:*, reg where6:V, reg p2:p(V +), reg r7:V, reg attach1:*, reg attach2:V, reg c:L, reg Sys_getenv:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg msg:*, reg msg1:V, reg nzchar:cls, reg r11:V, reg c1:L, reg _in_:cls, reg pkg:*, reg pkg1:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg c2:cls, reg r15:V, reg p4:p(V +), reg r17:V, reg c3:L, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg msg2:*, reg msg3:V, reg as_integer:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg lev:*, reg lev1:V, reg is_na:cls, reg r24:V, reg c4:L, reg classes:*, reg classes1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg lev2:*, reg lev3:V, reg r26:V, reg c6:L, reg message:cls, reg sQuote:cls, reg cl:*, reg cl1:V, reg p5:p(V +), reg r28:V, reg p6:p(V +), reg r30:V, reg i7:I, reg get:cls, reg classMetaName:cls, reg cl2:*, reg cl3:V, reg p7:p(V +), reg r33:V, reg p8:p(V +), reg where7:*, reg where8:V, reg p9:p(V +), reg r36:V, reg is:cls, reg cldef:*, reg cldef1:V, reg p10:p(V +), reg r38:V, reg c7:L, reg _cacheClass:cls, reg cl4:*, reg cl5:V, reg p11:p(V +), reg cldef2:*, reg cldef3:V, reg p12:p(V +), reg is1:cls, reg cldef4:*, reg cldef5:V, reg p13:p(V +), reg r42:V, reg p14:p(V +), reg where9:*, reg where10:V, reg p15:p(V +), reg r45:V, reg i10:I, reg lev4:*, reg lev5:V, reg r47:V, reg c8:L, reg message1:cls, reg sQuote1:cls, reg cl6:*, reg cl7:V, reg p16:p(V +), reg r49:V, reg p17:p(V +), reg r51:V, reg i13:I, reg classes2:*, reg classes3:V, reg s1:V, reg l1:I, reg i15:I, reg i16:I, reg i17:I, reg c9:L, reg x1:V, reg getClassDef:cls, reg cl8:*, reg cl9:V, reg p18:p(V +), reg searchWhere1:*, reg searchWhere2:V, reg p19:p(V +), reg r55:V, reg is2:cls, reg cldef6:*, reg cldef7:V, reg p20:p(V +), reg r57:V, reg c10:L, reg i21:I, reg c12:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg i24:I, reg c15:L, reg r59:V, reg __:cls, reg r60:V, reg pkg2:*, reg pkg3:V, reg identical:cls, reg r61:V, reg c16:L, reg c17:V, reg c19:L, reg _uncacheClass:cls, reg cl10:*, reg cl11:V, reg p21:p(V +), reg cldef8:*, reg cldef9:V, reg p22:p(V +), reg r64:V, reg _removeSuperclassBackRefs:cls, reg cl12:*, reg cl13:V, reg p23:p(V +), reg cldef10:*, reg cldef11:V, reg p24:p(V +), reg searchWhere3:*, reg searchWhere4:V, reg p25:p(V +), reg r68:V, reg is3:cls, reg cldef12:*, reg cldef13:V, reg p26:p(V +), reg r70:V, reg c20:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r71:V, reg i32:I, reg r72:V, reg __1:cls, reg r73:V, reg names:cls, reg r74:V, reg subclasses:*, reg subclasses1:V, reg s2:V, reg l2:I, reg i33:I, reg i34:I, reg i35:I, reg i36:I, reg c21:L, reg x2:V, reg _removeSuperClass:cls, reg subclass:*, reg subclass1:V, reg p27:p(V +), reg cl14:*, reg cl15:V, reg p28:p(V +), reg r77:V, reg i41:I, reg i42:V, reg i43:I, reg _getGenerics:cls, reg where11:*, reg where12:V, reg p29:p(V +), reg r79:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r80:V, reg r81:V, reg generics:*, reg generics1:V, reg attr:cls, reg r82:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r83:V, reg r84:V, reg packages:*, reg packages1:V, reg length:cls, reg r85:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r88:V, reg r89:V, reg r90:V, reg generics2:*, reg generics3:V, reg length1:cls, reg r91:V, reg r92:V, reg c22:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r93:V, reg r94:V, reg rep:cls, reg r95:V, reg attach3:*, reg attach4:V, reg c23:L, reg c25:V, reg exists:cls, reg where13:*, reg where14:V, reg p30:p(V +), reg r98:V, reg c26:L, reg c27:V, reg c29:L, reg get1:cls, reg where15:*, reg where16:V, reg p31:p(V +), reg r100:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r101:V, reg r102:V, reg generics4:*, reg generics5:V, reg others:*, reg others1:V, reg c30:cls, reg r103:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r104:V, reg r105:V, reg packages2:*, reg packages3:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r106:V, reg r107:V, reg others2:*, reg others3:V, reg attr1:cls, reg r108:V, reg c31:cls, reg r109:V, reg duplicated:cls, reg generics6:*, reg generics7:V, reg p32:p(V +), reg r112:V, reg duplicated1:cls, reg packages4:*, reg packages5:V, reg p33:p(V +), reg r114:V, reg r115:V, reg generics8:*, reg generics9:V, reg c32:L, reg generics11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dups:*, reg dups1:V, reg r116:V, reg __2:cls, reg r117:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r118:V, reg r119:V, reg generics12:*, reg generics13:V, reg r120:I, reg s3:V, reg l3:I, reg i45:I, reg i46:I, reg i47:I, reg c33:L, reg x3:V, reg generics14:*, reg generics15:V, reg c34:L, reg i51:I, reg generics17:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i53:I, reg dx3:V, reg i54:*, reg i55:V, reg __3:cls, reg r121:V, reg packages6:*, reg packages7:V, reg c35:L, reg i57:I, reg packages9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i59:I, reg dx5:V, reg i60:*, reg i61:V, reg __4:cls, reg r122:V, reg attach5:*, reg attach6:V, reg c36:L, reg i63:I, reg c38:V, reg lev6:*, reg lev7:V, reg r123:V, reg c39:L, reg i64:I, reg c40:L, reg c41:V, reg lev8:*, reg lev9:V, reg r124:V, reg c44:L, reg c45:V, reg c48:L, reg c49:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r125:V, reg i70:I, reg r126:V, reg fpkg:*, reg fpkg1:V, reg pkg4:*, reg pkg5:V, reg identical1:cls, reg r127:V, reg r128:V, reg c51:L, reg i72:I, reg c53:V, reg doCheck1:*, reg doCheck2:V, reg c54:L, reg c55:V, reg c57:L, reg _tr:*, reg _tr1:V, reg c58:L, reg message2:cls, reg sQuote2:cls, reg f:*, reg f1:V, reg p34:p(V +), reg r130:V, reg p35:p(V +), reg r132:V, reg i78:I, reg attach7:*, reg attach8:V, reg c59:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r134:V, reg i83:I, reg r135:V, reg where17:*, reg where18:V, reg as_environment1:cls, reg r136:V, reg exists1:cls, reg f2:*, reg f3:V, reg p36:p(V +), reg env:*, reg env1:V, reg p37:p(V +), reg r139:V, reg c60:L, reg get2:cls, reg f4:*, reg f5:V, reg p38:p(V +), reg env2:*, reg env3:V, reg p39:p(V +), reg r142:V, reg _genericOrImplicit:cls, reg f6:*, reg f7:V, reg p40:p(V +), reg fpkg2:*, reg fpkg3:V, reg p41:p(V +), reg env4:*, reg env5:V, reg p42:p(V +), reg r146:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r147:V, reg i88:I, reg r148:V, reg def:*, reg def1:V, reg is_function:cls, reg r149:V, reg c61:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r150:V, reg i93:I, reg r151:V, reg environment:cls, reg def2:*, reg def3:V, reg p43:p(V +), reg r153:V, reg environment1:cls, reg fdef:*, reg fdef1:V, reg p44:p(V +), reg r155:V, reg identical2:cls, reg r156:V, reg c62:L, reg i97:I, reg r157:V, reg is4:cls, reg fdef2:*, reg fdef3:V, reg p45:p(V +), reg r159:V, reg c63:L, reg _assignOverBinding:cls, reg f8:*, reg f9:V, reg p46:p(V +), reg fdef4:*, reg fdef5:V, reg p47:p(V +), reg env6:*, reg env7:V, reg p48:p(V +), reg r163:V, reg i100:I, reg r164:V, reg i101:I, reg r165:V, reg getGeneric:cls, reg f10:*, reg f11:V, reg p49:p(V +), reg searchWhere5:*, reg searchWhere6:V, reg p50:p(V +), reg fpkg4:*, reg fpkg5:V, reg p51:p(V +), reg r169:V, reg i102:I, reg r170:V, reg getGeneric1:cls, reg f12:*, reg f13:V, reg p52:p(V +), reg searchWhere7:*, reg searchWhere8:V, reg p53:p(V +), reg fpkg6:*, reg fpkg7:V, reg p54:p(V +), reg r174:V, reg i103:I, reg getGeneric2:cls, reg f14:*, reg f15:V, reg p55:p(V +), reg searchWhere9:*, reg searchWhere10:V, reg p56:p(V +), reg fpkg8:*, reg fpkg9:V, reg p57:p(V +), reg r179:V, reg is5:cls, reg fdef6:*, reg fdef7:V, reg p58:p(V +), reg r181:V, reg r182:V, reg c64:L, reg attach9:*, reg attach10:V, reg c65:L, reg _cacheGeneric:cls, reg f16:*, reg f17:V, reg p59:p(V +), reg fdef8:*, reg fdef9:V, reg p60:p(V +), reg r186:V, reg i110:I, reg _uncacheGeneric:cls, reg f18:*, reg f19:V, reg p61:p(V +), reg fdef10:*, reg fdef11:V, reg p62:p(V +), reg r190:V, reg _updateMethodsInTable:cls, reg fdef12:*, reg fdef13:V, reg p63:p(V +), reg where19:*, reg where20:V, reg p64:p(V +), reg attach11:*, reg attach12:V, reg p65:p(V +), reg r194:V, reg cacheGenericsMetaData:cls, reg f20:*, reg f21:V, reg p66:p(V +), reg fdef14:*, reg fdef15:V, reg p67:p(V +), reg attach13:*, reg attach14:V, reg p68:p(V +), reg where21:*, reg where22:V, reg p69:p(V +), reg __5:cls, reg r199:V, reg p70:p(V +), reg methods:*, reg methods1:V, reg p71:p(V +), reg r202:V, reg _tr2:*, reg _tr3:V, reg c66:L, reg message3:cls, reg sQuote3:cls, reg f22:*, reg f23:V, reg p72:p(V +), reg r204:V, reg p73:p(V +), reg r206:V, reg i113:I, reg _doLoadActions:cls, reg where23:*, reg where24:V, reg p74:p(V +), reg attach15:*, reg attach16:V, reg p75:p(V +), reg r210:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r211:V, reg r212:V, reg invisible:cls, reg r213:V |
    mkenv;
    st where = where;
    attach_isMissing = missing.0(attach);
    if attach_isMissing then L0(TRUE) else L0(attach);
  L0(attach_orDefault):
    st attach = attach_orDefault;
    searchWhere_isMissing = missing.0(searchWhere);
    if searchWhere_isMissing then L1() else L2(searchWhere);
  L1():
    p = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      as_environment = ldf `as.environment` in base;
      r2 = dyn as_environment(where2);
      goto L0(r2);
    L2():
      r = dyn base(<sym where>);
      goto L0(r);
    };
    goto L2(p);
  L2(searchWhere_orDefault):
    st searchWhere = searchWhere_orDefault;
    doCheck_isMissing = missing.0(doCheck);
    if doCheck_isMissing then L3(TRUE) else L3(doCheck);
  L3(doCheck_orDefault):
    st doCheck = doCheck_orDefault;
    getPackageName = ldf getPackageName;
    check L78() else D0();
  D0():
    deopt 1 [];
  L78():
    p1 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r5 = dyn getPackageName(p1);
    check L79() else D1();
  D1():
    deopt 3 [r5];
  L79():
    st pkg = r5;
    getClasses = ldf getClasses;
    check L80() else D2();
  D2():
    deopt 6 [];
  L80():
    p2 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r7 = dyn getClasses(p2);
    check L81() else D3();
  D3():
    deopt 8 [r7];
  L81():
    st classes = r7;
    st lev = 0;
    attach1 = ld attach;
    check L82() else D4();
  D4():
    deopt 13 [attach1];
  L82():
    attach2 = force? attach1;
    checkMissing(attach2);
    c = `as.logical`(attach2);
    if c then L83() else L4();
  L4():
    classes2 = ld classes;
    check L127() else D28();
  L21():
    _getGenerics = ldf `.getGenerics`;
    check L156() else D45();
  L83():
    Sys_getenv = ldf `Sys.getenv`;
    check L84() else D5();
  D5():
    deopt 16 [];
  D28():
    deopt 102 [classes2];
  D45():
    deopt 172 [];
  L84():
    r8 = dyn Sys_getenv("_R_TRACE_LOADNAMESPACE_", "");
    check L85() else D6();
  L127():
    classes3 = force? classes2;
    checkMissing(classes3);
    s1 = toForSeq(classes3);
    l1 = length(s1);
    i15 = 0;
    goto L22(i15);
  L156():
    p29 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r79 = dyn _getGenerics(p29);
    check L157() else D46();
  D6():
    deopt 19 [r8];
  D46():
    deopt 174 [r79];
  L22(i16):
    i17 = `+`.1(i16, 1);
    c9 = `<`.1(l1, i17);
    if c9 then L128() else L32();
  L85():
    st msg = r8;
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L86() else L87();
  L157():
    st generics = r79;
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L158() else L159();
  L5(r10):
    c1 = `as.logical`(r10);
    if c1 then L90() else L6();
  L32():
    x1 = `[[`(s1, i17, NULL, TRUE);
    st cl = x1;
    getClassDef = ldf getClassDef;
    check L129() else D29();
  L33(r81):
    st packages = r81;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L162() else L163();
  L86():
    msg = ld msg;
    check L88() else D7();
  L87():
    r9 = dyn base1(<sym msg>);
    goto L5(r9);
  L128():
    goto L21();
  L158():
    generics = ld generics;
    check L160() else D47();
  L159():
    r80 = dyn base7(<sym generics>, "package");
    goto L33(r80);
  D7():
    deopt 23 [msg];
  D29():
    deopt 105 [i17];
  D47():
    deopt 178 [generics];
  L6():
    goto L12();
  L12():
    classes = ld classes;
    check L106() else D15();
  L34(r84):
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L166() else L167();
  L88():
    msg1 = force? msg;
    checkMissing(msg1);
    nzchar = ldf nzchar in base;
    r11 = dyn nzchar(msg1);
    check L89() else D8();
  L90():
    _in_ = ldf `%in%`;
    check L91() else D9();
  L129():
    p18 = prom<V +>{
      cl8 = ld cl;
      cl9 = force? cl8;
      checkMissing(cl9);
      return cl9;
    };
    p19 = prom<V +>{
      searchWhere1 = ld searchWhere;
      searchWhere2 = force? searchWhere1;
      checkMissing(searchWhere2);
      return searchWhere2;
    };
    r55 = dyn getClassDef(p18, p19);
    check L130() else D30();
  L160():
    generics1 = force? generics;
    checkMissing(generics1);
    attr = ldf attr in base;
    r82 = dyn attr(generics1, "package");
    check L161() else D48();
  L162():
    packages = ld packages;
    check L164() else D49();
  L163():
    r83 = dyn base8(<sym packages>);
    goto L34(r83);
  D8():
    deopt 26 [r11];
  D9():
    deopt 28 [];
  D15():
    deopt 55 [classes];
  D30():
    deopt 108 [i17, r55];
  D48():
    deopt 182 [r82];
  D49():
    deopt 186 [packages];
  L35(r89, r90):
    r92 = `<`(r89, r90);
    c22 = `as.logical`(r92);
    if c22 then L170() else L36();
  L89():
    goto L5(r11);
  L91():
    p3 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c2 = ldf c in base;
      r15 = dyn c2("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "splines", "stats4", "tcltk", "compiler", "parallel");
      goto L0(r15);
    L2():
      r13 = dyn base2("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "splines", "stats4", "tcltk", "compiler", "parallel");
      goto L0(r13);
    };
    r17 = dyn _in_(p3, p4);
    check L92() else D10();
  L106():
    classes1 = force? classes;
    checkMissing(classes1);
    s = toForSeq(classes1);
    l = length(s);
    i = 0;
    goto L13(i);
  L130():
    st cldef = r55;
    is2 = ldf is;
    check L131() else D31();
  L161():
    goto L33(r82);
  L164():
    packages1 = force? packages;
    checkMissing(packages1);
    length = ldf length in base;
    r85 = dyn length(packages1);
    check L165() else D50();
  L166():
    generics2 = ld generics;
    check L168() else D51();
  L167():
    r88 = dyn base9(<sym generics>);
    goto L35(r84, r88);
  D10():
    deopt 31 [r17];
  D31():
    deopt 111 [i17];
  D50():
    deopt 189 [r85];
  D51():
    deopt 191 [r84, generics2];
  L13(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L107() else L20();
  L36():
    goto L38();
  L38():
    attach3 = ld attach;
    check L174() else D53();
  L92():
    c3 = `as.logical`(r17);
    if c3 then L93() else L7();
  L131():
    p20 = prom<V +>{
      cldef6 = ld cldef;
      cldef7 = force? cldef6;
      checkMissing(cldef7);
      return cldef7;
    };
    r57 = dyn is2(p20, "classRepresentation");
    check L132() else D32();
  L165():
    goto L34(r85);
  L168():
    generics3 = force? generics2;
    checkMissing(generics3);
    length1 = ldf length in base;
    r91 = dyn length1(generics3);
    check L169() else D52();
  L170():
    sym10 = ldf rep;
    base10 = ldf rep in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L171() else L172();
  D32():
    deopt 114 [i17, r57];
  D52():
    deopt 194 [r84, r91];
  D53():
    deopt 202 [attach3];
  L7():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L95() else L96();
  L8(r18):
    goto L12();
  L20():
    x = `[[`(s, i2, NULL, TRUE);
    st cl = x;
    lev2 = ld lev;
    check L108() else D16();
  L37(r94):
    st packages = r94;
    goto L38();
  L93():
    st lev = 0;
    goto L8(0);
  L107():
    goto L21();
  L132():
    c10 = `as.logical`(r57);
    if c10 then L133() else L23(i17, c10);
  L169():
    goto L35(r84, r91);
  L171():
    rep = ldf rep in base;
    r95 = dyn rep(<sym packages>, <lang length(generics)>);
    goto L37(r95);
  L172():
    r93 = dyn base10[, `length.out`](<sym packages>, <lang length(generics)>);
    goto L37(r93);
  L174():
    attach4 = force? attach3;
    checkMissing(attach4);
    c23 = `as.logical`(attach4);
    if c23 then L175() else L39(c23);
  D16():
    deopt 57 [i2, lev2];
  L9(r20):
    st lev = r20;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L99() else L100();
  L23(i21, c12):
    c19 = `as.logical`(c12);
    if c19 then L139() else L25();
  L39(c25):
    c29 = `as.logical`(c25);
    if c29 then L179() else L40();
  L95():
    msg2 = ld msg;
    check L97() else D11();
  L96():
    r19 = dyn base3(<sym msg>);
    goto L9(r19);
  L108():
    lev3 = force? lev2;
    checkMissing(lev3);
    r26 = `>`(lev3, 2);
    c6 = `as.logical`(r26);
    if c6 then L109() else L14();
  L133():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L134() else L135();
  L175():
    exists = ldf exists;
    check L176() else D54();
  D11():
    deopt 37 [msg2];
  D54():
    deopt 205 [c23];
  L10(r23):
    c4 = `as.logical`(r23);
    if c4 then L103() else L11();
  L14():
    goto L15(i2);
  L15(i7):
    get = ldf get;
    check L113() else D19();
  L24(i24, c15, r59):
    c16 = `as.logical`(r59);
    c17 = `&&`(c15, c16);
    goto L23(i24, c17);
  L25():
    goto L31(i21);
  L31(i43):
    goto L22(i43);
  L40():
    goto L44();
  L44():
    duplicated = ldf duplicated;
    check L196() else D65();
  L97():
    msg3 = force? msg2;
    checkMissing(msg3);
    as_integer = ldf `as.integer` in base;
    r21 = dyn as_integer(msg3);
    check L98() else D12();
  L99():
    lev = ld lev;
    check L101() else D13();
  L100():
    r22 = dyn base4(<sym lev>);
    goto L10(r22);
  L109():
    message = ldf message;
    check L110() else D17();
  L134():
    __ = ldf `@` in base;
    r60 = dyn __(<sym cldef>, <sym package>);
    pkg2 = ld pkg;
    check L136() else D33();
  L135():
    r58 = dyn base5(<lang `@`(cldef, package)>, <sym pkg>);
    goto L24(i17, c10, r58);
  L139():
    _uncacheClass = ldf `.uncacheClass`;
    check L140() else D35();
  L176():
    p30 = prom<V +>{
      where13 = ld where;
      where14 = force? where13;
      checkMissing(where14);
      return where14;
    };
    r98 = dyn exists[, , inherits](".requireCachedGenerics", p30, FALSE);
    check L177() else D55();
  L179():
    get1 = ldf get;
    check L180() else D56();
  D12():
    deopt 40 [r21];
  D13():
    deopt 44 [lev];
  D17():
    deopt 62 [i2];
  D19():
    deopt 69 [i7];
  D33():
    deopt 119 [i17, c10, pkg2];
  D35():
    deopt 132 [i21];
  D55():
    deopt 210 [c23, r98];
  D56():
    deopt 213 [];
  D65():
    deopt 244 [];
  L11():
    goto L8(NULL);
  L98():
    goto L9(r21);
  L101():
    lev1 = force? lev;
    checkMissing(lev1);
    is_na = ldf `is.na` in base;
    r24 = dyn is_na(lev1);
    check L102() else D14();
  L103():
    st lev = 0;
    goto L8(0);
  L110():
    p6 = prom<V +>{
      sQuote = ldf sQuote;
      p5 = prom<V +>{
        cl = ld cl;
        cl1 = force? cl;
        checkMissing(cl1);
        return cl1;
      };
      r28 = dyn sQuote(p5);
      return r28;
    };
    r30 = dyn message("--- caching class ", p6);
    check L111() else D18();
  L113():
    p8 = prom<V +>{
      classMetaName = ldf classMetaName;
      p7 = prom<V +>{
        cl2 = ld cl;
        cl3 = force? cl2;
        checkMissing(cl3);
        return cl3;
      };
      r33 = dyn classMetaName(p7);
      return r33;
    };
    p9 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r36 = dyn get(p8, p9);
    check L114() else D20();
  L136():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    identical = ldf identical in base;
    r61 = dyn identical(r60, pkg3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L137() else D34();
  L140():
    p21 = prom<V +>{
      cl10 = ld cl;
      cl11 = force? cl10;
      checkMissing(cl11);
      return cl11;
    };
    p22 = prom<V +>{
      cldef8 = ld cldef;
      cldef9 = force? cldef8;
      checkMissing(cldef9);
      return cldef9;
    };
    r64 = dyn _uncacheClass(p21, p22);
    check L141() else D36();
  L177():
    c26 = `as.logical`(r98);
    c27 = `&&`(c23, c26);
    goto L39(c27);
  L180():
    p31 = prom<V +>{
      where15 = ld where;
      where16 = force? where15;
      checkMissing(where16);
      return where16;
    };
    r100 = dyn get1(".requireCachedGenerics", p31);
    check L181() else D57();
  L196():
    p32 = prom<V +>{
      generics6 = ld generics;
      generics7 = force? generics6;
      checkMissing(generics7);
      return generics7;
    };
    r112 = dyn duplicated(p32);
    check L197() else D66();
  D14():
    deopt 47 [r24];
  D18():
    deopt 65 [i2, r30];
  D20():
    deopt 72 [i7, r36];
  D34():
    deopt 129 [i17, c10, r61];
  D36():
    deopt 135 [i21, r64];
  D57():
    deopt 216 [r100];
  D66():
    deopt 246 [r112];
  L102():
    goto L10(r24);
  L111():
    goto L15(i2);
  L114():
    st cldef = r36;
    is = ldf is;
    check L115() else D21();
  L137():
    goto L24(i17, c10, r61);
  L141():
    _removeSuperclassBackRefs = ldf `.removeSuperclassBackRefs`;
    check L142() else D37();
  L181():
    st others = r100;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L182() else L183();
  L197():
    duplicated1 = ldf duplicated;
    check L198() else D67();
  D21():
    deopt 75 [i7];
  D37():
    deopt 137 [i21];
  D67():
    deopt 247 [r112];
  L41(r102):
    st generics = r102;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L187() else L188();
  L115():
    p10 = prom<V +>{
      cldef = ld cldef;
      cldef1 = force? cldef;
      checkMissing(cldef1);
      return cldef1;
    };
    r38 = dyn is(p10, "classRepresentation");
    check L116() else D22();
  L142():
    p23 = prom<V +>{
      cl12 = ld cl;
      cl13 = force? cl12;
      checkMissing(cl13);
      return cl13;
    };
    p24 = prom<V +>{
      cldef10 = ld cldef;
      cldef11 = force? cldef10;
      checkMissing(cldef11);
      return cldef11;
    };
    p25 = prom<V +>{
      searchWhere3 = ld searchWhere;
      searchWhere4 = force? searchWhere3;
      checkMissing(searchWhere4);
      return searchWhere4;
    };
    r68 = dyn _removeSuperclassBackRefs(p23, p24, p25);
    check L143() else D38();
  L182():
    generics4 = ld generics;
    check L184() else D58();
  L183():
    r101 = dyn base11(<sym generics>, <sym others>);
    goto L41(r101);
  L198():
    p33 = prom<V +>{
      packages4 = ld packages;
      packages5 = force? packages4;
      checkMissing(packages5);
      return packages5;
    };
    r114 = dyn duplicated1(p33);
    check L199() else D68();
  D22():
    deopt 78 [i7, r38];
  D38():
    deopt 141 [i21, r68];
  D58():
    deopt 220 [generics4];
  D68():
    deopt 249 [r112, r114];
  L42(r105):
    st packages = r105;
    goto L44();
  L116():
    c7 = `as.logical`(r38);
    if c7 then L117() else L16();
  L143():
    is3 = ldf is;
    check L144() else D39();
  L184():
    generics5 = force? generics4;
    checkMissing(generics5);
    others = ld others;
    check L185() else D59();
  L187():
    packages2 = ld packages;
    check L189() else D61();
  L188():
    r104 = dyn base12(<sym packages>, <lang attr(others, "package")>);
    goto L42(r104);
  L199():
    r115 = `&&`(r112, r114);
    st dups = r115;
    generics8 = ld generics;
    check L200() else D69();
  D39():
    deopt 143 [i21];
  D59():
    deopt 222 [others];
  D61():
    deopt 229 [packages2];
  D69():
    deopt 252 [generics8];
  L16():
    goto L17(i7);
  L17(i10):
    lev4 = ld lev;
    check L121() else D25();
  L117():
    _cacheClass = ldf `.cacheClass`;
    check L118() else D23();
  L144():
    p26 = prom<V +>{
      cldef12 = ld cldef;
      cldef13 = force? cldef12;
      checkMissing(cldef13);
      return cldef13;
    };
    r70 = dyn is3(p26, "ClassUnionRepresentation");
    check L145() else D40();
  L185():
    others1 = force? others;
    checkMissing(others1);
    c30 = ldf c in base;
    r103 = dyn c30(generics5, others1);
    check L186() else D60();
  L189():
    packages3 = force? packages2;
    checkMissing(packages3);
    sym13 = ldf attr;
    base13 = ldf attr in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L190() else L191();
  L200():
    generics9 = force? generics8;
    checkMissing(generics9);
    c32 = `is.object`(generics9);
    if c32 then L201() else L202(generics9);
  D23():
    deopt 80 [i7];
  D25():
    deopt 88 [i10, lev4];
  D40():
    deopt 146 [i21, r70];
  D60():
    deopt 225 [r103];
  L43(r107):
    c31 = ldf c in base;
    r109 = dyn c31(packages3, r107);
    check L194() else D64();
  L45(dx1):
    st generics = dx1;
    sym14 = ldf seq_along;
    base14 = ldf seq_along in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L205() else L206();
  L118():
    p11 = prom<V +>{
      cl4 = ld cl;
      cl5 = force? cl4;
      checkMissing(cl5);
      return cl5;
    };
    p12 = prom<V +>{
      cldef2 = ld cldef;
      cldef3 = force? cldef2;
      checkMissing(cldef3);
      return cldef3;
    };
    p14 = prom<V +>{
      is1 = ldf is;
      p13 = prom<V +>{
        cldef4 = ld cldef;
        cldef5 = force? cldef4;
        checkMissing(cldef5);
        return cldef5;
      };
      r42 = dyn is1(p13, "ClassUnionRepresentation");
      return r42;
    };
    p15 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r45 = dyn _cacheClass(p11, p12, p14, p15);
    check L119() else D24();
  L121():
    lev5 = force? lev4;
    checkMissing(lev5);
    r47 = `>`(lev5, 2);
    c8 = `as.logical`(r47);
    if c8 then L122() else L18();
  L145():
    c20 = `as.logical`(r70);
    if c20 then L146() else L26();
  L186():
    goto L41(r103);
  L190():
    others2 = ld others;
    check L192() else D62();
  L191():
    r106 = dyn base13(<sym others>, "package");
    goto L43(r106);
  L201():
    dr = tryDispatchBuiltin.1("[", generics9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L203() else L202(dr);
  L202(generics11):
    dups = ld dups;
    check L204() else D70();
  D24():
    deopt 85 [i7, r45];
  D62():
    deopt 233 [others2];
  D64():
    deopt 239 [r109];
  D70():
    deopt 254 [generics11, dups];
  L18():
    goto L19(i10);
  L19(i13):
    goto L13(i13);
  L26():
    goto L30(i21, NULL);
  L30(i41, i42):
    goto L31(i41);
  L46(r119):
    s3 = toForSeq(r119);
    l3 = length(s3);
    i45 = 0;
    goto L47(i45);
  L119():
    goto L17(i7);
  L122():
    message1 = ldf message;
    check L123() else D26();
  L146():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L147() else L148();
  L192():
    others3 = force? others2;
    checkMissing(others3);
    attr1 = ldf attr in base;
    r108 = dyn attr1(others3, "package");
    check L193() else D63();
  L194():
    goto L42(r109);
  L203():
    dx = getTryDispatchBuiltinValue(dr);
    goto L45(dx);
  L204():
    dups1 = force? dups;
    checkMissing(dups1);
    r116 = `!`(dups1);
    __2 = ldf `[` in base;
    r117 = dyn __2(generics11, r116);
    goto L45(r117);
  L205():
    generics12 = ld generics;
    check L207() else D71();
  L206():
    r118 = dyn base14(<sym generics>);
    goto L46(r118);
  D26():
    deopt 93 [i10];
  D63():
    deopt 237 [r108];
  D71():
    deopt 260 [generics12];
  L27(i32, r72):
    st subclasses = r72;
    subclasses = ld subclasses;
    check L150() else D42();
  L47(i46):
    i47 = `+`.1(i46, 1);
    c33 = `<`.1(l3, i47);
    if c33 then L208() else L76();
  L123():
    p17 = prom<V +>{
      sQuote1 = ldf sQuote;
      p16 = prom<V +>{
        cl6 = ld cl;
        cl7 = force? cl6;
        checkMissing(cl7);
        return cl7;
      };
      r49 = dyn sQuote1(p16);
      return r49;
    };
    r51 = dyn message1("--- done caching class ", p17);
    check L124() else D27();
  L147():
    __1 = ldf `@` in base;
    r73 = dyn __1(<sym cldef>, <sym subclasses>);
    names = ldf names in base;
    r74 = dyn names(r73);
    check L149() else D41();
  L148():
    r71 = dyn base6(<lang `@`(cldef, subclasses)>);
    goto L27(i21, r71);
  L193():
    goto L43(r108);
  L207():
    generics13 = force? generics12;
    checkMissing(generics13);
    r120 = seq_along(generics13);
    goto L46(r120);
  D27():
    deopt 96 [i10, r51];
  D41():
    deopt 152 [i21, r74];
  D42():
    deopt 154 [i32, subclasses];
  L76():
    x3 = `[[`(s3, i47, NULL, TRUE);
    st i = x3;
    generics14 = ld generics;
    check L209() else D72();
  L124():
    goto L19(i10);
  L149():
    goto L27(i21, r74);
  L150():
    subclasses1 = force? subclasses;
    checkMissing(subclasses1);
    s2 = toForSeq(subclasses1);
    l2 = length(s2);
    i33 = 0;
    goto L28(i32, i33);
  L208():
    _doLoadActions = ldf `.doLoadActions`;
    check L305() else D126();
  D72():
    deopt 263 [i47, generics14];
  D126():
    deopt 466 [];
  L28(i34, i35):
    i36 = `+`.1(i35, 1);
    c21 = `<`.1(l2, i36);
    if c21 then L151() else L29();
  L209():
    generics15 = force? generics14;
    checkMissing(generics15);
    c34 = `is.object`(generics15);
    if c34 then L210() else L211(i47, generics15);
  L305():
    p74 = prom<V +>{
      where23 = ld where;
      where24 = force? where23;
      checkMissing(where24);
      return where24;
    };
    p75 = prom<V +>{
      attach15 = ld attach;
      attach16 = force? attach15;
      checkMissing(attach16);
      return attach16;
    };
    r210 = dyn _doLoadActions(p74, p75);
    check L306() else D127();
  D127():
    deopt 469 [r210];
  L29():
    x2 = `[[`(s2, i36, NULL, TRUE);
    st subclass = x2;
    _removeSuperClass = ldf `.removeSuperClass`;
    check L152() else D43();
  L48(i53, dx3):
    st f = dx3;
    packages6 = ld packages;
    check L214() else D74();
  L151():
    goto L30(i34, i36);
  L210():
    dr2 = tryDispatchBuiltin.1("[[", generics15);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L212() else L211(i47, dr2);
  L211(i51, generics17):
    i54 = ld i;
    check L213() else D73();
  L306():
    sym19 = ldf invisible;
    base19 = ldf invisible in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L307() else L308();
  D43():
    deopt 157 [i34, i36];
  D73():
    deopt 265 [i51, generics17, i54];
  D74():
    deopt 269 [i53, packages6];
  L77(r212):
    popenv;
    return r212;
  L152():
    p27 = prom<V +>{
      subclass = ld subclass;
      subclass1 = force? subclass;
      checkMissing(subclass1);
      return subclass1;
    };
    p28 = prom<V +>{
      cl14 = ld cl;
      cl15 = force? cl14;
      checkMissing(cl15);
      return cl15;
    };
    r77 = dyn _removeSuperClass(p27, p28);
    check L153() else D44();
  L212():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L48(i47, dx2);
  L213():
    i55 = force? i54;
    __3 = ldf `[[` in base;
    r121 = dyn __3(generics17, i55);
    goto L48(i51, r121);
  L214():
    packages7 = force? packages6;
    checkMissing(packages7);
    c35 = `is.object`(packages7);
    if c35 then L215() else L216(i53, packages7);
  L307():
    invisible = ldf invisible in base;
    r213 = dyn invisible(NULL);
    check L309() else D128();
  L308():
    r211 = dyn base19(NULL);
    goto L77(r211);
  D44():
    deopt 160 [i34, i36, r77];
  D128():
    deopt 474 [r213];
  L49(i59, dx5):
    st fpkg = dx5;
    attach5 = ld attach;
    check L219() else D76();
  L153():
    goto L28(i34, i36);
  L215():
    dr4 = tryDispatchBuiltin.1("[[", packages7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L217() else L216(i53, dr4);
  L216(i57, packages9):
    i60 = ld i;
    check L218() else D75();
  L309():
    goto L77(r213);
  D75():
    deopt 271 [i57, packages9, i60];
  D76():
    deopt 275 [i59, attach5];
  L217():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L49(i53, dx4);
  L218():
    i61 = force? i60;
    __4 = ldf `[[` in base;
    r122 = dyn __4(packages9, i61);
    goto L49(i57, r122);
  L219():
    attach6 = force? attach5;
    checkMissing(attach6);
    c36 = `as.logical`(attach6);
    if c36 then L220() else L50(i59, c36);
  L50(i63, c38):
    st `.tr` = c38;
    sym15 = ldf identical;
    base15 = ldf identical in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L226() else L227();
  L220():
    lev6 = ld lev;
    check L221() else D77();
  D77():
    deopt 277 [i59, c36, lev6];
  L52(i70, r126):
    r128 = `!`(r126);
    c51 = `as.logical`(r128);
    if c51 then L231() else L53(i70, c51);
  L221():
    lev7 = force? lev6;
    checkMissing(lev7);
    r123 = `>`(lev7, 2);
    c39 = `as.logical`(r123);
    if c39 then L51(i59, c36, c39) else L222();
  L226():
    fpkg = ld fpkg;
    check L228() else D79();
  L227():
    r125 = dyn base15(<sym fpkg>, <sym pkg>);
    goto L52(i63, r125);
  D79():
    deopt 290 [i63, fpkg];
  L51(i64, c40, c41):
    c48 = `as.logical`(c41);
    c49 = `&&`(c40, c48);
    goto L50(i64, c49);
  L53(i72, c53):
    c57 = `as.logical`(c53);
    if c57 then L234() else L54();
  L222():
    lev8 = ld lev;
    check L223() else D78();
  L228():
    fpkg1 = force? fpkg;
    checkMissing(fpkg1);
    pkg4 = ld pkg;
    check L229() else D80();
  L231():
    doCheck1 = ld doCheck;
    check L232() else D82();
  D78():
    deopt 281 [i59, c36, c39, lev8];
  D80():
    deopt 292 [i63, pkg4];
  D82():
    deopt 304 [i70, c51, doCheck1];
  L54():
    getGeneric2 = ldf getGeneric;
    check L282() else D110();
  L69(i103):
    is5 = ldf is;
    check L284() else D112();
  L223():
    lev9 = force? lev8;
    checkMissing(lev9);
    r124 = `==`(lev9, -5);
    c44 = `as.logical`(r124);
    c45 = `||`(c39, c44);
    goto L51(i59, c36, c45);
  L229():
    pkg5 = force? pkg4;
    checkMissing(pkg5);
    identical1 = ldf identical in base;
    r127 = dyn identical1(fpkg1, pkg5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L230() else D81();
  L232():
    doCheck2 = force? doCheck1;
    checkMissing(doCheck2);
    c54 = `as.logical`(doCheck2);
    c55 = `&&`(c51, c54);
    goto L53(i70, c55);
  L234():
    _tr = ld `.tr`;
    check L235() else D83();
  D81():
    deopt 302 [i63, r127];
  D83():
    deopt 307 [i72, _tr];
  D110():
    deopt 408 [i72];
  D112():
    deopt 416 [i103];
  L230():
    goto L52(i63, r127);
  L235():
    _tr1 = force? _tr;
    checkMissing(_tr1);
    c58 = `as.logical`(_tr1);
    if c58 then L236() else L55();
  L282():
    p55 = prom<V +>{
      f14 = ld f;
      f15 = force? f14;
      checkMissing(f15);
      return f15;
    };
    p56 = prom<V +>{
      searchWhere9 = ld searchWhere;
      searchWhere10 = force? searchWhere9;
      checkMissing(searchWhere10);
      return searchWhere10;
    };
    p57 = prom<V +>{
      fpkg8 = ld fpkg;
      fpkg9 = force? fpkg8;
      checkMissing(fpkg9);
      return fpkg9;
    };
    r179 = dyn getGeneric2(p55, FALSE, p56, p57);
    check L283() else D111();
  L284():
    p58 = prom<V +>{
      fdef6 = ld fdef;
      fdef7 = force? fdef6;
      checkMissing(fdef7);
      return fdef7;
    };
    r181 = dyn is5(p58, "genericFunction");
    check L285() else D113();
  D111():
    deopt 413 [i72, r179];
  D113():
    deopt 419 [i103, r181];
  L55():
    goto L56(i72);
  L56(i78):
    attach7 = ld attach;
    check L240() else D86();
  L236():
    message2 = ldf message;
    check L237() else D84();
  L283():
    st fdef = r179;
    goto L69(i72);
  L285():
    r182 = `!`(r181);
    c64 = `as.logical`(r182);
    if c64 then L286() else L70();
  D84():
    deopt 310 [i72];
  D86():
    deopt 317 [i78, attach7];
  L70():
    attach9 = ld attach;
    check L289() else D114();
  L237():
    p35 = prom<V +>{
      sQuote2 = ldf sQuote;
      p34 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r130 = dyn sQuote2(p34);
      return r130;
    };
    r132 = dyn message2("--- getting generic ", p35, " (and methods)");
    check L238() else D85();
  L240():
    attach8 = force? attach7;
    checkMissing(attach8);
    c59 = `as.logical`(attach8);
    if c59 then L241() else L57();
  L286():
    goto L47(i103);
  D85():
    deopt 314 [i72, r132];
  D114():
    deopt 425 [i103, attach9];
  L57():
    getGeneric1 = ldf getGeneric;
    check L279() else D108();
  L68(i102, r170):
    goto L69(i102);
  L238():
    goto L56(i72);
  L241():
    sym16 = ldf `as.environment`;
    base16 = ldf `as.environment` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L242() else L243();
  L289():
    attach10 = force? attach9;
    checkMissing(attach10);
    c65 = `as.logical`(attach10);
    if c65 then L290() else L72();
  D108():
    deopt 400 [i78];
  L58(i83, r135):
    st env = r135;
    exists1 = ldf exists;
    check L246() else D89();
  L72():
    _uncacheGeneric = ldf `.uncacheGeneric`;
    check L294() else D117();
  L73(i110):
    _updateMethodsInTable = ldf `.updateMethodsInTable`;
    check L296() else D119();
  L242():
    where17 = ld where;
    check L244() else D87();
  L243():
    r134 = dyn base16(<sym where>);
    goto L58(i78, r134);
  L279():
    p52 = prom<V +>{
      f12 = ld f;
      f13 = force? f12;
      checkMissing(f13);
      return f13;
    };
    p53 = prom<V +>{
      searchWhere7 = ld searchWhere;
      searchWhere8 = force? searchWhere7;
      checkMissing(searchWhere8);
      return searchWhere8;
    };
    p54 = prom<V +>{
      fpkg6 = ld fpkg;
      fpkg7 = force? fpkg6;
      checkMissing(fpkg7);
      return fpkg7;
    };
    r174 = dyn getGeneric1(p52, FALSE, p53, p54);
    check L280() else D109();
  L290():
    _cacheGeneric = ldf `.cacheGeneric`;
    check L291() else D115();
  D87():
    deopt 321 [i78, where17];
  D89():
    deopt 327 [i83];
  D109():
    deopt 405 [i78, r174];
  D115():
    deopt 428 [i103];
  D117():
    deopt 433 [i103];
  D119():
    deopt 438 [i110];
  L244():
    where18 = force? where17;
    checkMissing(where18);
    as_environment1 = ldf `as.environment` in base;
    r136 = dyn as_environment1(where18);
    check L245() else D88();
  L246():
    p36 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p37 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r139 = dyn exists1[, envir, inherits](p36, p37, FALSE);
    check L247() else D90();
  L280():
    st fdef = r174;
    goto L68(i78, r174);
  L291():
    p59 = prom<V +>{
      f16 = ld f;
      f17 = force? f16;
      checkMissing(f17);
      return f17;
    };
    p60 = prom<V +>{
      fdef8 = ld fdef;
      fdef9 = force? fdef8;
      checkMissing(fdef9);
      return fdef9;
    };
    r186 = dyn _cacheGeneric(p59, p60);
    check L292() else D116();
  L294():
    p61 = prom<V +>{
      f18 = ld f;
      f19 = force? f18;
      checkMissing(f19);
      return f19;
    };
    p62 = prom<V +>{
      fdef10 = ld fdef;
      fdef11 = force? fdef10;
      checkMissing(fdef11);
      return fdef11;
    };
    r190 = dyn _uncacheGeneric(p61, p62);
    check L295() else D118();
  L296():
    p63 = prom<V +>{
      fdef12 = ld fdef;
      fdef13 = force? fdef12;
      checkMissing(fdef13);
      return fdef13;
    };
    p64 = prom<V +>{
      where19 = ld where;
      where20 = force? where19;
      checkMissing(where20);
      return where20;
    };
    p65 = prom<V +>{
      attach11 = ld attach;
      attach12 = force? attach11;
      checkMissing(attach12);
      return attach12;
    };
    r194 = dyn _updateMethodsInTable(p63, p64, p65);
    check L297() else D120();
  D88():
    deopt 324 [i78, r136];
  D90():
    deopt 333 [i83, r139];
  D116():
    deopt 431 [i103, r186];
  D118():
    deopt 436 [i103, r190];
  D120():
    deopt 442 [i110, r194];
  L245():
    goto L58(i78, r136);
  L247():
    c60 = `as.logical`(r139);
    if c60 then L248() else L59();
  L292():
    goto L73(i103);
  L295():
    goto L73(i103);
  L297():
    st methods = r194;
    cacheGenericsMetaData = ldf cacheGenericsMetaData;
    check L298() else D121();
  D121():
    deopt 445 [i110];
  L59():
    getGeneric = ldf getGeneric;
    check L276() else D106();
  L67(i101, r165):
    goto L68(i101, r165);
  L248():
    get2 = ldf get;
    check L249() else D91();
  L298():
    p66 = prom<V +>{
      f20 = ld f;
      f21 = force? f20;
      checkMissing(f21);
      return f21;
    };
    p67 = prom<V +>{
      fdef14 = ld fdef;
      fdef15 = force? fdef14;
      checkMissing(fdef15);
      return fdef15;
    };
    p68 = prom<V +>{
      attach13 = ld attach;
      attach14 = force? attach13;
      checkMissing(attach14);
      return attach14;
    };
    p69 = prom<V +>{
      where21 = ld where;
      where22 = force? where21;
      checkMissing(where22);
      return where22;
    };
    p70 = prom<V +>{
      __5 = ldf `@` in base;
      r199 = dyn __5(<sym fdef>, <sym package>);
      return r199;
    };
    p71 = prom<V +>{
      methods = ld methods;
      methods1 = force? methods;
      checkMissing(methods1);
      return methods1;
    };
    r202 = dyn cacheGenericsMetaData(p66, p67, p68, p69, p70, p71);
    check L299() else D122();
  D91():
    deopt 335 [i83];
  D106():
    deopt 392 [i83];
  D122():
    deopt 452 [i110, r202];
  L249():
    p38 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    p39 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r142 = dyn get2[, envir](p38, p39);
    check L250() else D92();
  L276():
    p49 = prom<V +>{
      f10 = ld f;
      f11 = force? f10;
      checkMissing(f11);
      return f11;
    };
    p50 = prom<V +>{
      searchWhere5 = ld searchWhere;
      searchWhere6 = force? searchWhere5;
      checkMissing(searchWhere6);
      return searchWhere6;
    };
    p51 = prom<V +>{
      fpkg4 = ld fpkg;
      fpkg5 = force? fpkg4;
      checkMissing(fpkg5);
      return fpkg5;
    };
    r169 = dyn getGeneric(p49, FALSE, p50, p51);
    check L277() else D107();
  L299():
    _tr2 = ld `.tr`;
    check L300() else D123();
  D92():
    deopt 339 [i83, r142];
  D107():
    deopt 397 [i83, r169];
  D123():
    deopt 453 [i110, _tr2];
  L250():
    st def = r142;
    _genericOrImplicit = ldf `.genericOrImplicit`;
    check L251() else D93();
  L277():
    st fdef = r169;
    goto L67(i83, r169);
  L300():
    _tr3 = force? _tr2;
    checkMissing(_tr3);
    c66 = `as.logical`(_tr3);
    if c66 then L301() else L74();
  D93():
    deopt 342 [i83];
  L74():
    goto L75(i110);
  L75(i113):
    goto L47(i113);
  L251():
    p40 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    p41 = prom<V +>{
      fpkg2 = ld fpkg;
      fpkg3 = force? fpkg2;
      checkMissing(fpkg3);
      return fpkg3;
    };
    p42 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r146 = dyn _genericOrImplicit(p40, p41, p42);
    check L252() else D94();
  L301():
    message3 = ldf message;
    check L302() else D124();
  D94():
    deopt 346 [i83, r146];
  D124():
    deopt 456 [i110];
  L252():
    st fdef = r146;
    sym17 = ldf `is.function`;
    base17 = ldf `is.function` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L253() else L254();
  L302():
    p73 = prom<V +>{
      sQuote3 = ldf sQuote;
      p72 = prom<V +>{
        f22 = ld f;
        f23 = force? f22;
        checkMissing(f23);
        return f23;
      };
      r204 = dyn sQuote3(p72);
      return r204;
    };
    r206 = dyn message3("--- done getting generic ", p73);
    check L303() else D125();
  D125():
    deopt 459 [i110, r206];
  L60(i88, r148):
    c61 = `as.logical`(r148);
    if c61 then L257() else L61();
  L253():
    def = ld def;
    check L255() else D95();
  L254():
    r147 = dyn base17(<sym def>);
    goto L60(i83, r147);
  L303():
    goto L75(i110);
  D95():
    deopt 350 [i83, def];
  L61():
    goto L66(i88, NULL);
  L66(i100, r164):
    goto L67(i100, r164);
  L255():
    def1 = force? def;
    checkMissing(def1);
    is_function = ldf `is.function` in base;
    r149 = dyn is_function(def1);
    check L256() else D96();
  L257():
    sym18 = ldf identical;
    base18 = ldf identical in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L258() else L259();
  D96():
    deopt 353 [i83, r149];
  L62(i93, r151):
    c62 = `as.logical`(r151);
    if c62 then L265() else L63();
  L256():
    goto L60(i83, r149);
  L258():
    environment = ldf environment;
    check L260() else D97();
  L259():
    r150 = dyn base18(<lang environment(def)>, <lang environment(fdef)>);
    goto L62(i88, r150);
  D97():
    deopt 357 [i88];
  L63():
    is4 = ldf is;
    check L268() else D102();
  L260():
    p43 = prom<V +>{
      def2 = ld def;
      def3 = force? def2;
      checkMissing(def3);
      return def3;
    };
    r153 = dyn environment(p43);
    check L261() else D98();
  L265():
    goto L47(i93);
  D98():
    deopt 359 [i88, r153];
  D102():
    deopt 376 [i93];
  L261():
    environment1 = ldf environment;
    check L262() else D99();
  L268():
    p45 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r159 = dyn is4(p45, "genericFunction");
    check L269() else D103();
  D99():
    deopt 361 [i88];
  D103():
    deopt 379 [i93, r159];
  L262():
    p44 = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    r155 = dyn environment1(p44);
    check L263() else D100();
  L269():
    c63 = `as.logical`(r159);
    if c63 then L270() else L65();
  D100():
    deopt 363 [i88, r155];
  L64(i97, r157):
    goto L66(i97, r157);
  L65():
    goto L64(i93, NULL);
  L263():
    identical2 = ldf identical in base;
    r156 = dyn identical2(r153, r155, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L264() else D101();
  L270():
    _assignOverBinding = ldf `.assignOverBinding`;
    check L271() else D104();
  D101():
    deopt 372 [i88, r156];
  D104():
    deopt 381 [i93];
  L264():
    goto L62(i88, r156);
  L271():
    p46 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    p47 = prom<V +>{
      fdef4 = ld fdef;
      fdef5 = force? fdef4;
      checkMissing(fdef5);
      return fdef5;
    };
    p48 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r163 = dyn _assignOverBinding(p46, p47, p48, FALSE);
    check L272() else D105();
  D105():
    deopt 386 [i93, r163];
  L272():
    goto L64(i93, r163);
  }
}