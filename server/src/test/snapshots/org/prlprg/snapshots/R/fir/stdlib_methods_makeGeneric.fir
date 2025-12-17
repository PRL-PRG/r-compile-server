fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1822781695;
    st makeGeneric = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1822781695(f, fdef, fdefault, group, valueClass, package, signature, genericFunction, simpleInheritanceOnly) {
  (reg f:*, reg fdef:*, reg fdefault:*, reg group:*, reg valueClass:*, reg package:*, reg signature:*, reg genericFunction:*, reg simpleInheritanceOnly:*) -+> V { var f:*, var fdef:*, var fdefault:*, reg fdefault_isMissing:L, reg fdefault_orDefault:*, reg fdef1:*, reg fdef2:V, reg p:p(V +), var group:*, reg group_isMissing:L, reg group_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg r3:V, reg p1:p(V +), var valueClass:*, reg valueClass_isMissing:L, reg valueClass_orDefault:*, reg character:cls, reg r5:V, reg p2:p(V +), var package:*, reg package_isMissing:L, reg package_orDefault:*, reg getPackageName:cls, reg environment:cls, reg fdef3:*, reg fdef4:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, var genericFunction:*, reg genericFunction_isMissing:L, reg genericFunction_orDefault:*, var simpleInheritanceOnly:*, reg simpleInheritanceOnly_isMissing:L, reg simpleInheritanceOnly_orDefault:*, reg r12:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg missing:cls, reg r15:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg missing1:cls, reg r18:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg f1:*, reg f2:V, reg p6:p(V +), reg r20:V, reg p7:p(V +), reg r22:V, reg p8:p(V +), reg r24:V, reg isBaseFun:cls, reg fdefault1:*, reg fdefault2:V, reg p9:p(V +), reg r27:V, reg c2:L, reg genericForBasic:cls, reg f3:*, reg f4:V, reg p10:p(V +), reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg fun:*, reg fun1:V, reg is_function:cls, reg r32:V, reg c3:L, reg fun2:*, reg fun3:V, reg fdefault3:*, reg fdefault4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg substitute:cls, reg r37:V, reg l:*, reg body__:cls, reg r38:V, reg _NamespaceOrPackage:cls, reg package1:*, reg package2:V, reg p11:p(V +), reg r40:V, reg l1:*, reg environment__:cls, reg r41:V, reg new_env:cls, reg r43:V, reg environment1:cls, reg fdef5:*, reg fdef6:V, reg p12:p(V +), reg r45:V, reg l2:*, reg parent_env__:cls, reg r46:V, reg ev:*, reg ev1:V, reg l3:*, reg environment__1:cls, reg r47:V, reg package3:*, reg package4:V, reg l4:*, reg packageSlot__:cls, reg r48:V, reg assign:cls, reg f5:*, reg f6:V, reg p13:p(V +), reg ev2:*, reg ev3:V, reg p14:p(V +), reg r51:V, reg checkTrace:cls, reg fdef7:*, reg fdef8:V, reg p15:p(V +), reg r53:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r54:V, reg r55:V, reg valueClass1:*, reg valueClass2:V, reg length:cls, reg r56:V, reg c4:L, reg _ValidateValueClass:cls, reg fdef9:*, reg fdef10:V, reg p16:p(V +), reg f7:*, reg f8:V, reg p17:p(V +), reg valueClass3:*, reg valueClass4:V, reg p18:p(V +), reg r60:V, reg _asGroupArgument:cls, reg group1:*, reg group2:V, reg p19:p(V +), reg r63:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r64:V, reg r65:V, reg genericFunction1:*, reg genericFunction2:V, reg c5:V, reg c6:L, reg new:cls, reg r66:V, reg is:cls, reg genericFunction3:*, reg genericFunction4:V, reg p20:p(V +), reg r69:V, reg c7:L, reg genericFunction5:*, reg genericFunction6:V, reg stop1:cls, reg gettextf1:cls, reg sQuote1:cls, reg r70:V, reg p21:p(V +), reg dQuote:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r72:V, reg r73:V, reg genericFunction7:*, reg genericFunction8:V, reg class:cls, reg r74:V, reg p22:p(V +), reg r76:V, reg p23:p(V +), reg r78:V, reg p24:p(V +), reg r80:V, reg fdef11:*, reg fdef12:V, reg l5:*, reg ___:cls, reg r81:V, reg f9:*, reg f10:V, reg l6:*, reg ___1:cls, reg r82:V, reg group3:*, reg group4:V, reg l7:*, reg ___2:cls, reg r83:V, reg valueClass5:*, reg valueClass6:V, reg l8:*, reg ___3:cls, reg r84:V, reg package5:*, reg package6:V, reg l9:*, reg ___4:cls, reg r85:V, reg formalArgs:cls, reg fdef13:*, reg fdef14:V, reg p25:p(V +), reg r87:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r88:V, reg r89:V, reg signature1:*, reg signature2:V, reg c8:V, reg c9:L, reg args:*, reg args1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r90:V, reg r91:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r92:V, reg r93:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r94:V, reg r95:V, reg signature3:*, reg signature4:V, reg args3:*, reg args4:V, reg match:cls, reg r96:V, reg is_na:cls, reg r97:V, reg any:cls, reg r98:V, reg c10:L, reg stop2:cls, reg sprintf:cls, reg ngettext:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r99:V, reg r100:V, reg not_s_in_a:*, reg not_s_in_a1:V, reg sum:cls, reg r101:V, reg p26:p(V +), reg r103:V, reg p27:p(V +), reg paste:cls, reg signature5:*, reg signature6:V, reg c11:L, reg signature8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg not_s_in_a2:*, reg not_s_in_a3:V, reg __:cls, reg r105:V, reg p28:p(V +), reg r107:V, reg p29:p(V +), reg r109:V, reg p30:p(V +), reg r111:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r112:V, reg r113:V, reg signature9:*, reg signature10:V, reg match1:cls, reg r114:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r115:V, reg r116:V, reg dots:*, reg dots1:V, reg is_na1:cls, reg r117:V, reg r118:V, reg c12:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r119:V, reg r120:V, reg signature11:*, reg signature12:V, reg length1:cls, reg r121:V, reg r122:V, reg c13:L, reg signature13:*, reg signature14:V, reg c14:L, reg signature16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg dots2:*, reg dots3:V, reg r123:V, reg __1:cls, reg r124:V, reg dx4:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r125:V, reg r126:V, reg signature17:*, reg signature18:V, reg length2:cls, reg r127:V, reg r128:V, reg c15:L, reg stop3:cls, reg r129:V, reg simpleInheritanceOnly1:*, reg simpleInheritanceOnly2:V, reg l10:*, reg attr__:cls, reg r131:V, reg signature19:*, reg signature20:V, reg l11:*, reg ___5:cls, reg r132:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r133:V, reg r134:V, reg fdefault5:*, reg fdefault6:V, reg c16:V, reg c17:L, reg checkTrace1:cls, reg fdefault7:*, reg fdefault8:V, reg p31:p(V +), reg r137:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r138:V, reg r139:V, reg formalArgs1:cls, reg fdefault9:*, reg fdefault10:V, reg p32:p(V +), reg r141:V, reg formalArgs2:cls, reg fdef15:*, reg fdef16:V, reg p33:p(V +), reg r143:V, reg identical:cls, reg r144:V, reg r145:V, reg c18:L, reg c20:V, reg is_primitive:cls, reg fdefault11:*, reg fdefault12:V, reg p34:p(V +), reg r147:V, reg r148:V, reg c21:L, reg c22:V, reg c24:L, reg stop4:cls, reg sprintf1:cls, reg ngettext1:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r149:V, reg r150:V, reg fdef17:*, reg fdef18:V, reg length3:cls, reg r151:V, reg p35:p(V +), reg r153:V, reg p36:p(V +), reg f11:*, reg f12:V, reg p37:p(V +), reg paste1:cls, reg formalArgs3:cls, reg fdef19:*, reg fdef20:V, reg p38:p(V +), reg r157:V, reg p39:p(V +), reg r159:V, reg p40:p(V +), reg paste2:cls, reg formalArgs4:cls, reg fdefault13:*, reg fdefault14:V, reg p41:p(V +), reg r162:V, reg p42:p(V +), reg r164:V, reg p43:p(V +), reg r166:V, reg p44:p(V +), reg r168:V, reg asMethodDefinition:cls, reg fdefault15:*, reg fdefault16:V, reg p45:p(V +), reg value:*, reg value1:V, reg p46:p(V +), reg r172:V, reg is1:cls, reg fdefault17:*, reg fdefault18:V, reg p47:p(V +), reg r174:V, reg c25:L, reg __2:cls, reg r175:V, reg l12:*, reg ___6:cls, reg r176:V, reg fdefault19:*, reg fdefault20:V, reg l13:*, reg ___7:cls, reg r177:V, reg assign1:cls, reg fdefault21:*, reg fdefault22:V, reg p48:p(V +), reg ev4:*, reg ev5:V, reg p49:p(V +), reg r180:V, reg _setupMethodsTables:cls, reg value2:*, reg value3:V, reg p50:p(V +), reg r182:V, reg generic_skeleton:cls, reg f13:*, reg f14:V, reg p51:p(V +), reg fdef21:*, reg fdef22:V, reg p52:p(V +), reg fdefault23:*, reg fdefault24:V, reg p53:p(V +), reg r186:V, reg l14:*, reg ___8:cls, reg r187:V, reg value4:*, reg value5:V |
    mkenv;
    st f = f;
    st fdef = fdef;
    fdefault_isMissing = missing.0(fdefault);
    if fdefault_isMissing then L0() else L1(fdefault);
  L0():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    goto L1(p);
  L1(fdefault_orDefault):
    st fdefault = fdefault_orDefault;
    group_isMissing = missing.0(group);
    if group_isMissing then L2() else L3(group);
  L2():
    p1 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      list = ldf list in base;
      r3 = dyn list();
      goto L0(r3);
    L2():
      r1 = dyn base();
      goto L0(r1);
    };
    goto L3(p1);
  L3(group_orDefault):
    st group = group_orDefault;
    valueClass_isMissing = missing.0(valueClass);
    if valueClass_isMissing then L4() else L5(valueClass);
  L4():
    p2 = prom<V +>{
      character = ldf character;
      r5 = dyn character();
      return r5;
    };
    goto L5(p2);
  L5(valueClass_orDefault):
    st valueClass = valueClass_orDefault;
    package_isMissing = missing.0(package);
    if package_isMissing then L6() else L7(package);
  L6():
    p5 = prom<V +>{
      getPackageName = ldf getPackageName;
      p4 = prom<V +>{
        environment = ldf environment;
        p3 = prom<V +>{
          fdef3 = ld fdef;
          fdef4 = force? fdef3;
          checkMissing(fdef4);
          return fdef4;
        };
        r8 = dyn environment(p3);
        return r8;
      };
      r10 = dyn getPackageName(p4);
      return r10;
    };
    goto L7(p5);
  L7(package_orDefault):
    st package = package_orDefault;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L8(NULL) else L8(signature);
  L8(signature_orDefault):
    st signature = signature_orDefault;
    genericFunction_isMissing = missing.0(genericFunction);
    if genericFunction_isMissing then L9(NULL) else L9(genericFunction);
  L9(genericFunction_orDefault):
    st genericFunction = genericFunction_orDefault;
    simpleInheritanceOnly_isMissing = missing.0(simpleInheritanceOnly);
    if simpleInheritanceOnly_isMissing then L10(NULL) else L10(simpleInheritanceOnly);
  L10(simpleInheritanceOnly_orDefault):
    st simpleInheritanceOnly = simpleInheritanceOnly_orDefault;
    r12 = clos inner2274720891;
    st checkTrace = r12;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L55() else L56();
  L11(r14):
    c = `as.logical`(r14);
    if c then L57() else L12();
  L55():
    missing = ldf missing in base;
    r15 = dyn missing(<sym fdef>);
    goto L11(r15);
  L56():
    r13 = dyn base1(<sym fdef>);
    goto L11(r13);
  L12():
    goto L21();
  L21():
    new_env = ldf `new.env`;
    check L88() else D16();
  L57():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L58() else L59();
  D16():
    deopt 60 [];
  L13(r17):
    c1 = `as.logical`(r17);
    if c1 then L60() else L14();
  L58():
    missing1 = ldf missing in base;
    r18 = dyn missing1(<sym fdefault>);
    goto L13(r18);
  L59():
    r16 = dyn base2(<sym fdefault>);
    goto L13(r16);
  L88():
    r43 = dyn new_env();
    check L89() else D17();
  D17():
    deopt 61 [r43];
  L14():
    isBaseFun = ldf isBaseFun;
    check L64() else D2();
  L15():
    fdefault3 = ld fdefault;
    check L78() else D9();
  L60():
    stop = ldf stop;
    check L61() else D0();
  L89():
    st ev = r43;
    environment1 = ldf environment;
    check L90() else D18();
  D0():
    deopt 10 [];
  D2():
    deopt 16 [];
  D9():
    deopt 37 [fdefault3];
  D18():
    deopt 64 [];
  L61():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          f1 = ld f;
          f2 = force? f1;
          checkMissing(f2);
          return f2;
        };
        r20 = dyn sQuote(p6);
        return r20;
      };
      r22 = dyn gettextf("must supply either a generic function or a function as default for %s", p7);
      return r22;
    };
    r24 = dyn stop[, domain](p8, NA_LGL);
    check L62() else D1();
  L64():
    p9 = prom<V +>{
      fdefault1 = ld fdefault;
      fdefault2 = force? fdefault1;
      checkMissing(fdefault2);
      return fdefault2;
    };
    r27 = dyn isBaseFun(p9);
    check L65() else D3();
  L78():
    fdefault4 = force? fdefault3;
    checkMissing(fdefault4);
    st fdef = fdefault4;
    sym4 = ldf substitute;
    base4 = ldf substitute in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L79() else L80();
  L90():
    p12 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    r45 = dyn environment1(p12);
    check L91() else D19();
  D1():
    deopt 14 [r24];
  D3():
    deopt 18 [r27];
  D19():
    deopt 66 [r45];
  L20(r36):
    l = ld fdef;
    body__ = ldf `body<-`;
    check L81() else D10();
  L62():
    goto L15();
  L65():
    c2 = `as.logical`(r27);
    if c2 then L66() else L16();
  L79():
    substitute = ldf substitute in base;
    r37 = dyn substitute(<lang standardGeneric(NAME)>, <lang list(NAME=f)>);
    goto L20(r37);
  L80():
    r35 = dyn base4(<lang standardGeneric(NAME)>, <lang list(NAME=f)>);
    goto L20(r35);
  L91():
    l2 = ld ev;
    parent_env__ = ldf `parent.env<-`;
    check L92() else D20();
  D10():
    deopt 44 [r36, l, r36];
  D20():
    deopt 68 [r45, l2, r45];
  L16():
    goto L15();
  L66():
    genericForBasic = ldf genericForBasic;
    check L67() else D4();
  L81():
    r38 = dyn body__(l, NULL, r36);
    check L82() else D11();
  L92():
    r46 = dyn parent_env__(l2, NULL, r45);
    check L93() else D21();
  D4():
    deopt 20 [];
  D11():
    deopt 46 [r36, r38];
  D21():
    deopt 70 [r45, r46];
  L67():
    p10 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r29 = dyn genericForBasic(p10);
    check L68() else D5();
  L82():
    st fdef = r38;
    _NamespaceOrPackage = ldf `.NamespaceOrPackage`;
    check L83() else D12();
  L93():
    st ev = r46;
    ev = ld ev;
    check L94() else D22();
  D5():
    deopt 22 [r29];
  D12():
    deopt 49 [];
  D22():
    deopt 72 [ev];
  L68():
    st fun = r29;
    sym3 = ldf `is.function`;
    base3 = ldf `is.function` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L69() else L70();
  L83():
    p11 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    r40 = dyn _NamespaceOrPackage(p11);
    check L84() else D13();
  L94():
    ev1 = force? ev;
    checkMissing(ev1);
    l3 = ld fdef;
    environment__1 = ldf `environment<-`;
    check L95() else D23();
  D13():
    deopt 51 [r40];
  D23():
    deopt 75 [ev1, l3, ev1];
  L17(r31):
    c3 = `as.logical`(r31);
    if c3 then L73() else L18();
  L69():
    fun = ld fun;
    check L71() else D6();
  L70():
    r30 = dyn base3(<sym fun>);
    goto L17(r30);
  L84():
    l1 = ld fdef;
    environment__ = ldf `environment<-`;
    check L85() else D14();
  L95():
    r47 = dyn environment__1(l3, NULL, ev1);
    check L96() else D24();
  D6():
    deopt 26 [fun];
  D14():
    deopt 53 [r40, l1, r40];
  D24():
    deopt 77 [ev1, r47];
  L18():
    goto L15();
  L71():
    fun1 = force? fun;
    checkMissing(fun1);
    is_function = ldf `is.function` in base;
    r32 = dyn is_function(fun1);
    check L72() else D7();
  L73():
    fun2 = ld fun;
    check L74() else D8();
  L85():
    r41 = dyn environment__(l1, NULL, r40);
    check L86() else D15();
  L96():
    st fdef = r47;
    package3 = ld package;
    check L97() else D25();
  D7():
    deopt 29 [r32];
  D8():
    deopt 30 [fun2];
  D15():
    deopt 55 [r40, r41];
  D25():
    deopt 79 [package3];
  L72():
    goto L17(r32);
  L74():
    fun3 = force? fun2;
    checkMissing(fun3);
    popenv;
    return fun3;
  L86():
    st fdef = r41;
    goto L21();
  L97():
    package4 = force? package3;
    checkMissing(package4);
    l4 = ld f;
    packageSlot__ = ldf `packageSlot<-`;
    check L98() else D26();
  D26():
    deopt 82 [package4, l4, package4];
  L98():
    r48 = dyn packageSlot__(l4, NULL, package4);
    check L99() else D27();
  D27():
    deopt 84 [package4, r48];
  L99():
    st f = r48;
    assign = ldf assign;
    check L100() else D28();
  D28():
    deopt 87 [];
  L100():
    p13 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p14 = prom<V +>{
      ev2 = ld ev;
      ev3 = force? ev2;
      checkMissing(ev3);
      return ev3;
    };
    r51 = dyn assign[, , envir](".Generic", p13, p14);
    check L101() else D29();
  D29():
    deopt 92 [r51];
  L101():
    checkTrace = ldf checkTrace;
    check L102() else D30();
  D30():
    deopt 94 [];
  L102():
    p15 = prom<V +>{
      fdef7 = ld fdef;
      fdef8 = force? fdef7;
      checkMissing(fdef8);
      return fdef8;
    };
    r53 = dyn checkTrace(p15);
    check L103() else D31();
  D31():
    deopt 96 [r53];
  L103():
    st fdef = r53;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L104() else L105();
  L22(r55):
    c4 = `as.logical`(r55);
    if c4 then L108() else L23();
  L104():
    valueClass1 = ld valueClass;
    check L106() else D32();
  L105():
    r54 = dyn base5(<sym valueClass>);
    goto L22(r54);
  D32():
    deopt 100 [valueClass1];
  L23():
    goto L24();
  L24():
    _asGroupArgument = ldf `.asGroupArgument`;
    check L112() else D36();
  L106():
    valueClass2 = force? valueClass1;
    checkMissing(valueClass2);
    length = ldf length in base;
    r56 = dyn length(valueClass2);
    check L107() else D33();
  L108():
    _ValidateValueClass = ldf `.ValidateValueClass`;
    check L109() else D34();
  D33():
    deopt 103 [r56];
  D34():
    deopt 105 [];
  D36():
    deopt 114 [];
  L107():
    goto L22(r56);
  L109():
    p16 = prom<V +>{
      fdef9 = ld fdef;
      fdef10 = force? fdef9;
      checkMissing(fdef10);
      return fdef10;
    };
    p17 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    p18 = prom<V +>{
      valueClass3 = ld valueClass;
      valueClass4 = force? valueClass3;
      checkMissing(valueClass4);
      return valueClass4;
    };
    r60 = dyn _ValidateValueClass(p16, p17, p18);
    check L110() else D35();
  L112():
    p19 = prom<V +>{
      group1 = ld group;
      group2 = force? group1;
      checkMissing(group2);
      return group2;
    };
    r63 = dyn _asGroupArgument(p19);
    check L113() else D37();
  D35():
    deopt 109 [r60];
  D37():
    deopt 116 [r63];
  L110():
    st fdef = r60;
    goto L24();
  L113():
    st group = r63;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L114() else L115();
  L25(r65):
    c6 = `as.logical`(r65);
    if c6 then L117() else L26();
  L114():
    genericFunction1 = ld genericFunction;
    check L116() else D38();
  L115():
    r64 = dyn base6(<sym genericFunction>);
    goto L25(r64);
  D38():
    deopt 119 [genericFunction1];
  L26():
    is = ldf is;
    check L121() else D41();
  L27():
    fdef11 = ld fdef;
    check L128() else D46();
  L116():
    genericFunction2 = force? genericFunction1;
    checkMissing(genericFunction2);
    c5 = `==`(genericFunction2, NULL);
    goto L25(c5);
  L117():
    new = ldf new;
    check L118() else D39();
  D39():
    deopt 123 [];
  D41():
    deopt 128 [];
  D46():
    deopt 141 [fdef11];
  L118():
    r66 = dyn new("standardGeneric");
    check L119() else D40();
  L121():
    p20 = prom<V +>{
      genericFunction3 = ld genericFunction;
      genericFunction4 = force? genericFunction3;
      checkMissing(genericFunction4);
      return genericFunction4;
    };
    r69 = dyn is(p20, "genericFunction");
    check L122() else D42();
  L128():
    fdef12 = force? fdef11;
    checkMissing(fdef12);
    l5 = ld value;
    ___ = ldf `@<-`;
    check L129() else D47();
  D40():
    deopt 125 [r66];
  D42():
    deopt 131 [r69];
  D47():
    deopt 144 [fdef12, l5, fdef12];
  L119():
    st value = r66;
    goto L27();
  L122():
    c7 = `as.logical`(r69);
    if c7 then L123() else L28();
  L129():
    r81 = dyn ___(l5, NULL, ".Data", fdef12);
    check L130() else D48();
  D48():
    deopt 147 [fdef12, r81];
  L28():
    stop1 = ldf stop;
    check L126() else D44();
  L123():
    genericFunction5 = ld genericFunction;
    check L124() else D43();
  L130():
    st value = r81;
    f9 = ld f;
    check L131() else D49();
  D43():
    deopt 132 [genericFunction5];
  D44():
    deopt 136 [];
  D49():
    deopt 149 [f9];
  L124():
    genericFunction6 = force? genericFunction5;
    checkMissing(genericFunction6);
    st value = genericFunction6;
    goto L27();
  L126():
    p24 = prom<V +>{
      gettextf1 = ldf gettextf;
      p21 = prom<V +>{
        sQuote1 = ldf sQuote;
        r70 = dyn sQuote1("genericFunction");
        return r70;
      };
      p23 = prom<V +>{
        dQuote = ldf dQuote;
        p22 = prom<V +>{
          sym7 = ldf class;
          base7 = ldf class in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r73):
          return r73;
        L1():
          genericFunction7 = ld genericFunction;
          genericFunction8 = force? genericFunction7;
          checkMissing(genericFunction8);
          class = ldf class in base;
          r74 = dyn class(genericFunction8);
          goto L0(r74);
        L2():
          r72 = dyn base7(<sym genericFunction>);
          goto L0(r72);
        };
        r76 = dyn dQuote(p22);
        return r76;
      };
      r78 = dyn gettextf1("the %s argument must be NULL or a generic function object; got an object of class %s", p21, p23);
      return r78;
    };
    r80 = dyn stop1[, domain](p24, NA_LGL);
    check L127() else D45();
  L131():
    f10 = force? f9;
    checkMissing(f10);
    l6 = ld value;
    ___1 = ldf `@<-`;
    check L132() else D50();
  D45():
    deopt 140 [r80];
  D50():
    deopt 152 [f10, l6, f10];
  L127():
    goto L27();
  L132():
    r82 = dyn ___1(l6, NULL, "generic", f10);
    check L133() else D51();
  D51():
    deopt 155 [f10, r82];
  L133():
    st value = r82;
    group3 = ld group;
    check L134() else D52();
  D52():
    deopt 157 [group3];
  L134():
    group4 = force? group3;
    checkMissing(group4);
    l7 = ld value;
    ___2 = ldf `@<-`;
    check L135() else D53();
  D53():
    deopt 160 [group4, l7, group4];
  L135():
    r83 = dyn ___2(l7, NULL, "group", group4);
    check L136() else D54();
  D54():
    deopt 163 [group4, r83];
  L136():
    st value = r83;
    valueClass5 = ld valueClass;
    check L137() else D55();
  D55():
    deopt 165 [valueClass5];
  L137():
    valueClass6 = force? valueClass5;
    checkMissing(valueClass6);
    l8 = ld value;
    ___3 = ldf `@<-`;
    check L138() else D56();
  D56():
    deopt 168 [valueClass6, l8, valueClass6];
  L138():
    r84 = dyn ___3(l8, NULL, "valueClass", valueClass6);
    check L139() else D57();
  D57():
    deopt 171 [valueClass6, r84];
  L139():
    st value = r84;
    package5 = ld package;
    check L140() else D58();
  D58():
    deopt 173 [package5];
  L140():
    package6 = force? package5;
    checkMissing(package6);
    l9 = ld value;
    ___4 = ldf `@<-`;
    check L141() else D59();
  D59():
    deopt 176 [package6, l9, package6];
  L141():
    r85 = dyn ___4(l9, NULL, "package", package6);
    check L142() else D60();
  D60():
    deopt 179 [package6, r85];
  L142():
    st value = r85;
    formalArgs = ldf formalArgs;
    check L143() else D61();
  D61():
    deopt 182 [];
  L143():
    p25 = prom<V +>{
      fdef13 = ld fdef;
      fdef14 = force? fdef13;
      checkMissing(fdef14);
      return fdef14;
    };
    r87 = dyn formalArgs(p25);
    check L144() else D62();
  D62():
    deopt 184 [r87];
  L144():
    st args = r87;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L145() else L146();
  L29(r89):
    c9 = `as.logical`(r89);
    if c9 then L148() else L30();
  L145():
    signature1 = ld signature;
    check L147() else D63();
  L146():
    r88 = dyn base8(<sym signature>);
    goto L29(r88);
  D63():
    deopt 187 [signature1];
  L30():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L151() else L152();
  L31():
    sym13 = ldf match;
    base13 = ldf match in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L166() else L167();
  L147():
    signature2 = force? signature1;
    checkMissing(signature2);
    c8 = `==`(signature2, NULL);
    goto L29(c8);
  L148():
    args = ld args;
    check L149() else D64();
  D64():
    deopt 190 [args];
  L32(r91):
    c10 = `as.logical`(r91);
    if c10 then L162() else L35();
  L36(r113):
    st dots = r113;
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L170() else L171();
  L149():
    args1 = force? args;
    checkMissing(args1);
    st signature = args1;
    goto L31();
  L151():
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L153() else L154();
  L152():
    r90 = dyn base9(<lang `<-`(not.s.in.a, is.na(match(signature, args)))>);
    goto L32(r90);
  L166():
    signature9 = ld signature;
    check L168() else D72();
  L167():
    r112 = dyn base13("...", <sym signature>);
    goto L36(r112);
  D72():
    deopt 223 [signature9];
  L33(r93):
    st `not.s.in.a` = r93;
    any = ldf any in base;
    r98 = dyn any(r93);
    check L161() else D69();
  L35():
    goto L31();
  L37(r116):
    r118 = `!`(r116);
    c12 = `as.logical`(r118);
    if c12 then L174() else L38();
  L153():
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L155() else L156();
  L154():
    r92 = dyn base10(<lang match(signature, args)>);
    goto L33(r92);
  L162():
    stop2 = ldf stop;
    check L163() else D70();
  L168():
    signature10 = force? signature9;
    checkMissing(signature10);
    match1 = ldf match in base;
    r114 = dyn match1("...", signature10, NA_INT, NULL);
    check L169() else D73();
  L170():
    dots = ld dots;
    check L172() else D74();
  L171():
    r115 = dyn base14(<sym dots>);
    goto L37(r115);
  D69():
    deopt 211 [r98];
  D70():
    deopt 213 [];
  D73():
    deopt 228 [r114];
  D74():
    deopt 232 [dots];
  L34(r95):
    is_na = ldf `is.na` in base;
    r97 = dyn is_na(r95);
    check L160() else D68();
  L38():
    goto L43();
  L43():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L187() else L188();
  L155():
    signature3 = ld signature;
    check L157() else D65();
  L156():
    r94 = dyn base11(<sym signature>, <sym args>);
    goto L34(r94);
  L161():
    goto L32(r98);
  L163():
    p30 = prom<V +>{
      sprintf = ldf sprintf;
      p27 = prom<V +>{
        ngettext = ldf ngettext;
        p26 = prom<V +>{
          sym12 = ldf sum;
          base12 = ldf sum in base;
          guard12 = `==`.4(sym12, base12);
          if guard12 then L1() else L2();
        L0(r100):
          return r100;
        L1():
          not_s_in_a = ld `not.s.in.a`;
          not_s_in_a1 = force? not_s_in_a;
          checkMissing(not_s_in_a1);
          sum = ldf sum in base;
          r101 = dyn sum(not_s_in_a1);
          goto L0(r101);
        L2():
          r99 = dyn base12(<sym not.s.in.a>);
          goto L0(r99);
        };
        r103 = dyn ngettext(p26, "non-argument found in the signature: %s", "non-arguments found in the signature: %s");
        return r103;
      };
      p29 = prom<V +>{
        paste = ldf paste;
        p28 = prom<V +>{
          signature5 = ld signature;
          signature6 = force? signature5;
          checkMissing(signature6);
          c11 = `is.object`(signature6);
          if c11 then L1() else L2(signature6);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", signature6);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(signature8):
          not_s_in_a2 = ld `not.s.in.a`;
          not_s_in_a3 = force? not_s_in_a2;
          __ = ldf `[` in base;
          r105 = dyn __(signature8, not_s_in_a3);
          goto L0(r105);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r107 = dyn paste[, collapse](p28, ", ");
        return r107;
      };
      r109 = dyn sprintf(p27, p29);
      return r109;
    };
    r111 = dyn stop2[, domain](p30, NA_LGL);
    check L164() else D71();
  L169():
    goto L36(r114);
  L172():
    dots1 = force? dots;
    checkMissing(dots1);
    is_na1 = ldf `is.na` in base;
    r117 = dyn is_na1(dots1);
    check L173() else D75();
  L174():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L175() else L176();
  D65():
    deopt 199 [signature3];
  D68():
    deopt 208 [r97];
  D71():
    deopt 217 [r111];
  D75():
    deopt 235 [r117];
  L39(r120):
    r122 = `>`(r120, 1);
    c13 = `as.logical`(r122);
    if c13 then L179() else L40();
  L44(r126):
    r128 = `==`(r126, 0);
    c15 = `as.logical`(r128);
    if c15 then L191() else L45();
  L157():
    signature4 = force? signature3;
    checkMissing(signature4);
    args3 = ld args;
    check L158() else D66();
  L160():
    goto L33(r97);
  L164():
    goto L31();
  L173():
    goto L37(r117);
  L175():
    signature11 = ld signature;
    check L177() else D76();
  L176():
    r119 = dyn base15(<sym signature>);
    goto L39(r119);
  L187():
    signature17 = ld signature;
    check L189() else D80();
  L188():
    r125 = dyn base16(<sym signature>);
    goto L44(r125);
  D66():
    deopt 201 [args3];
  D76():
    deopt 239 [signature11];
  D80():
    deopt 258 [signature17];
  L40():
    goto L42(NULL);
  L42(dx4):
    goto L43();
  L45():
    goto L46();
  L46():
    simpleInheritanceOnly1 = ld simpleInheritanceOnly;
    check L195() else D84();
  L158():
    args4 = force? args3;
    checkMissing(args4);
    match = ldf match in base;
    r96 = dyn match(signature4, args4, NA_INT, NULL);
    check L159() else D67();
  L177():
    signature12 = force? signature11;
    checkMissing(signature12);
    length1 = ldf length in base;
    r121 = dyn length1(signature12);
    check L178() else D77();
  L179():
    signature13 = ld signature;
    check L180() else D78();
  L189():
    signature18 = force? signature17;
    checkMissing(signature18);
    length2 = ldf length in base;
    r127 = dyn length2(signature18);
    check L190() else D81();
  L191():
    stop3 = ldf stop;
    check L192() else D82();
  D67():
    deopt 206 [r96];
  D77():
    deopt 242 [r121];
  D78():
    deopt 245 [signature13];
  D81():
    deopt 261 [r127];
  D82():
    deopt 265 [];
  D84():
    deopt 270 [simpleInheritanceOnly1];
  L159():
    goto L34(r96);
  L178():
    goto L39(r121);
  L180():
    signature14 = force? signature13;
    checkMissing(signature14);
    c14 = `is.object`(signature14);
    if c14 then L181() else L182(signature14);
  L190():
    goto L44(r127);
  L192():
    r129 = dyn stop3("no suitable arguments to dispatch methods in this function");
    check L193() else D83();
  L195():
    simpleInheritanceOnly2 = force? simpleInheritanceOnly1;
    checkMissing(simpleInheritanceOnly2);
    l10 = ld signature;
    attr__ = ldf `attr<-`;
    check L196() else D85();
  D83():
    deopt 267 [r129];
  D85():
    deopt 273 [simpleInheritanceOnly2, l10, simpleInheritanceOnly2];
  L41(dx3):
    st signature = dx3;
    goto L42(dx3);
  L181():
    dr2 = tryDispatchBuiltin.1("[", signature14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L183() else L182(dr2);
  L182(signature16):
    dots2 = ld dots;
    check L184() else D79();
  L193():
    goto L46();
  L196():
    r131 = dyn attr__(l10, NULL, "simpleOnly", simpleInheritanceOnly2);
    check L197() else D86();
  D79():
    deopt 247 [signature16, dots2];
  D86():
    deopt 276 [simpleInheritanceOnly2, r131];
  L183():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L41(dx2);
  L184():
    dots3 = force? dots2;
    checkMissing(dots3);
    r123 = `-`(<missing>, dots3);
    __1 = ldf `[` in base;
    r124 = dyn __1(signature16, r123);
    goto L41(r124);
  L197():
    st signature = r131;
    signature19 = ld signature;
    check L198() else D87();
  D87():
    deopt 278 [signature19];
  L198():
    signature20 = force? signature19;
    checkMissing(signature20);
    l11 = ld value;
    ___5 = ldf `@<-`;
    check L199() else D88();
  D88():
    deopt 281 [signature20, l11, signature20];
  L199():
    r132 = dyn ___5(l11, NULL, "signature", signature20);
    check L200() else D89();
  D89():
    deopt 284 [signature20, r132];
  L200():
    st value = r132;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L201() else L202();
  L47(r134):
    c17 = `as.logical`(r134);
    if c17 then L204() else L48();
  L201():
    fdefault5 = ld fdefault;
    check L203() else D90();
  L202():
    r133 = dyn base17(<sym fdefault>);
    goto L47(r133);
  D90():
    deopt 287 [fdefault5];
  L48():
    checkTrace1 = ldf checkTrace;
    check L206() else D91();
  L49():
    fdefault19 = ld fdefault;
    check L231() else D108();
  L203():
    fdefault6 = force? fdefault5;
    checkMissing(fdefault6);
    c16 = `==`(fdefault6, NULL);
    goto L47(c16);
  L204():
    goto L49();
  D91():
    deopt 293 [];
  D108():
    deopt 353 [fdefault19];
  L206():
    p31 = prom<V +>{
      fdefault7 = ld fdefault;
      fdefault8 = force? fdefault7;
      checkMissing(fdefault8);
      return fdefault8;
    };
    r137 = dyn checkTrace1(p31);
    check L207() else D92();
  L231():
    fdefault20 = force? fdefault19;
    checkMissing(fdefault20);
    l13 = ld value;
    ___7 = ldf `@<-`;
    check L232() else D109();
  D92():
    deopt 295 [r137];
  D109():
    deopt 356 [fdefault20, l13, fdefault20];
  L207():
    st fdefault = r137;
    sym18 = ldf identical;
    base18 = ldf identical in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L208() else L209();
  L232():
    r177 = dyn ___7(l13, NULL, "default", fdefault20);
    check L233() else D110();
  D110():
    deopt 359 [fdefault20, r177];
  L50(r139):
    r145 = `!`(r139);
    c18 = `as.logical`(r145);
    if c18 then L215() else L51(c18);
  L208():
    formalArgs1 = ldf formalArgs;
    check L210() else D93();
  L209():
    r138 = dyn base18(<lang formalArgs(fdefault)>, <lang formalArgs(fdef)>);
    goto L50(r138);
  L233():
    st value = r177;
    assign1 = ldf assign;
    check L234() else D111();
  D93():
    deopt 300 [];
  D111():
    deopt 362 [];
  L51(c20):
    c24 = `as.logical`(c20);
    if c24 then L219() else L52();
  L210():
    p32 = prom<V +>{
      fdefault9 = ld fdefault;
      fdefault10 = force? fdefault9;
      checkMissing(fdefault10);
      return fdefault10;
    };
    r141 = dyn formalArgs1(p32);
    check L211() else D94();
  L215():
    is_primitive = ldf `is.primitive`;
    check L216() else D98();
  L234():
    p48 = prom<V +>{
      fdefault21 = ld fdefault;
      fdefault22 = force? fdefault21;
      checkMissing(fdefault22);
      return fdefault22;
    };
    p49 = prom<V +>{
      ev4 = ld ev;
      ev5 = force? ev4;
      checkMissing(ev5);
      return ev5;
    };
    r180 = dyn assign1[, , envir](".Methods", p48, p49);
    check L235() else D112();
  D94():
    deopt 302 [r141];
  D98():
    deopt 318 [c18];
  D112():
    deopt 367 [r180];
  L52():
    goto L53();
  L53():
    asMethodDefinition = ldf asMethodDefinition;
    check L223() else D102();
  L211():
    formalArgs2 = ldf formalArgs;
    check L212() else D95();
  L216():
    p34 = prom<V +>{
      fdefault11 = ld fdefault;
      fdefault12 = force? fdefault11;
      checkMissing(fdefault12);
      return fdefault12;
    };
    r147 = dyn is_primitive(p34);
    check L217() else D99();
  L219():
    stop4 = ldf stop;
    check L220() else D100();
  L235():
    _setupMethodsTables = ldf `.setupMethodsTables`;
    check L236() else D113();
  D95():
    deopt 304 [];
  D99():
    deopt 320 [c18, r147];
  D100():
    deopt 324 [];
  D102():
    deopt 332 [];
  D113():
    deopt 369 [];
  L212():
    p33 = prom<V +>{
      fdef15 = ld fdef;
      fdef16 = force? fdef15;
      checkMissing(fdef16);
      return fdef16;
    };
    r143 = dyn formalArgs2(p33);
    check L213() else D96();
  L217():
    r148 = `!`(r147);
    c21 = `as.logical`(r148);
    c22 = `&&`(c18, c21);
    goto L51(c22);
  L220():
    p44 = prom<V +>{
      sprintf1 = ldf sprintf;
      p36 = prom<V +>{
        ngettext1 = ldf ngettext;
        p35 = prom<V +>{
          sym19 = ldf length;
          base19 = ldf length in base;
          guard19 = `==`.4(sym19, base19);
          if guard19 then L1() else L2();
        L0(r150):
          return r150;
        L1():
          fdef17 = ld fdef;
          fdef18 = force? fdef17;
          checkMissing(fdef18);
          length3 = ldf length in base;
          r151 = dyn length3(fdef18);
          goto L0(r151);
        L2():
          r149 = dyn base19(<sym fdef>);
          goto L0(r149);
        };
        r153 = dyn ngettext1(p35, "the formal argument of the generic function for %s (%s) differs from that of the non-generic to be used as the default (%s)", "the formal arguments of the generic function for %s (%s) differ from those of the non-generic to be used as the default (%s)");
        return r153;
      };
      p37 = prom<V +>{
        f11 = ld f;
        f12 = force? f11;
        checkMissing(f12);
        return f12;
      };
      p40 = prom<V +>{
        paste1 = ldf paste;
        p39 = prom<V +>{
          formalArgs3 = ldf formalArgs;
          p38 = prom<V +>{
            fdef19 = ld fdef;
            fdef20 = force? fdef19;
            checkMissing(fdef20);
            return fdef20;
          };
          r157 = dyn formalArgs3(p38);
          return r157;
        };
        r159 = dyn paste1[, collapse](p39, ", ");
        return r159;
      };
      p43 = prom<V +>{
        paste2 = ldf paste;
        p42 = prom<V +>{
          formalArgs4 = ldf formalArgs;
          p41 = prom<V +>{
            fdefault13 = ld fdefault;
            fdefault14 = force? fdefault13;
            checkMissing(fdefault14);
            return fdefault14;
          };
          r162 = dyn formalArgs4(p41);
          return r162;
        };
        r164 = dyn paste2[, collapse](p42, ", ");
        return r164;
      };
      r166 = dyn sprintf1(p36, p37, p40, p43);
      return r166;
    };
    r168 = dyn stop4[, domain](p44, NA_LGL);
    check L221() else D101();
  L223():
    p45 = prom<V +>{
      fdefault15 = ld fdefault;
      fdefault16 = force? fdefault15;
      checkMissing(fdefault16);
      return fdefault16;
    };
    p46 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r172 = dyn asMethodDefinition[, fdef](p45, p46);
    check L224() else D103();
  L236():
    p50 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    r182 = dyn _setupMethodsTables(p50, TRUE);
    check L237() else D114();
  D96():
    deopt 306 [r143];
  D101():
    deopt 328 [r168];
  D103():
    deopt 336 [r172];
  D114():
    deopt 372 [r182];
  L213():
    identical = ldf identical in base;
    r144 = dyn identical(r141, r143, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L214() else D97();
  L221():
    goto L53();
  L224():
    st fdefault = r172;
    is1 = ldf is;
    check L225() else D104();
  L237():
    generic_skeleton = ldf `generic.skeleton`;
    check L238() else D115();
  D97():
    deopt 315 [r144];
  D104():
    deopt 339 [];
  D115():
    deopt 374 [];
  L214():
    goto L50(r144);
  L225():
    p47 = prom<V +>{
      fdefault17 = ld fdefault;
      fdefault18 = force? fdefault17;
      checkMissing(fdefault18);
      return fdefault18;
    };
    r174 = dyn is1(p47, "MethodDefinition");
    check L226() else D105();
  L238():
    p51 = prom<V +>{
      f13 = ld f;
      f14 = force? f13;
      checkMissing(f14);
      return f14;
    };
    p52 = prom<V +>{
      fdef21 = ld fdef;
      fdef22 = force? fdef21;
      checkMissing(fdef22);
      return fdef22;
    };
    p53 = prom<V +>{
      fdefault23 = ld fdefault;
      fdefault24 = force? fdefault23;
      checkMissing(fdefault24);
      return fdefault24;
    };
    r186 = dyn generic_skeleton(p51, p52, p53);
    check L239() else D116();
  D105():
    deopt 342 [r174];
  D116():
    deopt 378 [r186];
  L226():
    c25 = `as.logical`(r174);
    if c25 then L227() else L54();
  L239():
    l14 = ld value;
    ___8 = ldf `@<-`;
    check L240() else D117();
  D117():
    deopt 380 [r186, l14, r186];
  L54():
    goto L49();
  L227():
    __2 = ldf `@` in base;
    r175 = dyn __2(<sym value>, <sym generic>);
    l12 = ld fdefault;
    ___6 = ldf `@<-`;
    check L228() else D106();
  L240():
    r187 = dyn ___8(l14, NULL, "skeleton", r186);
    check L241() else D118();
  D106():
    deopt 346 [r175, l12, r175];
  D118():
    deopt 383 [r186, r187];
  L228():
    r176 = dyn ___6(l12, NULL, "generic", r175);
    check L229() else D107();
  L241():
    st value = r187;
    value4 = ld value;
    check L242() else D119();
  D107():
    deopt 349 [r175, r176];
  D119():
    deopt 385 [value4];
  L229():
    st fdefault = r176;
    goto L49();
  L242():
    value5 = force? value4;
    checkMissing(value5);
    popenv;
    return value5;
  }
}
fun inner2274720891(fun, what, f) {
  (reg fun:*, reg what:*, reg f:*) -+> V { var fun:*, var what:*, var f:*, reg is:cls, reg fun1:*, reg fun2:V, reg p:p(V +), reg r1:V, reg c:L, reg warning:cls, reg gettextf:cls, reg what1:*, reg what2:V, reg p1:p(V +), reg sQuote:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg _untracedFunction:cls, reg fun3:*, reg fun4:V, reg p5:p(V +), reg r10:V, reg fun5:*, reg fun6:V |
    mkenv;
    st fun = fun;
    st what = what;
    st f = f;
    is = ldf is;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      fun1 = ld fun;
      fun2 = force? fun1;
      checkMissing(fun2);
      return fun2;
    };
    r1 = dyn is(p, "traceable");
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    fun5 = ld fun;
    check L9() else D6();
  L3():
    warning = ldf warning;
    check L4() else D2();
  D2():
    deopt 6 [];
  D6():
    deopt 15 [fun5];
  L4():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        what1 = ld what;
        what2 = force? what1;
        checkMissing(what2);
        return what2;
      };
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          f1 = ld f;
          f2 = force? f1;
          checkMissing(f2);
          return f2;
        };
        r4 = dyn sQuote(p2);
        return r4;
      };
      r6 = dyn gettextf("the function being used as %s in making a generic function for %s is currently traced; the function used will have tracing removed", p1, p3);
      return r6;
    };
    r8 = dyn warning[, domain](p4, NA_LGL);
    check L5() else D3();
  L9():
    fun6 = force? fun5;
    checkMissing(fun6);
    popenv;
    return fun6;
  D3():
    deopt 10 [r8];
  L5():
    _untracedFunction = ldf `.untracedFunction`;
    check L6() else D4();
  D4():
    deopt 12 [];
  L6():
    p5 = prom<V +>{
      fun3 = ld fun;
      fun4 = force? fun3;
      checkMissing(fun4);
      return fun4;
    };
    r10 = dyn _untracedFunction(p5);
    check L7() else D5();
  D5():
    deopt 14 [r10];
  L7():
    popenv;
    return r10;
  }
}