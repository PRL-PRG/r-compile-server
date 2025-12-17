fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3961378943;
    st `.S4OldClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3961378943(Class, prevClass, def, where, prevDef) {
  (reg Class:*, reg prevClass:*, reg def:*, reg where:*, reg prevDef:*) -+> V { var Class:*, var prevClass:*, var def:*, var where:*, var prevDef:*, reg getClassDef:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg prevDef1:*, reg prevDef2:V, reg c:V, reg r5:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg on_exit:cls, reg r8:V, reg removeClass:cls, reg Class3:*, reg Class4:V, reg p2:p(V +), reg where3:*, reg where4:V, reg p3:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg __:cls, reg r15:V, reg __1:cls, reg r16:V, reg identical:cls, reg r17:V, reg r18:V, reg c2:L, reg _renameClassDef:cls, reg def1:*, reg def2:V, reg p4:p(V +), reg __2:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg _validS3Extends:cls, reg def3:*, reg def4:V, reg p6:p(V +), reg curDef:*, reg curDef1:V, reg p7:p(V +), reg r26:V, reg __3:cls, reg r27:V, reg l:*, reg __4:cls, reg slots:*, reg slots1:V, reg p8:p(V +), reg r29:V, reg c3:L, reg r32:V, reg l2:*, reg r33:V, reg dr:V, reg dc:L, reg dx:V, reg r35:V, reg l4:*, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg r43:V, reg l7:*, reg r44:V, reg r45:V, reg r46:V, reg __5:cls, reg r47:V, reg names:cls, reg r48:V, reg ___:cls, reg r49:V, reg ___1:cls, reg r50:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r51:V, reg r52:V, reg __6:cls, reg r53:V, reg __7:cls, reg r54:V, reg c4:cls, reg r55:V, reg sort_list:cls, reg vapply:cls, reg ext:*, reg ext1:V, reg p9:p(V +), reg r57:cls, reg p10:p(V +), reg r59:V, reg p11:p(V +), reg r61:V, reg ext2:*, reg ext3:V, reg c5:L, reg ext5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg distOrder:*, reg distOrder1:V, reg __8:cls, reg r62:V, reg anyDuplicated:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r63:V, reg r64:V, reg ext6:*, reg ext7:V, reg names1:cls, reg r65:V, reg p12:p(V +), reg r67:V, reg c6:L, reg _resolveSuperclasses:cls, reg def5:*, reg def6:V, reg p13:p(V +), reg ext8:*, reg ext9:V, reg p14:p(V +), reg where5:*, reg where6:V, reg p15:p(V +), reg r71:V, reg ext10:*, reg ext11:V, reg l8:*, reg ___2:cls, reg r73:V, reg setdiff:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r74:V, reg r75:V, reg __9:cls, reg r76:V, reg names2:cls, reg r77:V, reg p16:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r79:V, reg r80:V, reg __10:cls, reg r81:V, reg names3:cls, reg r82:V, reg p17:p(V +), reg r84:V, reg r85:cls, reg lapply:cls, reg oldSupers:*, reg oldSupers1:V, reg p18:p(V +), reg addSubclass:*, reg addSubclass1:V, reg p19:p(V +), reg r88:V, reg __11:cls, reg r89:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r90:V, reg r91:V, reg subcls:*, reg subcls1:V, reg length:cls, reg r92:V, reg r93:V, reg c7:L, reg subcls2:*, reg subcls3:V, reg l9:*, reg __12:cls, reg subclasses:*, reg subclasses1:V, reg p20:p(V +), reg r95:V, reg c8:L, reg subcls5:V, reg l11:*, reg r97:V, reg dr4:V, reg dc2:L, reg dx4:V, reg subcls7:V, reg l13:*, reg dx5:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r100:V, reg subcls12:V, reg l16:*, reg r101:V, reg subcls13:V, reg r102:V, reg subcls14:*, reg subcls15:V, reg names4:cls, reg r103:V, reg ___3:cls, reg r104:V, reg ___4:cls, reg r105:V, reg __13:cls, reg r106:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r107:V, reg r108:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r109:V, reg r110:V, reg proto:*, reg proto1:V, reg attr:cls, reg r111:V, reg c9:V, reg c10:L, reg _identC:cls, reg prevClass1:*, reg prevClass2:V, reg p21:p(V +), reg r113:V, reg c11:L, reg Class5:*, reg Class6:V, reg Class7:V, reg S3Class:cls, reg __14:cls, reg r114:V, reg p22:p(V +), reg r116:V, reg l17:*, reg attr__:cls, reg r117:V, reg proto2:*, reg proto3:V, reg l18:*, reg ___5:cls, reg r118:V, reg assignClassDef:cls, reg Class8:*, reg Class9:V, reg p23:p(V +), reg def7:*, reg def8:V, reg p24:p(V +), reg where7:*, reg where8:V, reg p25:p(V +), reg r122:V, reg extends:cls, reg def9:*, reg def10:V, reg p26:p(V +), reg prevClass3:*, reg prevClass4:V, reg p27:p(V +), reg r125:V, reg r126:V, reg c12:L, reg setIs:cls, reg Class10:*, reg Class11:V, reg p28:p(V +), reg prevClass5:*, reg prevClass6:V, reg p29:p(V +), reg def11:*, reg def12:V, reg p30:p(V +), reg where9:*, reg where10:V, reg p31:p(V +), reg r131:V, reg r133:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r134:V, reg r135:V, reg substitute:cls, reg r136:V, reg l19:*, reg body__:cls, reg r137:V, reg setMethod:cls, reg Class12:*, reg Class13:V, reg p32:p(V +), reg slotsMethod:*, reg slotsMethod1:V, reg p33:p(V +), reg where11:*, reg where12:V, reg p34:p(V +), reg r141:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r142:V, reg r143:V, reg prevDef3:*, reg prevDef4:V, reg c13:V, reg r144:V, reg c14:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r145:V, reg r146:V, reg on_exit1:cls, reg r147:V |
    mkenv;
    st Class = Class;
    st prevClass = prevClass;
    st def = def;
    st where = where;
    st prevDef = prevDef;
    getClassDef = ldf getClassDef;
    check L30() else D0();
  D0():
    deopt 1 [];
  L30():
    p = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r2 = dyn getClassDef(p, p1);
    check L31() else D1();
  D1():
    deopt 4 [r2];
  L31():
    st curDef = r2;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L0(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L35() else L1();
  L32():
    prevDef1 = ld prevDef;
    check L34() else D2();
  L33():
    r3 = dyn base(<sym prevDef>);
    goto L0(r3);
  D2():
    deopt 7 [prevDef1];
  L1():
    goto L3();
  L3():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L34():
    prevDef2 = force? prevDef1;
    checkMissing(prevDef2);
    c = `==`(prevDef2, NULL);
    goto L0(c);
  L35():
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L2():
    removeClass = ldf removeClass;
    check L38() else D3();
  L4(r14):
    r18 = `!`(r14);
    c2 = `as.logical`(r18);
    if c2 then L44() else L5();
  L36():
    on_exit = ldf `on.exit` in base;
    r8 = dyn on_exit(<lang .restoreClass(prevDef, where)>);
    goto L2();
  L37():
    r6 = dyn base1(<lang .restoreClass(prevDef, where)>);
    goto L2();
  L41():
    __ = ldf `@` in base;
    r15 = dyn __(<sym def>, <sym className>);
    __1 = ldf `@` in base;
    r16 = dyn __1(<sym curDef>, <sym className>);
    identical = ldf identical in base;
    r17 = dyn identical(r15, r16, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L43() else D5();
  L42():
    r13 = dyn base2(<lang `@`(def, className)>, <lang `@`(curDef, className)>);
    goto L4(r13);
  D3():
    deopt 15 [];
  D5():
    deopt 36 [r17];
  L5():
    goto L6();
  L6():
    _validS3Extends = ldf `.validS3Extends`;
    check L48() else D8();
  L38():
    p2 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p3 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r11 = dyn removeClass[, where](p2, p3);
    check L39() else D4();
  L43():
    goto L4(r17);
  L44():
    _renameClassDef = ldf `.renameClassDef`;
    check L45() else D6();
  D4():
    deopt 19 [r11];
  D6():
    deopt 39 [];
  D8():
    deopt 47 [];
  L39():
    goto L3();
  L45():
    p4 = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    p5 = prom<V +>{
      __2 = ldf `@` in base;
      r20 = dyn __2(<sym curDef>, <sym className>);
      return r20;
    };
    r22 = dyn _renameClassDef(p4, p5);
    check L46() else D7();
  L48():
    p6 = prom<V +>{
      def3 = ld def;
      def4 = force? def3;
      checkMissing(def4);
      return def4;
    };
    p7 = prom<V +>{
      curDef = ld curDef;
      curDef1 = force? curDef;
      checkMissing(curDef1);
      return curDef1;
    };
    r26 = dyn _validS3Extends(p6, p7);
    check L49() else D9();
  D7():
    deopt 42 [r22];
  D9():
    deopt 50 [r26];
  L46():
    st def = r22;
    goto L6();
  L49():
    __3 = ldf `@` in base;
    r27 = dyn __3(<sym curDef>, <sym slots>);
    l = ld def;
    __4 = ldf `@`;
    check L50() else D10();
  D10():
    deopt 54 [r27, l, r27];
  L50():
    p8 = prom<V +>{
      slots = ld slots;
      slots1 = force? slots;
      checkMissing(slots1);
      return slots1;
    };
    r29 = dyn __4(r27, NULL, p8);
    check L51() else D11();
  D11():
    deopt 57 [r27, l, r27, r29];
  L51():
    c3 = `is.object`(r29);
    if c3 then L52() else L53(r27, l, r29);
  L7(r35, l4, dx1):
    ___1 = ldf `@<-`;
    check L58() else D13();
  L52():
    dr = tryDispatchBuiltin.0("[<-", r29, r27);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L54() else L53(r27, l, dr);
  L53(r32, l2, r33):
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  D13():
    deopt 66 [r35, l4, dx1];
  L8(r43, l7, r44, r45, r46):
    ___ = ldf `[<-` in base;
    r49 = dyn ___(r44, r45, r46);
    goto L7(r43, l7, r49);
  L54():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(r27, l, dx);
  L55():
    __5 = ldf `@` in base;
    r47 = dyn __5(<sym curDef>, <sym slots>);
    names = ldf names in base;
    r48 = dyn names(r47);
    check L57() else D12();
  L56():
    r42 = dyn base3(<lang `@`(curDef, slots)>);
    goto L8(r32, l2, r33, r27, r42);
  L58():
    r50 = dyn ___1(l4, NULL, "slots", dx1);
    check L59() else D14();
  D12():
    deopt 64 [r32, l2, r33, r27, r48];
  D14():
    deopt 69 [r35, r50];
  L57():
    goto L8(r32, l2, r33, r27, r48);
  L59():
    st def = r50;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L9(r52):
    st ext = r52;
    sort_list = ldf `sort.list`;
    check L63() else D16();
  L60():
    __6 = ldf `@` in base;
    r53 = dyn __6(<sym def>, <sym contains>);
    __7 = ldf `@` in base;
    r54 = dyn __7(<sym curDef>, <sym contains>);
    c4 = ldf c in base;
    r55 = dyn c4(r53, r54);
    check L62() else D15();
  L61():
    r51 = dyn base4(<lang `@`(def, contains)>, <lang `@`(curDef, contains)>);
    goto L9(r51);
  D15():
    deopt 78 [r55];
  D16():
    deopt 81 [];
  L62():
    goto L9(r55);
  L63():
    p11 = prom<V +>{
      vapply = ldf vapply;
      p9 = prom<V +>{
        ext = ld ext;
        ext1 = force? ext;
        checkMissing(ext1);
        return ext1;
      };
      p10 = prom<V +>{
        r57 = clos inner2501545716;
        return r57;
      };
      r59 = dyn vapply(p9, p10, 1.0);
      return r59;
    };
    r61 = dyn sort_list(p11);
    check L64() else D17();
  D17():
    deopt 83 [r61];
  L64():
    st distOrder = r61;
    ext2 = ld ext;
    check L65() else D18();
  D18():
    deopt 85 [ext2];
  L65():
    ext3 = force? ext2;
    checkMissing(ext3);
    c5 = `is.object`(ext3);
    if c5 then L66() else L67(ext3);
  L10(dx3):
    st ext = dx3;
    anyDuplicated = ldf anyDuplicated;
    check L70() else D20();
  L66():
    dr2 = tryDispatchBuiltin.1("[", ext3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L68() else L67(dr2);
  L67(ext5):
    distOrder = ld distOrder;
    check L69() else D19();
  D19():
    deopt 87 [ext5, distOrder];
  D20():
    deopt 92 [];
  L68():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L69():
    distOrder1 = force? distOrder;
    __8 = ldf `[` in base;
    r62 = dyn __8(ext5, distOrder1);
    goto L10(r62);
  L70():
    p12 = prom<V +>{
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r64):
      return r64;
    L1():
      ext6 = ld ext;
      ext7 = force? ext6;
      checkMissing(ext7);
      names1 = ldf names in base;
      r65 = dyn names1(ext7);
      goto L0(r65);
    L2():
      r63 = dyn base5(<sym ext>);
      goto L0(r63);
    };
    r67 = dyn anyDuplicated(p12);
    check L71() else D21();
  D21():
    deopt 94 [r67];
  L71():
    c6 = `as.logical`(r67);
    if c6 then L72() else L11();
  L11():
    goto L12();
  L12():
    ext10 = ld ext;
    check L76() else D24();
  L72():
    _resolveSuperclasses = ldf `.resolveSuperclasses`;
    check L73() else D22();
  D22():
    deopt 96 [];
  D24():
    deopt 104 [ext10];
  L73():
    p13 = prom<V +>{
      def5 = ld def;
      def6 = force? def5;
      checkMissing(def6);
      return def6;
    };
    p14 = prom<V +>{
      ext8 = ld ext;
      ext9 = force? ext8;
      checkMissing(ext9);
      return ext9;
    };
    p15 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r71 = dyn _resolveSuperclasses(p13, p14, p15);
    check L74() else D23();
  L76():
    ext11 = force? ext10;
    checkMissing(ext11);
    l8 = ld def;
    ___2 = ldf `@<-`;
    check L77() else D25();
  D23():
    deopt 100 [r71];
  D25():
    deopt 107 [ext11, l8, ext11];
  L74():
    st ext = r71;
    goto L12();
  L77():
    r73 = dyn ___2(l8, NULL, "contains", ext11);
    check L78() else D26();
  D26():
    deopt 110 [ext11, r73];
  L78():
    st def = r73;
    setdiff = ldf setdiff;
    check L79() else D27();
  D27():
    deopt 113 [];
  L79():
    p16 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      __9 = ldf `@` in base;
      r76 = dyn __9(<sym def>, <sym contains>);
      names2 = ldf names in base;
      r77 = dyn names2(r76);
      goto L0(r77);
    L2():
      r74 = dyn base6(<lang `@`(def, contains)>);
      goto L0(r74);
    };
    p17 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r80):
      return r80;
    L1():
      __10 = ldf `@` in base;
      r81 = dyn __10(<sym curDef>, <sym contains>);
      names3 = ldf names in base;
      r82 = dyn names3(r81);
      goto L0(r82);
    L2():
      r79 = dyn base7(<lang `@`(curDef, contains)>);
      goto L0(r79);
    };
    r84 = dyn setdiff(p16, p17);
    check L80() else D28();
  D28():
    deopt 116 [r84];
  L80():
    st oldSupers = r84;
    r85 = clos inner4230683063;
    st addSubclass = r85;
    lapply = ldf lapply;
    check L81() else D29();
  D29():
    deopt 122 [];
  L81():
    p18 = prom<V +>{
      oldSupers = ld oldSupers;
      oldSupers1 = force? oldSupers;
      checkMissing(oldSupers1);
      return oldSupers1;
    };
    p19 = prom<V +>{
      addSubclass = ld addSubclass;
      addSubclass1 = force? addSubclass;
      checkMissing(addSubclass1);
      return addSubclass1;
    };
    r88 = dyn lapply(p18, p19);
    check L82() else D30();
  D30():
    deopt 125 [r88];
  L82():
    __11 = ldf `@` in base;
    r89 = dyn __11(<sym curDef>, <sym subclasses>);
    st subcls = r89;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L83() else L84();
  L13(r91):
    r93 = `>`(r91, 0.0);
    c7 = `as.logical`(r93);
    if c7 then L87() else L14();
  L83():
    subcls = ld subcls;
    check L85() else D31();
  L84():
    r90 = dyn base8(<sym subcls>);
    goto L13(r90);
  D31():
    deopt 131 [subcls];
  L14():
    goto L17();
  L17():
    __13 = ldf `@` in base;
    r106 = dyn __13(<sym def>, <sym prototype>);
    st proto = r106;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L101() else L102();
  L85():
    subcls1 = force? subcls;
    checkMissing(subcls1);
    length = ldf length in base;
    r92 = dyn length(subcls1);
    check L86() else D32();
  L87():
    subcls2 = ld subcls;
    check L88() else D33();
  D32():
    deopt 134 [r92];
  D33():
    deopt 137 [subcls2];
  L18(r108):
    c10 = `as.logical`(r108);
    if c10 then L107() else L20();
  L86():
    goto L13(r92);
  L88():
    subcls3 = force? subcls2;
    checkMissing(subcls3);
    l9 = ld def;
    __12 = ldf `@`;
    check L89() else D34();
  L101():
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L103() else L104();
  L102():
    r107 = dyn base10(<lang attr(proto, ".S3Class")>);
    goto L18(r107);
  D34():
    deopt 140 [subcls3, l9, subcls3];
  L19(r110):
    c9 = `==`(r110, NULL);
    goto L18(c9);
  L20():
    goto L23();
  L23():
    assignClassDef = ldf assignClassDef;
    check L121() else D52();
  L89():
    p20 = prom<V +>{
      subclasses = ld subclasses;
      subclasses1 = force? subclasses;
      checkMissing(subclasses1);
      return subclasses1;
    };
    r95 = dyn __12(subcls3, NULL, p20);
    check L90() else D35();
  L103():
    proto = ld proto;
    check L105() else D40();
  L104():
    r109 = dyn base11(<sym proto>, ".S3Class");
    goto L19(r109);
  L107():
    _identC = ldf `.identC`;
    check L108() else D42();
  D35():
    deopt 143 [subcls3, l9, subcls3, r95];
  D40():
    deopt 165 [proto];
  D42():
    deopt 172 [];
  D52():
    deopt 199 [];
  L90():
    c8 = `is.object`(r95);
    if c8 then L91() else L92(subcls3, l9, r95);
  L105():
    proto1 = force? proto;
    checkMissing(proto1);
    attr = ldf attr in base;
    r111 = dyn attr(proto1, ".S3Class");
    check L106() else D41();
  L108():
    p21 = prom<V +>{
      prevClass1 = ld prevClass;
      prevClass2 = force? prevClass1;
      checkMissing(prevClass2);
      return prevClass2;
    };
    r113 = dyn _identC(p21, "oldClass");
    check L109() else D43();
  L121():
    p23 = prom<V +>{
      Class8 = ld Class;
      Class9 = force? Class8;
      checkMissing(Class9);
      return Class9;
    };
    p24 = prom<V +>{
      def7 = ld def;
      def8 = force? def7;
      checkMissing(def8);
      return def8;
    };
    p25 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r122 = dyn assignClassDef[, , where](p23, p24, p25);
    check L122() else D53();
  D41():
    deopt 169 [r111];
  D43():
    deopt 175 [r113];
  D53():
    deopt 204 [r122];
  L15(subcls7, l13, dx5):
    ___4 = ldf `@<-`;
    check L98() else D38();
  L91():
    dr4 = tryDispatchBuiltin.0("[<-", r95, subcls3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L93() else L92(subcls3, l9, dr4);
  L92(subcls5, l11, r97):
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L94() else L95();
  L106():
    goto L19(r111);
  L109():
    c11 = `as.logical`(r113);
    if c11 then L110() else L21();
  L122():
    extends = ldf extends;
    check L123() else D54();
  D38():
    deopt 152 [subcls7, l13, dx5];
  D54():
    deopt 206 [];
  L16(subcls12, l16, r101, subcls13, r102):
    ___3 = ldf `[<-` in base;
    r104 = dyn ___3(r101, subcls13, r102);
    goto L15(subcls12, l16, r104);
  L21():
    S3Class = ldf S3Class;
    check L113() else D45();
  L22(Class7):
    l17 = ld proto;
    attr__ = ldf `attr<-`;
    check L115() else D47();
  L93():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(subcls3, l9, dx4);
  L94():
    subcls14 = ld subcls;
    check L96() else D36();
  L95():
    r100 = dyn base9(<sym subcls>);
    goto L16(subcls5, l11, r97, subcls3, r100);
  L98():
    r105 = dyn ___4(l13, NULL, "subclasses", dx5);
    check L99() else D39();
  L110():
    Class5 = ld Class;
    check L111() else D44();
  L123():
    p26 = prom<V +>{
      def9 = ld def;
      def10 = force? def9;
      checkMissing(def10);
      return def10;
    };
    p27 = prom<V +>{
      prevClass3 = ld prevClass;
      prevClass4 = force? prevClass3;
      checkMissing(prevClass4);
      return prevClass4;
    };
    r125 = dyn extends[, , maybe](p26, p27, FALSE);
    check L124() else D55();
  D36():
    deopt 147 [subcls5, l11, r97, subcls3, subcls14];
  D39():
    deopt 155 [subcls7, r105];
  D44():
    deopt 176 [Class5];
  D45():
    deopt 179 [];
  D47():
    deopt 183 [Class7, l17, Class7];
  D55():
    deopt 211 [r125];
  L96():
    subcls15 = force? subcls14;
    checkMissing(subcls15);
    names4 = ldf names in base;
    r103 = dyn names4(subcls15);
    check L97() else D37();
  L99():
    st def = r105;
    goto L17();
  L111():
    Class6 = force? Class5;
    checkMissing(Class6);
    goto L22(Class6);
  L113():
    p22 = prom<V +>{
      __14 = ldf `@` in base;
      r114 = dyn __14(<sym curDef>, <sym prototype>);
      return r114;
    };
    r116 = dyn S3Class(p22);
    check L114() else D46();
  L115():
    r117 = dyn attr__(l17, NULL, ".S3Class", Class7);
    check L116() else D48();
  L124():
    r126 = `!`(r125);
    c12 = `as.logical`(r126);
    if c12 then L125() else L24();
  D37():
    deopt 150 [subcls5, l11, r97, subcls3, r103];
  D46():
    deopt 181 [r116];
  D48():
    deopt 186 [Class7, r117];
  L24():
    goto L25();
  L25():
    r133 = clos inner4102710431;
    st slotsMethod = r133;
    sym12 = ldf substitute;
    base12 = ldf substitute in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L129() else L130();
  L97():
    goto L16(subcls5, l11, r97, subcls3, r103);
  L114():
    goto L22(r116);
  L116():
    st proto = r117;
    proto2 = ld proto;
    check L117() else D49();
  L125():
    setIs = ldf setIs;
    check L126() else D56();
  D49():
    deopt 188 [proto2];
  D56():
    deopt 214 [];
  L26(r135):
    l19 = ld slotsMethod;
    body__ = ldf `body<-`;
    check L131() else D58();
  L117():
    proto3 = force? proto2;
    checkMissing(proto3);
    l18 = ld def;
    ___5 = ldf `@<-`;
    check L118() else D50();
  L126():
    p28 = prom<V +>{
      Class10 = ld Class;
      Class11 = force? Class10;
      checkMissing(Class11);
      return Class11;
    };
    p29 = prom<V +>{
      prevClass5 = ld prevClass;
      prevClass6 = force? prevClass5;
      checkMissing(prevClass6);
      return prevClass6;
    };
    p30 = prom<V +>{
      def11 = ld def;
      def12 = force? def11;
      checkMissing(def12);
      return def12;
    };
    p31 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r131 = dyn setIs[, , classDef, where](p28, p29, p30, p31);
    check L127() else D57();
  L129():
    substitute = ldf substitute in base;
    r136 = dyn substitute(<lang {
      LIST
    }>, <lang list(LIST=`@`(def, slots))>);
    goto L26(r136);
  L130():
    r134 = dyn base12(<lang {
      LIST
    }>, <lang list(LIST=`@`(def, slots))>);
    goto L26(r134);
  D50():
    deopt 191 [proto3, l18, proto3];
  D57():
    deopt 221 [r131];
  D58():
    deopt 231 [r135, l19, r135];
  L118():
    r118 = dyn ___5(l18, NULL, "prototype", proto3);
    check L119() else D51();
  L127():
    goto L25();
  L131():
    r137 = dyn body__(l19, NULL, r135);
    check L132() else D59();
  D51():
    deopt 194 [proto3, r118];
  D59():
    deopt 233 [r135, r137];
  L119():
    st def = r118;
    goto L23();
  L132():
    st slotsMethod = r137;
    setMethod = ldf setMethod;
    check L133() else D60();
  D60():
    deopt 236 [];
  L133():
    p32 = prom<V +>{
      Class12 = ld Class;
      Class13 = force? Class12;
      checkMissing(Class13);
      return Class13;
    };
    p33 = prom<V +>{
      slotsMethod = ld slotsMethod;
      slotsMethod1 = force? slotsMethod;
      checkMissing(slotsMethod1);
      return slotsMethod1;
    };
    p34 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r141 = dyn setMethod[, , , where]("slotsFromS3", p32, p33, p34);
    check L134() else D61();
  D61():
    deopt 242 [r141];
  L134():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L135() else L136();
  L27(r143):
    r144 = `!`(r143);
    c14 = `as.logical`(r144);
    if c14 then L138() else L28();
  L135():
    prevDef3 = ld prevDef;
    check L137() else D62();
  L136():
    r142 = dyn base13(<sym prevDef>);
    goto L27(r142);
  D62():
    deopt 244 [prevDef3];
  L28():
    invisible.0();
    popenv;
    return NULL;
  L137():
    prevDef4 = force? prevDef3;
    checkMissing(prevDef4);
    c13 = `==`(prevDef4, NULL);
    goto L27(c13);
  L138():
    sym14 = ldf `on.exit`;
    base14 = ldf `on.exit` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L139() else L140();
  L29(r146):
    popenv;
    return r146;
  L139():
    on_exit1 = ldf `on.exit` in base;
    r147 = dyn on_exit1();
    goto L29(r147);
  L140():
    r145 = dyn base14();
    goto L29(r145);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg __:cls, reg r:V |
    mkenv;
    st x = x;
    __ = ldf `@` in base;
    r = dyn __(<sym x>, <sym distance>);
    popenv;
    return r;
  }
}
fun inner4230683063(super) {
  (reg super:*) -+> V { var super:*, reg getClassDef:cls, reg super1:*, reg super2:V, reg p:p(V +), reg where:*, reg where1:V, reg p1:p(V +), reg r2:V, reg _findOrCopyClass:cls, reg super3:*, reg super4:V, reg p2:p(V +), reg superDef:*, reg superDef1:V, reg p3:p(V +), reg where2:*, reg where3:V, reg p4:p(V +), reg r6:V, reg __:cls, reg r7:V, reg c:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg super5:*, reg super6:V, reg __1:cls, reg r10:V, reg l:*, reg __2:cls, reg subclasses:*, reg subclasses1:V, reg p5:p(V +), reg r12:V, reg c1:L, reg dx3:V, reg l2:*, reg r14:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg l4:*, reg dx7:V, reg Class:*, reg Class1:V, reg ____:cls, reg r15:V, reg ___:cls, reg r16:V, reg assignClassDef:cls, reg super7:*, reg super8:V, reg p6:p(V +), reg superDef2:*, reg superDef3:V, reg p7:p(V +), reg superWhere:*, reg superWhere1:V, reg p8:p(V +), reg r20:V |
    mkenv;
    st super = super;
    getClassDef = ldf getClassDef;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      super1 = ld super;
      super2 = force? super1;
      checkMissing(super2);
      return super2;
    };
    p1 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    r2 = dyn getClassDef(p, p1);
    check L3() else D1();
  D1():
    deopt 4 [r2];
  L3():
    st superDef = r2;
    _findOrCopyClass = ldf `.findOrCopyClass`;
    check L4() else D2();
  D2():
    deopt 7 [];
  L4():
    p2 = prom<V +>{
      super3 = ld super;
      super4 = force? super3;
      checkMissing(super4);
      return super4;
    };
    p3 = prom<V +>{
      superDef = ld superDef;
      superDef1 = force? superDef;
      checkMissing(superDef1);
      return superDef1;
    };
    p4 = prom<V +>{
      where2 = ld where;
      where3 = force? where2;
      checkMissing(where3);
      return where3;
    };
    r6 = dyn _findOrCopyClass(p2, p3, p4, "subclass");
    check L5() else D3();
  D3():
    deopt 12 [r6];
  L5():
    st superWhere = r6;
    __ = ldf `@` in base;
    r7 = dyn __(<sym def>, <sym contains>);
    c = `is.object`(r7);
    if c then L6() else L7(r7);
  L0(dx1):
    l = ld superDef;
    __2 = ldf `@`;
    check L10() else D5();
  L6():
    dr = tryDispatchBuiltin.1("[[", r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(r9):
    super5 = ld super;
    check L9() else D4();
  D4():
    deopt 16 [r9, super5];
  D5():
    deopt 20 [dx1, l, dx1];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L9():
    super6 = force? super5;
    __1 = ldf `[[` in base;
    r10 = dyn __1(r9, super6);
    goto L0(r10);
  L10():
    p5 = prom<V +>{
      subclasses = ld subclasses;
      subclasses1 = force? subclasses;
      checkMissing(subclasses1);
      return subclasses1;
    };
    r12 = dyn __2(dx1, NULL, p5);
    check L11() else D6();
  D6():
    deopt 23 [dx1, l, dx1, r12];
  L11():
    c1 = `is.object`(r12);
    if c1 then L12() else L13(dx1, l, r12);
  L1(dx6, l4, dx7):
    ___ = ldf `@<-`;
    check L16() else D8();
  L12():
    dr2 = tryDispatchBuiltin.0("[[<-", r12, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(dx1, l, dr2);
  L13(dx3, l2, r14):
    Class = ld Class;
    check L15() else D7();
  D7():
    deopt 25 [dx3, l2, r14, dx1, Class];
  D8():
    deopt 28 [dx6, l4, dx7];
  L14():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx1, l, dx5);
  L15():
    Class1 = force? Class;
    ____ = ldf `[[<-` in base;
    r15 = dyn ____(r14, dx1, Class1);
    goto L1(dx3, l2, r15);
  L16():
    r16 = dyn ___(l4, NULL, "subclasses", dx7);
    check L17() else D9();
  D9():
    deopt 31 [dx6, r16];
  L17():
    st superDef = r16;
    assignClassDef = ldf assignClassDef;
    check L18() else D10();
  D10():
    deopt 34 [];
  L18():
    p6 = prom<V +>{
      super7 = ld super;
      super8 = force? super7;
      checkMissing(super8);
      return super8;
    };
    p7 = prom<V +>{
      superDef2 = ld superDef;
      superDef3 = force? superDef2;
      checkMissing(superDef3);
      return superDef3;
    };
    p8 = prom<V +>{
      superWhere = ld superWhere;
      superWhere1 = force? superWhere;
      checkMissing(superWhere1);
      return superWhere1;
    };
    r20 = dyn assignClassDef(p6, p7, p8, TRUE);
    check L19() else D11();
  D11():
    deopt 39 [r20];
  L19():
    popenv;
    return r20;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:* |
    mkenv;
    st object = object;
    popenv;
    return NULL;
  }
}