fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2464225602;
    st `.completeClassSlots` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2464225602(ClassDef, where) {
  (reg ClassDef:*, reg where:*) -+> V { var ClassDef:*, var where:*, reg __:cls, reg r:V, reg getAllSuperClasses:cls, reg ClassDef1:*, reg ClassDef2:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg ext:*, reg ext1:V, reg length:cls, reg r5:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg ext2:*, reg ext3:V, reg length1:cls, reg r10:V, reg r11:V, reg vector:cls, reg r12:V, reg properties:*, reg properties1:V, reg l:*, reg c1:L, reg properties3:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg ext4:*, reg ext5:V, reg r16:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg ext6:*, reg ext7:V, reg c3:L, reg i6:I, reg ext9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg i9:*, reg i10:V, reg __1:cls, reg r17:V, reg isClass:cls, reg eClass:*, reg eClass1:V, reg p1:p(V +), reg where1:*, reg where2:V, reg p2:p(V +), reg r20:V, reg c4:L, reg __2:cls, reg r21:V, reg l4:*, reg c5:L, reg i14:I, reg r23:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i16:I, reg r25:V, reg dx5:V, reg i17:*, reg i18:V, reg r26:V, reg ____1:cls, reg r27:V, reg i19:I, reg unlist:cls, reg superProps:*, reg superProps1:V, reg p3:p(V +), reg r30:V, reg anyDuplicated:cls, reg allNames:cls, reg properties6:*, reg properties7:V, reg p4:p(V +), reg r32:V, reg p5:p(V +), reg r34:V, reg c6:L, reg duplicated:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg properties8:*, reg properties9:V, reg names:cls, reg r37:V, reg p6:p(V +), reg r39:V, reg properties10:*, reg properties11:V, reg c7:L, reg properties13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg duped:*, reg duped1:V, reg r40:V, reg __3:cls, reg r41:V, reg dx8:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg properties14:*, reg properties15:V, reg length2:cls, reg r46:V, reg rep_int:cls, reg r47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg properties16:*, reg properties17:V, reg r50:I, reg s1:V, reg l7:I, reg i20:I, reg i21:I, reg i22:I, reg c8:L, reg x1:V, reg properties18:*, reg properties19:V, reg c9:L, reg i26:I, reg properties21:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i28:I, reg dx11:V, reg i29:*, reg i30:V, reg __4:cls, reg r51:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg i33:I, reg r53:V, reg packageSlot:cls, reg cli:*, reg cli1:V, reg p7:p(V +), reg r55:V, reg c10:V, reg c11:L, reg getClassDef:cls, reg cli2:*, reg cli3:V, reg p8:p(V +), reg where3:*, reg where4:V, reg p9:p(V +), reg r58:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg i38:I, reg r60:V, reg cliDef:*, reg cliDef1:V, reg c12:V, reg c13:L, reg l8:*, reg c14:L, reg i42:I, reg r62:L, reg l10:*, reg dr10:V, reg dc5:L, reg dx12:V, reg i44:I, reg r64:L, reg dx13:V, reg i45:*, reg i46:V, reg ____2:cls, reg r65:V, reg i47:I, reg r66:V, reg __5:cls, reg r67:V, reg l11:*, reg c15:L, reg i49:I, reg r70:V, reg l14:*, reg r71:V, reg l15:*, reg dr12:V, reg dc6:L, reg dx14:V, reg i51:I, reg r74:V, reg l17:*, reg r75:V, reg dx15:V, reg i52:*, reg i53:V, reg __6:cls, reg r76:V, reg packageSlot__:cls, reg r77:V, reg c16:L, reg i55:I, reg r79:V, reg l19:*, reg dr14:V, reg dc7:L, reg dx16:V, reg i57:I, reg r81:V, reg dx17:V, reg i58:*, reg i59:V, reg ____3:cls, reg r82:V, reg i60:I, reg getClassDef1:cls, reg cli4:*, reg cli5:V, reg p10:p(V +), reg r85:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r86:V, reg i63:I, reg r87:V, reg cliDef2:*, reg cliDef3:V, reg c17:V, reg c18:L, reg l20:*, reg c19:L, reg i67:I, reg r89:L, reg l22:*, reg dr16:V, reg dc8:L, reg dx18:V, reg i69:I, reg r91:L, reg dx19:V, reg i70:*, reg i71:V, reg ____4:cls, reg r92:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r93:V, reg r94:V, reg undefClasses:*, reg undefClasses1:V, reg any:cls, reg r95:V, reg c20:L, reg warning:cls, reg sprintf:cls, reg gettext:cls, reg r96:V, reg p11:p(V +), reg _dQ:cls, reg __7:cls, reg r98:V, reg p12:p(V +), reg r100:V, reg p13:p(V +), reg paste0:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r102:V, reg r103:V, reg properties22:*, reg properties23:V, reg names1:cls, reg r104:V, reg c21:L, reg r106:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg undefClasses2:*, reg undefClasses3:V, reg __8:cls, reg r107:V, reg p14:p(V +), reg gettextf:cls, reg _dQ1:cls, reg unlist1:cls, reg properties24:*, reg properties25:V, reg p15:p(V +), reg r110:V, reg c22:L, reg r112:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg undefClasses4:*, reg undefClasses5:V, reg __9:cls, reg r113:V, reg p16:p(V +), reg r115:V, reg p17:p(V +), reg r117:V, reg p18:p(V +), reg r119:V, reg p19:p(V +), reg r121:V, reg p20:p(V +), reg r123:V, reg properties26:*, reg properties27:V, reg l23:*, reg ___:cls, reg r125:V, reg ClassDef3:*, reg ClassDef4:V |
    mkenv;
    st ClassDef = ClassDef;
    st where = where;
    __ = ldf `@` in base;
    r = dyn __(<sym ClassDef>, <sym slots>);
    st properties = r;
    getAllSuperClasses = ldf getAllSuperClasses;
    check L37() else D0();
  D0():
    deopt 4 [];
  L37():
    p = prom<V +>{
      ClassDef1 = ld ClassDef;
      ClassDef2 = force? ClassDef1;
      checkMissing(ClassDef2);
      return ClassDef2;
    };
    r2 = dyn getAllSuperClasses(p, TRUE);
    check L38() else D1();
  D1():
    deopt 7 [r2];
  L38():
    st ext = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L0(r4):
    c = `as.logical`(r4);
    if c then L43() else L1();
  L39():
    ext = ld ext;
    check L41() else D2();
  L40():
    r3 = dyn base(<sym ext>);
    goto L0(r3);
  D2():
    deopt 11 [ext];
  L1():
    goto L15();
  L15():
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L86() else L87();
  L41():
    ext1 = force? ext;
    checkMissing(ext1);
    length = ldf length in base;
    r5 = dyn length(ext1);
    check L42() else D3();
  L43():
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  D3():
    deopt 14 [r5];
  L2(r7):
    st superProps = r7;
    properties = ld properties;
    check L51() else D7();
  L16(r43):
    st undefClasses = r43;
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L93() else L94();
  L42():
    goto L0(r5);
  L44():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L45():
    r6 = dyn base1("list", <lang `+`(length(ext), 1)>);
    goto L2(r6);
  L86():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L88() else L89();
  L87():
    r42 = dyn base5(FALSE, <lang length(properties)>);
    goto L16(r42);
  D7():
    deopt 29 [properties];
  L3(r9):
    r11 = `+`(r9, 1);
    vector = ldf vector in base;
    r12 = dyn vector("list", r11);
    check L50() else D6();
  L17(r45):
    rep_int = ldf `rep.int` in base;
    r47 = dyn rep_int(FALSE, r45);
    check L92() else D24();
  L18(r49):
    s1 = toForSeq(r49);
    l7 = length(s1);
    i20 = 0;
    goto L19(i20);
  L46():
    ext2 = ld ext;
    check L48() else D4();
  L47():
    r8 = dyn base2(<sym ext>);
    goto L3(r8);
  L51():
    properties1 = force? properties;
    checkMissing(properties1);
    l = ld superProps;
    c1 = `is.object`(l);
    if c1 then L52() else L53(properties1, l);
  L88():
    properties14 = ld properties;
    check L90() else D22();
  L89():
    r44 = dyn base6(<sym properties>);
    goto L17(r44);
  L93():
    properties16 = ld properties;
    check L95() else D25();
  L94():
    r48 = dyn base7(<sym properties>);
    goto L18(r48);
  D4():
    deopt 20 [ext2];
  D6():
    deopt 27 [r12];
  D22():
    deopt 98 [properties14];
  D24():
    deopt 103 [r47];
  D25():
    deopt 106 [properties16];
  L4(dx1):
    st superProps = dx1;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L19(i21):
    i22 = `+`.1(i21, 1);
    c8 = `<`.1(l7, i22);
    if c8 then L96() else L33();
  L48():
    ext3 = force? ext2;
    checkMissing(ext3);
    length1 = ldf length in base;
    r10 = dyn length1(ext3);
    check L49() else D5();
  L50():
    goto L2(r12);
  L52():
    dr = tryDispatchBuiltin.0("[[<-", l, properties1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L54() else L53(properties1, dr);
  L53(properties3, l2):
    ____ = ldf `[[<-` in base;
    r13 = dyn ____(l2, properties1, 1);
    goto L4(r13);
  L90():
    properties15 = force? properties14;
    checkMissing(properties15);
    length2 = ldf length in base;
    r46 = dyn length2(properties15);
    check L91() else D23();
  L92():
    goto L16(r47);
  L95():
    properties17 = force? properties16;
    checkMissing(properties17);
    r50 = seq_along(properties17);
    goto L18(r50);
  D5():
    deopt 23 [r10];
  D23():
    deopt 101 [r46];
  L5(r15):
    s = toForSeq(r15);
    l3 = length(s);
    i = 0;
    goto L6(i);
  L33():
    x1 = `[[`(s1, i22, NULL, TRUE);
    st i = x1;
    properties18 = ld properties;
    check L97() else D26();
  L49():
    goto L3(r10);
  L54():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L55():
    ext4 = ld ext;
    check L57() else D8();
  L56():
    r14 = dyn base3(<sym ext>);
    goto L5(r14);
  L91():
    goto L17(r46);
  L96():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L140() else L141();
  D8():
    deopt 37 [ext4];
  D26():
    deopt 109 [i22, properties18];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l3, i2);
    if c2 then L58() else L11();
  L34(r94):
    c20 = `as.logical`(r94);
    if c20 then L144() else L35();
  L57():
    ext5 = force? ext4;
    checkMissing(ext5);
    r16 = seq_along(ext5);
    goto L5(r16);
  L97():
    properties19 = force? properties18;
    checkMissing(properties19);
    c9 = `is.object`(properties19);
    if c9 then L98() else L99(i22, properties19);
  L140():
    undefClasses = ld undefClasses;
    check L142() else D42();
  L141():
    r93 = dyn base11(<sym undefClasses>);
    goto L34(r93);
  D42():
    deopt 176 [undefClasses];
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    ext6 = ld ext;
    check L59() else D9();
  L20(i28, dx11):
    st cli = dx11;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L35():
    goto L36();
  L36():
    properties26 = ld properties;
    check L148() else D46();
  L58():
    unlist = ldf unlist;
    check L72() else D14();
  L98():
    dr8 = tryDispatchBuiltin.1("[[", properties19);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L100() else L99(i22, dr8);
  L99(i26, properties21):
    i29 = ld i;
    check L101() else D27();
  L142():
    undefClasses1 = force? undefClasses;
    checkMissing(undefClasses1);
    any = ldf any in base;
    r95 = dyn any(undefClasses1);
    check L143() else D43();
  L144():
    warning = ldf warning;
    check L145() else D44();
  D9():
    deopt 40 [i2, ext6];
  D14():
    deopt 67 [];
  D27():
    deopt 111 [i26, properties21, i29];
  D43():
    deopt 179 [r95];
  D44():
    deopt 181 [];
  D46():
    deopt 190 [properties26];
  L21(i33, r53):
    c11 = `as.logical`(r53);
    if c11 then L106() else L22();
  L59():
    ext7 = force? ext6;
    checkMissing(ext7);
    c3 = `is.object`(ext7);
    if c3 then L60() else L61(i2, ext7);
  L72():
    p3 = prom<V +>{
      superProps = ld superProps;
      superProps1 = force? superProps;
      checkMissing(superProps1);
      return superProps1;
    };
    r30 = dyn unlist[, recursive](p3, FALSE);
    check L73() else D15();
  L100():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L20(i22, dx10);
  L101():
    i30 = force? i29;
    __4 = ldf `[[` in base;
    r51 = dyn __4(properties21, i30);
    goto L20(i26, r51);
  L102():
    packageSlot = ldf packageSlot;
    check L104() else D28();
  L103():
    r52 = dyn base8(<lang packageSlot(cli)>);
    goto L21(i28, r52);
  L143():
    goto L34(r95);
  L145():
    p20 = prom<V +>{
      sprintf = ldf sprintf;
      p11 = prom<V +>{
        gettext = ldf gettext;
        r96 = dyn gettext[, domain]("undefined slot classes in definition of %s: %s", "R-methods");
        return r96;
      };
      p13 = prom<V +>{
        _dQ = ldf `.dQ`;
        p12 = prom<V +>{
          __7 = ldf `@` in base;
          r98 = dyn __7(<sym ClassDef>, <sym className>);
          return r98;
        };
        r100 = dyn _dQ(p12);
        return r100;
      };
      p19 = prom<V +>{
        paste0 = ldf paste0;
        p14 = prom<V +>{
          sym12 = ldf names;
          base12 = ldf names in base;
          guard12 = `==`.4(sym12, base12);
          if guard12 then L2() else L3();
        L0(r103):
          c21 = `is.object`(r103);
          if c21 then L4() else L5(r103);
        L2():
          properties22 = ld properties;
          properties23 = force? properties22;
          checkMissing(properties23);
          names1 = ldf names in base;
          r104 = dyn names1(properties23);
          goto L0(r104);
        L3():
          r102 = dyn base12(<sym properties>);
          goto L0(r102);
        L1(dx21):
          return dx21;
        L4():
          dr18 = tryDispatchBuiltin.1("[", r103);
          dc9 = getTryDispatchBuiltinDispatched(dr18);
          if dc9 then L6() else L5(dr18);
        L5(r106):
          undefClasses2 = ld undefClasses;
          undefClasses3 = force? undefClasses2;
          __8 = ldf `[` in base;
          r107 = dyn __8(r106, undefClasses3);
          goto L1(r107);
        L6():
          dx20 = getTryDispatchBuiltinValue(dr18);
          goto L1(dx20);
        };
        p18 = prom<V +>{
          gettextf = ldf gettextf;
          p17 = prom<V +>{
            _dQ1 = ldf `.dQ`;
            p16 = prom<V +>{
              unlist1 = ldf unlist;
              p15 = prom<V +>{
                properties24 = ld properties;
                properties25 = force? properties24;
                checkMissing(properties25);
                return properties25;
              };
              r110 = dyn unlist1[, recursive](p15, FALSE);
              c22 = `is.object`(r110);
              if c22 then L1() else L2(r110);
            L0(dx23):
              return dx23;
            L1():
              dr20 = tryDispatchBuiltin.1("[", r110);
              dc10 = getTryDispatchBuiltinDispatched(dr20);
              if dc10 then L3() else L2(dr20);
            L2(r112):
              undefClasses4 = ld undefClasses;
              undefClasses5 = force? undefClasses4;
              __9 = ldf `[` in base;
              r113 = dyn __9(r112, undefClasses5);
              goto L0(r113);
            L3():
              dx22 = getTryDispatchBuiltinValue(dr20);
              goto L0(dx22);
            };
            r115 = dyn _dQ1(p16);
            return r115;
          };
          r117 = dyn gettextf("(class %s)", p17);
          return r117;
        };
        r119 = dyn paste0[, , collapse](p14, p18, ", ");
        return r119;
      };
      r121 = dyn sprintf(p11, p13, p19);
      return r121;
    };
    r123 = dyn warning[, `call.`, domain](p20, FALSE, NA_LGL);
    check L146() else D45();
  L148():
    properties27 = force? properties26;
    checkMissing(properties27);
    l23 = ld ClassDef;
    ___ = ldf `@<-`;
    check L149() else D47();
  D15():
    deopt 71 [r30];
  D28():
    deopt 117 [i28];
  D45():
    deopt 187 [r123];
  D47():
    deopt 193 [properties27, l23, properties27];
  L7(i8, dx3):
    st eClass = dx3;
    isClass = ldf isClass;
    check L64() else D11();
  L22():
    getClassDef1 = ldf getClassDef;
    check L129() else D38();
  L29(i60):
    goto L19(i60);
  L60():
    dr2 = tryDispatchBuiltin.1("[[", ext7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L62() else L61(i2, dr2);
  L61(i6, ext9):
    i9 = ld i;
    check L63() else D10();
  L73():
    st properties = r30;
    anyDuplicated = ldf anyDuplicated;
    check L74() else D16();
  L104():
    p7 = prom<V +>{
      cli = ld cli;
      cli1 = force? cli;
      checkMissing(cli1);
      return cli1;
    };
    r55 = dyn packageSlot(p7);
    check L105() else D29();
  L106():
    getClassDef = ldf getClassDef;
    check L107() else D30();
  L146():
    goto L36();
  L149():
    r125 = dyn ___(l23, NULL, "slots", properties27);
    check L150() else D48();
  D10():
    deopt 42 [i6, ext9, i9];
  D11():
    deopt 47 [i8];
  D16():
    deopt 74 [];
  D29():
    deopt 119 [i28, r55];
  D30():
    deopt 122 [i33];
  D38():
    deopt 154 [i33];
  D48():
    deopt 196 [properties27, r125];
  L62():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(i2, dx2);
  L63():
    i10 = force? i9;
    __1 = ldf `[[` in base;
    r17 = dyn __1(ext9, i10);
    goto L7(i6, r17);
  L64():
    p1 = prom<V +>{
      eClass = ld eClass;
      eClass1 = force? eClass;
      checkMissing(eClass1);
      return eClass1;
    };
    p2 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r20 = dyn isClass[, where](p1, p2);
    check L65() else D12();
  L74():
    p5 = prom<V +>{
      allNames = ldf allNames;
      p4 = prom<V +>{
        properties6 = ld properties;
        properties7 = force? properties6;
        checkMissing(properties7);
        return properties7;
      };
      r32 = dyn allNames(p4);
      return r32;
    };
    r34 = dyn anyDuplicated(p5);
    check L75() else D17();
  L105():
    c10 = `==`(r55, NULL);
    goto L21(i28, c10);
  L107():
    p8 = prom<V +>{
      cli2 = ld cli;
      cli3 = force? cli2;
      checkMissing(cli3);
      return cli3;
    };
    p9 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r58 = dyn getClassDef(p8, p9);
    check L108() else D31();
  L129():
    p10 = prom<V +>{
      cli4 = ld cli;
      cli5 = force? cli4;
      checkMissing(cli5);
      return cli5;
    };
    r85 = dyn getClassDef1(p10);
    check L130() else D39();
  L150():
    st ClassDef = r125;
    ClassDef3 = ld ClassDef;
    check L151() else D49();
  D12():
    deopt 51 [i8, r20];
  D17():
    deopt 76 [r34];
  D31():
    deopt 125 [i33, r58];
  D39():
    deopt 156 [i33, r85];
  D49():
    deopt 198 [ClassDef3];
  L65():
    c4 = `as.logical`(r20);
    if c4 then L66() else L8();
  L75():
    c6 = `as.logical`(r34);
    if c6 then L76() else L12();
  L108():
    st cliDef = r58;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L109() else L110();
  L130():
    st cliDef = r85;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L131() else L132();
  L151():
    ClassDef4 = force? ClassDef3;
    checkMissing(ClassDef4);
    popenv;
    return ClassDef4;
  L8():
    goto L10(i8);
  L10(i19):
    goto L6(i19);
  L12():
    goto L14(NULL);
  L14(dx8):
    goto L15();
  L23(i38, r60):
    c13 = `as.logical`(r60);
    if c13 then L112() else L24();
  L30(i63, r87):
    c18 = `as.logical`(r87);
    if c18 then L134() else L31();
  L66():
    __2 = ldf `@` in base;
    r21 = dyn __2(<lang getClassDef(eClass, where=where)>, <sym slots>);
    l4 = ld superProps;
    c5 = `is.object`(l4);
    if c5 then L67() else L68(i8, r21, l4);
  L76():
    duplicated = ldf duplicated;
    check L77() else D18();
  L109():
    cliDef = ld cliDef;
    check L111() else D32();
  L110():
    r59 = dyn base9(<sym cliDef>);
    goto L23(i33, r59);
  L131():
    cliDef2 = ld cliDef;
    check L133() else D40();
  L132():
    r86 = dyn base10(<sym cliDef>);
    goto L30(i33, r86);
  D18():
    deopt 78 [];
  D32():
    deopt 128 [i33, cliDef];
  D40():
    deopt 159 [i33, cliDef2];
  L9(i16, r25, dx5):
    st superProps = dx5;
    goto L10(i16);
  L24():
    __5 = ldf `@` in base;
    r67 = dyn __5(<sym cliDef>, <sym package>);
    l11 = ld properties;
    c15 = `is.object`(l11);
    if c15 then L118() else L119(i38, r67, l11, r67, l11);
  L26(i47, r66):
    goto L29(i47);
  L31():
    goto L29(i63);
  L67():
    dr4 = tryDispatchBuiltin.0("[[<-", l4, r21);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L69() else L68(i8, r21, dr4);
  L68(i14, r23, l6):
    i17 = ld i;
    check L70() else D13();
  L77():
    p6 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      properties8 = ld properties;
      properties9 = force? properties8;
      checkMissing(properties9);
      names = ldf names in base;
      r37 = dyn names(properties9);
      goto L0(r37);
    L2():
      r35 = dyn base4(<sym properties>);
      goto L0(r35);
    };
    r39 = dyn duplicated(p6);
    check L78() else D19();
  L111():
    cliDef1 = force? cliDef;
    checkMissing(cliDef1);
    c12 = `==`(cliDef1, NULL);
    goto L23(i33, c12);
  L112():
    l8 = ld undefClasses;
    c14 = `is.object`(l8);
    if c14 then L113() else L114(i38, TRUE, l8);
  L133():
    cliDef3 = force? cliDef2;
    checkMissing(cliDef3);
    c17 = `==`(cliDef3, NULL);
    goto L30(i33, c17);
  L134():
    l20 = ld undefClasses;
    c19 = `is.object`(l20);
    if c19 then L135() else L136(i63, TRUE, l20);
  D13():
    deopt 55 [i14, r23, l6, r21, i17];
  D19():
    deopt 80 [r39];
  L25(i44, r64, dx13):
    st undefClasses = dx13;
    goto L26(i44, r64);
  L27(i51, r74, l17, r75, dx15):
    packageSlot__ = ldf `packageSlot<-`;
    check L122() else D35();
  L32(i69, r91, dx19):
    st undefClasses = dx19;
    goto L29(i69);
  L69():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(i8, r21, dx4);
  L70():
    i18 = force? i17;
    checkMissing(i18);
    r26 = `+`(i18, 1.0);
    ____1 = ldf `[[<-` in base;
    r27 = dyn ____1(l6, r21, r26);
    goto L9(i14, r23, r27);
  L78():
    st duped = r39;
    properties10 = ld properties;
    check L79() else D20();
  L113():
    dr10 = tryDispatchBuiltin.0("[[<-", l8, TRUE);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L115() else L114(i38, TRUE, dr10);
  L114(i42, r62, l10):
    i45 = ld i;
    check L116() else D33();
  L118():
    dr12 = tryDispatchBuiltin.1("[[", l11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L120() else L119(i38, r67, l11, r67, dr12);
  L119(i49, r70, l14, r71, l15):
    i52 = ld i;
    check L121() else D34();
  L135():
    dr16 = tryDispatchBuiltin.0("[[<-", l20, TRUE);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L137() else L136(i63, TRUE, dr16);
  L136(i67, r89, l22):
    i70 = ld i;
    check L138() else D41();
  D20():
    deopt 82 [properties10];
  D33():
    deopt 134 [i42, r62, l10, TRUE, i45];
  D34():
    deopt 142 [i49, r70, l14, r71, l15, i52];
  D35():
    deopt 146 [i51, r74, l17, dx15, r75];
  D41():
    deopt 165 [i67, r89, l22, TRUE, i70];
  L79():
    properties11 = force? properties10;
    checkMissing(properties11);
    c7 = `is.object`(properties11);
    if c7 then L80() else L81(properties11);
  L115():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L25(i38, TRUE, dx12);
  L116():
    i46 = force? i45;
    ____2 = ldf `[[<-` in base;
    r65 = dyn ____2(l10, TRUE, i46);
    goto L25(i42, r62, r65);
  L120():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L27(i38, r67, l11, r67, dx14);
  L121():
    i53 = force? i52;
    __6 = ldf `[[` in base;
    r76 = dyn __6(l15, i53);
    goto L27(i49, r70, l14, r71, r76);
  L122():
    r77 = dyn packageSlot__(dx15, NULL, r75);
    check L123() else D36();
  L137():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L32(i63, TRUE, dx18);
  L138():
    i71 = force? i70;
    ____4 = ldf `[[<-` in base;
    r92 = dyn ____4(l22, TRUE, i71);
    goto L32(i67, r89, r92);
  D36():
    deopt 148 [i51, r74, l17, r77];
  L13(dx7):
    st properties = dx7;
    goto L14(dx7);
  L80():
    dr6 = tryDispatchBuiltin.1("[", properties11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(dr6);
  L81(properties13):
    duped = ld duped;
    check L83() else D21();
  L123():
    c16 = `is.object`(l17);
    if c16 then L124() else L125(i51, r74, l17);
  D21():
    deopt 84 [properties13, duped];
  L28(i57, r81, dx17):
    st properties = dx17;
    goto L26(i57, r81);
  L82():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx6);
  L83():
    duped1 = force? duped;
    checkMissing(duped1);
    r40 = `!`(duped1);
    __3 = ldf `[` in base;
    r41 = dyn __3(properties13, r40);
    goto L13(r41);
  L124():
    dr14 = tryDispatchBuiltin.0("[[<-", l17, r77);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L126() else L125(i51, r74, dr14);
  L125(i55, r79, l19):
    i58 = ld i;
    check L127() else D37();
  D37():
    deopt 149 [i55, r79, l19, r77, i58];
  L126():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L28(i51, r74, dx16);
  L127():
    i59 = force? i58;
    ____3 = ldf `[[<-` in base;
    r82 = dyn ____3(l19, r77, i59);
    goto L28(i55, r79, r82);
  }
}