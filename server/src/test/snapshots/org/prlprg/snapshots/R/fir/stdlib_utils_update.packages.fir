fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3605496208;
    st `update.packages` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3605496208(`lib.loc`, repos, contriburl, method, instlib, ask, available, oldPkgs, `...`, checkBuilt, type) {
  (reg lib_loc:*, reg repos:*, reg contriburl:*, reg method:*, reg instlib:*, reg ask:*, reg available:*, reg oldPkgs:*, reg ddd:dots, reg checkBuilt:*, reg type:*) -+> V { var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var repos:*, reg repos_isMissing:L, reg repos_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var contriburl:*, reg contriburl_isMissing:L, reg contriburl_orDefault:*, reg contrib_url:cls, reg repos1:*, reg repos2:V, reg p1:p(V +), reg type1:*, reg type2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), var method:*, var instlib:*, reg instlib_isMissing:L, reg instlib_orDefault:*, var ask:*, reg ask_isMissing:L, reg ask_orDefault:*, var available:*, reg available_isMissing:L, reg available_orDefault:*, var oldPkgs:*, reg oldPkgs_isMissing:L, reg oldPkgs_orDefault:*, var `...`:dots?, var checkBuilt:*, reg checkBuilt_isMissing:L, reg checkBuilt_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg getOption1:cls, reg r6:V, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg type3:*, reg type4:V, reg c:L, reg r10:V, reg c1:L, reg stop:cls, reg r11:V, reg force:cls, reg ask1:*, reg ask2:V, reg p5:p(V +), reg r14:V, reg r15:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg lib_loc1:*, reg lib_loc2:V, reg c2:V, reg c3:L, reg _libPaths:cls, reg r18:V, reg type5:*, reg type6:V, reg r20:V, reg c4:L, reg c6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg c9:L, reg r22:V, reg missing:cls, reg r23:V, reg r24:V, reg c10:L, reg c11:L, reg c12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg c19:L, reg c20:L, reg r26:V, reg available1:*, reg available2:V, reg c21:V, reg r27:V, reg c22:L, reg c23:V, reg c26:L, reg c27:V, reg c29:L, reg stop1:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg available3:*, reg available4:V, reg c30:V, reg c31:L, reg available_packages:cls, reg contriburl1:*, reg contriburl2:V, reg p6:p(V +), reg method1:*, reg method2:V, reg p7:p(V +), reg ddd1:dots?, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg missing1:cls, reg r37:V, reg c32:L, reg getOption2:cls, reg r38:V, reg r39:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg oldPkgs1:*, reg oldPkgs2:V, reg is_matrix:cls, reg r43:V, reg r44:V, reg c33:L, reg c35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg c38:L, reg r46:V, reg oldPkgs3:*, reg oldPkgs4:V, reg c39:L, reg c40:L, reg c41:V, reg c43:L, reg oldPkgs5:*, reg oldPkgs6:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg oldPkgs7:*, reg oldPkgs8:V, reg c44:V, reg c45:L, reg old_packages:cls, reg lib_loc3:*, reg lib_loc4:V, reg p8:p(V +), reg contriburl3:*, reg contriburl4:V, reg p9:p(V +), reg method3:*, reg method4:V, reg p10:p(V +), reg available5:*, reg available6:V, reg p11:p(V +), reg checkBuilt1:*, reg checkBuilt2:V, reg p12:p(V +), reg r55:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg missing2:cls, reg r58:V, reg c46:L, reg getOption3:cls, reg r59:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg oldPkgs9:*, reg oldPkgs10:V, reg c47:V, reg r63:V, reg c48:L, reg pkg:*, reg pkg1:V, reg nrow:cls, reg oldPkgs11:*, reg oldPkgs12:V, reg p13:p(V +), reg r65:V, reg r66:V, reg c49:L, reg pkg2:*, reg pkg3:V, reg r67:V, reg find_package:cls, reg oldPkgs13:*, reg oldPkgs14:V, reg c50:L, reg oldPkgs16:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pkg4:*, reg pkg5:V, reg __:cls, reg r68:V, reg p14:p(V +), reg lib_loc5:*, reg lib_loc6:V, reg p15:p(V +), reg r71:V, reg find_package1:cls, reg oldPkgs17:*, reg oldPkgs18:V, reg c51:L, reg oldPkgs20:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg pkg6:*, reg pkg7:V, reg __1:cls, reg r72:V, reg p16:p(V +), reg oldPkgs21:*, reg oldPkgs22:V, reg c52:L, reg oldPkgs24:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg pkg8:*, reg pkg9:V, reg __2:cls, reg r74:V, reg p17:p(V +), reg r76:V, reg r77:V, reg c53:L, reg warning:cls, reg sprintf:cls, reg oldPkgs25:*, reg oldPkgs26:V, reg c54:L, reg oldPkgs28:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg pkg10:*, reg pkg11:V, reg __3:cls, reg r78:V, reg p18:p(V +), reg oldPkgs29:*, reg oldPkgs30:V, reg c55:L, reg oldPkgs32:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg pkg12:*, reg pkg13:V, reg __4:cls, reg r80:V, reg p19:p(V +), reg r82:V, reg p20:p(V +), reg r84:V, reg oldPkgs33:*, reg oldPkgs34:V, reg c56:L, reg oldPkgs36:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg pkg14:*, reg pkg15:V, reg r85:V, reg __5:cls, reg r86:V, reg pkg16:*, reg pkg17:V, reg r87:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r90:V, reg r91:V, reg oldPkgs37:*, reg oldPkgs38:V, reg c57:V, reg c58:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r92:V, reg r93:V, reg invisible:cls, reg r94:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r98:V, reg r99:V, reg oldPkgs39:*, reg oldPkgs40:V, reg is_matrix1:cls, reg r100:V, reg c59:L, reg c61:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r101:V, reg c64:L, reg r102:V, reg oldPkgs41:*, reg oldPkgs42:V, reg c65:L, reg c66:L, reg c67:V, reg r103:V, reg c69:L, reg stop2:cls, reg r104:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r105:V, reg r106:V, reg subset:*, reg subset1:V, reg c70:V, reg r107:V, reg c71:L, reg oldPkgs43:*, reg oldPkgs44:V, reg c72:L, reg oldPkgs46:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg _in_:cls, reg rownames:cls, reg oldPkgs47:*, reg oldPkgs48:V, reg p21:p(V +), reg r109:V, reg p22:p(V +), reg subset2:*, reg subset3:V, reg p23:p(V +), reg r112:V, reg __6:cls, reg r113:V, reg nrow1:cls, reg oldPkgs49:*, reg oldPkgs50:V, reg p24:p(V +), reg r115:V, reg r116:V, reg c73:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r117:V, reg r118:V, reg invisible1:cls, reg r119:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r123:V, reg r124:V, reg ask3:*, reg ask4:V, reg c74:L, reg c75:L, reg c77:V, reg ask5:*, reg ask6:V, reg r125:V, reg c78:L, reg c79:V, reg c81:L, reg _Platform:*, reg _Platform1:V, reg c82:L, reg _Platform3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r126:V, reg r127:V, reg c83:L, reg c84:V, reg _Platform4:*, reg _Platform5:V, reg c86:L, reg c88:L, reg _Platform7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg c90:L, reg dx17:V, reg r128:V, reg r129:V, reg c91:L, reg c92:V, reg c94:L, reg c95:V, reg capabilities:cls, reg r130:V, reg c97:L, reg c100:L, reg c101:V, reg capabilities1:cls, reg r131:V, reg c102:L, reg c103:V, reg c106:L, reg c107:V, reg c109:L, reg select_list:cls, reg oldPkgs51:*, reg oldPkgs52:V, reg c110:L, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __7:cls, reg r132:V, reg p25:p(V +), reg oldPkgs55:*, reg oldPkgs56:V, reg c111:L, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __8:cls, reg r134:V, reg p26:p(V +), reg r136:V, reg oldPkgs59:*, reg oldPkgs60:V, reg c112:L, reg oldPkgs62:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r137:V, reg r138:V, reg k:*, reg k1:V, reg oldPkgs66:*, reg oldPkgs67:V, reg c113:L, reg oldPkgs70:V, reg dr24:V, reg dc12:L, reg dx24:V, reg oldPkgs73:V, reg dx25:V, reg __9:cls, reg r139:V, reg match:cls, reg r140:V, reg __10:cls, reg r141:V, reg dx26:V, reg text_select:cls, reg oldPkgs74:*, reg oldPkgs75:V, reg p27:p(V +), reg r143:V, reg dx27:V, reg isTRUE:cls, reg ask7:*, reg ask8:V, reg p28:p(V +), reg r145:V, reg c114:L, reg text_select1:cls, reg oldPkgs76:*, reg oldPkgs77:V, reg p29:p(V +), reg r147:V, reg oldPkgs78:*, reg oldPkgs79:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r148:V, reg r149:V, reg update:*, reg update1:V, reg length:cls, reg r150:V, reg c115:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r151:V, reg r152:V, reg instlib1:*, reg instlib2:V, reg c116:V, reg c117:L, reg update2:*, reg update3:V, reg c118:L, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg __11:cls, reg r153:V, reg unique:cls, reg instlib3:*, reg instlib4:V, reg p30:p(V +), reg r155:V, reg libs:*, reg libs1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c119:L, reg x:V, reg type7:*, reg type8:V, reg r156:V, reg c120:L, reg install_packages:cls, reg update6:*, reg update7:V, reg c121:L, reg update9:V, reg dr28:V, reg dc14:L, reg dx31:V, reg dx32:V, reg instlib5:*, reg instlib6:V, reg l1:*, reg l2:V, reg r157:V, reg __12:cls, reg r158:V, reg p31:p(V +), reg l3:*, reg l4:V, reg p32:p(V +), reg repos3:*, reg repos4:V, reg p33:p(V +), reg method5:*, reg method6:V, reg p34:p(V +), reg ddd2:dots?, reg type9:*, reg type10:V, reg p35:p(V +), reg r164:V, reg i7:I, reg install_packages1:cls, reg update10:*, reg update11:V, reg c122:L, reg update13:V, reg dr30:V, reg dc15:L, reg dx33:V, reg dx34:V, reg instlib7:*, reg instlib8:V, reg l5:*, reg l6:V, reg r166:V, reg __13:cls, reg r167:V, reg p36:p(V +), reg l7:*, reg l8:V, reg p37:p(V +), reg contriburl5:*, reg contriburl6:V, reg p38:p(V +), reg method7:*, reg method8:V, reg p39:p(V +), reg available7:*, reg available8:V, reg p40:p(V +), reg ddd3:dots?, reg type11:*, reg type12:V, reg p41:p(V +), reg r174:V |
    mkenv;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    repos_isMissing = missing.0(repos);
    if repos_isMissing then L1() else L2(repos);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("repos");
      return r;
    };
    goto L2(p);
  L2(repos_orDefault):
    st repos = repos_orDefault;
    contriburl_isMissing = missing.0(contriburl);
    if contriburl_isMissing then L3() else L4(contriburl);
  L3():
    p3 = prom<V +>{
      contrib_url = ldf `contrib.url`;
      p1 = prom<V +>{
        repos1 = ld repos;
        repos2 = force? repos1;
        checkMissing(repos2);
        return repos2;
      };
      p2 = prom<V +>{
        type1 = ld type;
        type2 = force? type1;
        checkMissing(type2);
        return type2;
      };
      r4 = dyn contrib_url(p1, p2);
      return r4;
    };
    goto L4(p3);
  L4(contriburl_orDefault):
    st contriburl = contriburl_orDefault;
    st method = method;
    instlib_isMissing = missing.0(instlib);
    if instlib_isMissing then L5(NULL) else L5(instlib);
  L5(instlib_orDefault):
    st instlib = instlib_orDefault;
    ask_isMissing = missing.0(ask);
    if ask_isMissing then L6(TRUE) else L6(ask);
  L6(ask_orDefault):
    st ask = ask_orDefault;
    available_isMissing = missing.0(available);
    if available_isMissing then L7(NULL) else L7(available);
  L7(available_orDefault):
    st available = available_orDefault;
    oldPkgs_isMissing = missing.0(oldPkgs);
    if oldPkgs_isMissing then L8(NULL) else L8(oldPkgs);
  L8(oldPkgs_orDefault):
    st oldPkgs = oldPkgs_orDefault;
    st `...` = ddd;
    checkBuilt_isMissing = missing.0(checkBuilt);
    if checkBuilt_isMissing then L9(FALSE) else L9(checkBuilt);
  L9(checkBuilt_orDefault):
    st checkBuilt = checkBuilt_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L10() else L11(type);
  L10():
    p4 = prom<V +>{
      getOption1 = ldf getOption;
      r6 = dyn getOption1("pkgType");
      return r6;
    };
    goto L11(p4);
  L11(type_orDefault):
    st type = type_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L87() else L88();
  L12(r9):
    r10 = `!`(r9);
    c1 = `as.logical`(r10);
    if c1 then L90() else L13();
  L87():
    type3 = ld type;
    check L89() else D0();
  L88():
    r8 = dyn base(<sym type>);
    goto L12(r8);
  D0():
    deopt 1 [type3];
  L13():
    goto L14();
  L14():
    force = ldf force;
    check L94() else D3();
  L89():
    type4 = force? type3;
    checkMissing(type4);
    c = `is.character`(type4);
    goto L12(c);
  L90():
    stop = ldf stop;
    check L91() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 12 [];
  L91():
    r11 = dyn stop("invalid 'type'; must be a character string");
    check L92() else D2();
  L94():
    p5 = prom<V +>{
      ask1 = ld ask;
      ask2 = force? ask1;
      checkMissing(ask2);
      return ask2;
    };
    r14 = dyn force(p5);
    check L95() else D4();
  D2():
    deopt 8 [r11];
  D4():
    deopt 14 [r14];
  L92():
    goto L14();
  L95():
    r15 = clos inner4077758179;
    st `text.select` = r15;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L96() else L97();
  L15(r17):
    c3 = `as.logical`(r17);
    if c3 then L99() else L16();
  L96():
    lib_loc1 = ld `lib.loc`;
    check L98() else D5();
  L97():
    r16 = dyn base1(<sym lib.loc>);
    goto L15(r16);
  D5():
    deopt 19 [lib_loc1];
  L16():
    goto L17();
  L17():
    type5 = ld type;
    check L103() else D8();
  L98():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c2 = `==`(lib_loc2, NULL);
    goto L15(c2);
  L99():
    _libPaths = ldf `.libPaths`;
    check L100() else D6();
  D6():
    deopt 23 [];
  D8():
    deopt 28 [type5];
  L100():
    r18 = dyn _libPaths();
    check L101() else D7();
  L103():
    type6 = force? type5;
    checkMissing(type6);
    r20 = `==`(type6, "both");
    c4 = `as.logical`(r20);
    if c4 then L104() else L18(c4);
  D7():
    deopt 24 [r18];
  L18(c6):
    c29 = `as.logical`(c6);
    if c29 then L113() else L22();
  L101():
    st `lib.loc` = r18;
    goto L17();
  L104():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L105() else L106();
  L19(c9, r22):
    r24 = `!`(r22);
    c10 = `as.logical`(r24);
    if c10 then L20(c9, c10) else L107();
  L22():
    goto L23();
  L23():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L117() else L118();
  L105():
    missing = ldf missing in base;
    r23 = dyn missing(<sym contriburl>);
    goto L19(c4, r23);
  L106():
    r21 = dyn base2(<sym contriburl>);
    goto L19(c4, r21);
  L113():
    stop1 = ldf stop;
    check L114() else D10();
  D10():
    deopt 44 [];
  L20(c11, c12):
    c26 = `as.logical`(c12);
    c27 = `&&`(c11, c26);
    goto L18(c27);
  L24(r31):
    c31 = `as.logical`(r31);
    if c31 then L120() else L25();
  L107():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L108() else L109();
  L114():
    r28 = dyn stop1("specifying 'contriburl' or 'available' requires a single type, not type = \"both\"");
    check L115() else D11();
  L117():
    available3 = ld available;
    check L119() else D12();
  L118():
    r30 = dyn base4(<sym available>);
    goto L24(r30);
  D11():
    deopt 46 [r28];
  D12():
    deopt 50 [available3];
  L21(c19, c20, r26):
    r27 = `!`(r26);
    c22 = `as.logical`(r27);
    c23 = `||`(c20, c22);
    goto L20(c19, c23);
  L25():
    goto L29();
  L29():
    sym6 = ldf `is.matrix`;
    base6 = ldf `is.matrix` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L130() else L131();
  L108():
    available1 = ld available;
    check L110() else D9();
  L109():
    r25 = dyn base3(<sym available>);
    goto L21(c9, c10, r25);
  L115():
    goto L23();
  L119():
    available4 = force? available3;
    checkMissing(available4);
    c30 = `==`(available4, NULL);
    goto L24(c30);
  L120():
    available_packages = ldf `available.packages`;
    check L121() else D13();
  D9():
    deopt 37 [c9, c10, available1];
  D13():
    deopt 54 [];
  L30(r42):
    r44 = `!`(r42);
    c33 = `as.logical`(r44);
    if c33 then L134() else L31(c33);
  L110():
    available2 = force? available1;
    checkMissing(available2);
    c21 = `==`(available2, NULL);
    goto L21(c9, c10, c21);
  L121():
    p6 = prom<V +>{
      contriburl1 = ld contriburl;
      contriburl2 = force? contriburl1;
      checkMissing(contriburl2);
      return contriburl2;
    };
    p7 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    ddd1 = ld `...`;
    r34 = dyn available_packages[contriburl, method, `...`](p6, p7, ddd1);
    check L122() else D14();
  L130():
    oldPkgs1 = ld oldPkgs;
    check L132() else D17();
  L131():
    r41 = dyn base6(<sym oldPkgs>);
    goto L30(r41);
  D14():
    deopt 60 [r34];
  D17():
    deopt 76 [oldPkgs1];
  L31(c35):
    c43 = `as.logical`(c35);
    if c43 then L139() else L33();
  L122():
    st available = r34;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L123() else L124();
  L132():
    oldPkgs2 = force? oldPkgs1;
    checkMissing(oldPkgs2);
    is_matrix = ldf `is.matrix` in base;
    r43 = dyn is_matrix(oldPkgs2);
    check L133() else D18();
  L134():
    sym7 = ldf `is.character`;
    base7 = ldf `is.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L135() else L136();
  D18():
    deopt 79 [r43];
  L26(r36):
    c32 = `as.logical`(r36);
    if c32 then L125() else L27();
  L32(c38, r46):
    c40 = `as.logical`(r46);
    c41 = `&&`(c38, c40);
    goto L31(c41);
  L33():
    st subset = NULL;
    goto L34();
  L34():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L142() else L143();
  L123():
    missing1 = ldf missing in base;
    r37 = dyn missing1(<sym repos>);
    goto L26(r37);
  L124():
    r35 = dyn base5(<sym repos>);
    goto L26(r35);
  L133():
    goto L30(r43);
  L135():
    oldPkgs3 = ld oldPkgs;
    check L137() else D19();
  L136():
    r45 = dyn base7(<sym oldPkgs>);
    goto L32(c33, r45);
  L139():
    oldPkgs5 = ld oldPkgs;
    check L140() else D20();
  D19():
    deopt 82 [c33, oldPkgs3];
  D20():
    deopt 86 [oldPkgs5];
  L27():
    goto L28(NULL);
  L28(r39):
    goto L29();
  L35(r49):
    c45 = `as.logical`(r49);
    if c45 then L145() else L36();
  L125():
    getOption2 = ldf getOption;
    check L126() else D15();
  L137():
    oldPkgs4 = force? oldPkgs3;
    checkMissing(oldPkgs4);
    c39 = `is.character`(oldPkgs4);
    goto L32(c33, c39);
  L140():
    oldPkgs6 = force? oldPkgs5;
    checkMissing(oldPkgs6);
    st subset = oldPkgs6;
    st oldPkgs = NULL;
    goto L34();
  L142():
    oldPkgs7 = ld oldPkgs;
    check L144() else D21();
  L143():
    r48 = dyn base8(<sym oldPkgs>);
    goto L35(r48);
  D15():
    deopt 66 [];
  D21():
    deopt 96 [oldPkgs7];
  L36():
    sym13 = ldf `is.matrix`;
    base13 = ldf `is.matrix` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L189() else L190();
  L52():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L202() else L203();
  L126():
    r38 = dyn getOption2("repos");
    check L127() else D16();
  L144():
    oldPkgs8 = force? oldPkgs7;
    checkMissing(oldPkgs8);
    c44 = `==`(oldPkgs8, NULL);
    goto L35(c44);
  L145():
    old_packages = ldf `old.packages`;
    check L146() else D22();
  D16():
    deopt 68 [r38];
  D22():
    deopt 100 [];
  L53(r99):
    c59 = `as.logical`(r99);
    if c59 then L193() else L54(c59);
  L57(r106):
    r107 = `!`(r106);
    c71 = `as.logical`(r107);
    if c71 then L205() else L58();
  L127():
    st repos = r38;
    goto L28(r38);
  L146():
    p8 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    p9 = prom<V +>{
      contriburl3 = ld contriburl;
      contriburl4 = force? contriburl3;
      checkMissing(contriburl4);
      return contriburl4;
    };
    p10 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p11 = prom<V +>{
      available5 = ld available;
      available6 = force? available5;
      checkMissing(available6);
      return available6;
    };
    p12 = prom<V +>{
      checkBuilt1 = ld checkBuilt;
      checkBuilt2 = force? checkBuilt1;
      checkMissing(checkBuilt2);
      return checkBuilt2;
    };
    r55 = dyn old_packages[`lib.loc`, contriburl, method, available, checkBuilt](p8, p9, p10, p11, p12);
    check L147() else D23();
  L189():
    oldPkgs39 = ld oldPkgs;
    check L191() else D42();
  L190():
    r98 = dyn base13(<sym oldPkgs>);
    goto L53(r98);
  L202():
    subset = ld subset;
    check L204() else D47();
  L203():
    r105 = dyn base15(<sym subset>);
    goto L57(r105);
  D23():
    deopt 111 [r55];
  D42():
    deopt 198 [oldPkgs39];
  D47():
    deopt 215 [subset];
  L54(c61):
    r103 = `!`(c61);
    c69 = `as.logical`(r103);
    if c69 then L198() else L56();
  L58():
    goto L63();
  L63():
    sym17 = ldf `is.character`;
    base17 = ldf `is.character` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L221() else L222();
  L147():
    st oldPkgs = r55;
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L148() else L149();
  L191():
    oldPkgs40 = force? oldPkgs39;
    checkMissing(oldPkgs40);
    is_matrix1 = ldf `is.matrix` in base;
    r100 = dyn is_matrix1(oldPkgs40);
    check L192() else D43();
  L193():
    sym14 = ldf `is.character`;
    base14 = ldf `is.character` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L194() else L195();
  L204():
    subset1 = force? subset;
    checkMissing(subset1);
    c70 = `==`(subset1, NULL);
    goto L57(c70);
  L205():
    oldPkgs43 = ld oldPkgs;
    check L206() else D48();
  D43():
    deopt 201 [r100];
  D48():
    deopt 219 [oldPkgs43];
  L37(r57):
    c46 = `as.logical`(r57);
    if c46 then L150() else L38();
  L55(c64, r102):
    c66 = `as.logical`(r102);
    c67 = `&&`(c64, c66);
    goto L54(c67);
  L56():
    goto L52();
  L64(r124):
    c75 = `as.logical`(r124);
    if c75 then L224() else L65(c75);
  L148():
    missing2 = ldf missing in base;
    r58 = dyn missing2(<sym repos>);
    goto L37(r58);
  L149():
    r56 = dyn base9(<sym repos>);
    goto L37(r56);
  L192():
    goto L53(r100);
  L194():
    oldPkgs41 = ld oldPkgs;
    check L196() else D44();
  L195():
    r101 = dyn base14(<sym oldPkgs>);
    goto L55(c59, r101);
  L198():
    stop2 = ldf stop;
    check L199() else D45();
  L206():
    oldPkgs44 = force? oldPkgs43;
    checkMissing(oldPkgs44);
    c72 = `is.object`(oldPkgs44);
    if c72 then L207() else L208(oldPkgs44);
  L221():
    ask3 = ld ask;
    check L223() else D54();
  L222():
    r123 = dyn base17(<sym ask>);
    goto L64(r123);
  D44():
    deopt 203 [c59, oldPkgs41];
  D45():
    deopt 209 [];
  D54():
    deopt 248 [ask3];
  L38():
    goto L39();
  L39():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L154() else L155();
  L59(dx13):
    st oldPkgs = dx13;
    nrow1 = ldf nrow;
    check L212() else D51();
  L65(c77):
    c81 = `as.logical`(c77);
    if c81 then L227() else L66();
  L150():
    getOption3 = ldf getOption;
    check L151() else D24();
  L196():
    oldPkgs42 = force? oldPkgs41;
    checkMissing(oldPkgs42);
    c65 = `is.character`(oldPkgs42);
    goto L55(c59, c65);
  L199():
    r104 = dyn stop2("invalid 'oldPkgs'; must be a character vector or a result from old.packages()");
    check L200() else D46();
  L207():
    dr12 = tryDispatchBuiltin.1("[", oldPkgs44);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L209() else L208(dr12);
  L208(oldPkgs46):
    _in_ = ldf `%in%`;
    check L210() else D49();
  L223():
    ask4 = force? ask3;
    checkMissing(ask4);
    c74 = `is.character`(ask4);
    goto L64(c74);
  L224():
    ask5 = ld ask;
    check L225() else D55();
  D24():
    deopt 117 [];
  D46():
    deopt 211 [r104];
  D49():
    deopt 222 [oldPkgs46];
  D51():
    deopt 233 [];
  D55():
    deopt 251 [c75, ask5];
  L40(r62):
    r63 = `!`(r62);
    c48 = `as.logical`(r63);
    if c48 then L157() else L41();
  L66():
    isTRUE = ldf isTRUE;
    check L267() else D70();
  L75(dx27):
    st update = dx27;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L274() else L275();
  L151():
    r59 = dyn getOption3("repos");
    check L152() else D25();
  L154():
    oldPkgs9 = ld oldPkgs;
    check L156() else D26();
  L155():
    r61 = dyn base10(<sym oldPkgs>);
    goto L40(r61);
  L200():
    goto L52();
  L209():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L59(dx12);
  L210():
    p22 = prom<V +>{
      rownames = ldf rownames;
      p21 = prom<V +>{
        oldPkgs47 = ld oldPkgs;
        oldPkgs48 = force? oldPkgs47;
        checkMissing(oldPkgs48);
        return oldPkgs48;
      };
      r109 = dyn rownames(p21);
      return r109;
    };
    p23 = prom<V +>{
      subset2 = ld subset;
      subset3 = force? subset2;
      checkMissing(subset3);
      return subset3;
    };
    r112 = dyn _in_(p22, p23);
    check L211() else D50();
  L212():
    p24 = prom<V +>{
      oldPkgs49 = ld oldPkgs;
      oldPkgs50 = force? oldPkgs49;
      checkMissing(oldPkgs50);
      return oldPkgs50;
    };
    r115 = dyn nrow1(p24);
    check L213() else D52();
  L225():
    ask6 = force? ask5;
    checkMissing(ask6);
    r125 = `==`(ask6, "graphics");
    c78 = `as.logical`(r125);
    c79 = `&&`(c75, c78);
    goto L65(c79);
  L227():
    _Platform = ld `.Platform`;
    check L228() else D56();
  D25():
    deopt 119 [r59];
  D26():
    deopt 124 [oldPkgs9];
  D50():
    deopt 225 [oldPkgs46, r112];
  D52():
    deopt 235 [r115];
  D56():
    deopt 256 [_Platform];
  D70():
    deopt 315 [];
  L41():
    goto L47();
  L47():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L179() else L180();
  L77(r149):
    c115 = `as.logical`(r149);
    if c115 then L278() else L78();
  L152():
    st repos = r59;
    goto L39();
  L156():
    oldPkgs10 = force? oldPkgs9;
    checkMissing(oldPkgs10);
    c47 = `==`(oldPkgs10, NULL);
    goto L40(c47);
  L157():
    st pkg = 0;
    goto L46();
  L211():
    __6 = ldf `[` in base;
    r113 = dyn __6(oldPkgs44, r112, <missing>, FALSE);
    goto L59(r113);
  L213():
    r116 = `==`(r115, 0.0);
    c73 = `as.logical`(r116);
    if c73 then L214() else L60();
  L228():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c82 = `is.object`(_Platform1);
    if c82 then L230() else L231(_Platform1);
  L267():
    p28 = prom<V +>{
      ask7 = ld ask;
      ask8 = force? ask7;
      checkMissing(ask8);
      return ask8;
    };
    r145 = dyn isTRUE(p28);
    check L268() else D71();
  L274():
    update = ld update;
    check L276() else D75();
  L275():
    r148 = dyn base19(<sym update>);
    goto L77(r148);
  D71():
    deopt 317 [r145];
  D75():
    deopt 327 [update];
  L46():
    pkg = ld pkg;
    check L158() else D27();
  L48(r91):
    c58 = `as.logical`(r91);
    if c58 then L182() else L49();
  L60():
    goto L63();
  L78():
    invisible.0();
    popenv;
    return NULL;
  L179():
    oldPkgs37 = ld oldPkgs;
    check L181() else D40();
  L180():
    r90 = dyn base11(<sym oldPkgs>);
    goto L48(r90);
  L214():
    sym16 = ldf invisible;
    base16 = ldf invisible in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L215() else L216();
  L229(dx15):
    r127 = `==`(dx15, "windows");
    c83 = `as.logical`(r127);
    if c83 then L67(c83) else L233();
  L230():
    dr14 = tryDispatchBuiltin.1("$", _Platform1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L232() else L231(dr14);
  L231(_Platform3):
    r126 = `$`(_Platform3, <sym OS.type>);
    goto L229(r126);
  L268():
    c114 = `as.logical`(r145);
    if c114 then L269() else L76();
  L276():
    update1 = force? update;
    checkMissing(update1);
    length = ldf length in base;
    r150 = dyn length(update1);
    check L277() else D76();
  L278():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L279() else L280();
  D27():
    deopt 131 [pkg];
  D40():
    deopt 186 [oldPkgs37];
  D76():
    deopt 330 [r150];
  L49():
    goto L52();
  L61(r118):
    popenv;
    return r118;
  L67(c84):
    c94 = `as.logical`(c84);
    if c94 then L68(c94) else L240();
  L76():
    oldPkgs78 = ld oldPkgs;
    check L273() else D74();
  L79(r152):
    c117 = `as.logical`(r152);
    if c117 then L282() else L80();
  L158():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    nrow = ldf nrow;
    check L159() else D28();
  L181():
    oldPkgs38 = force? oldPkgs37;
    checkMissing(oldPkgs38);
    c57 = `==`(oldPkgs38, NULL);
    goto L48(c57);
  L182():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L183() else L184();
  L215():
    invisible1 = ldf invisible in base;
    r119 = dyn invisible1();
    check L217() else D53();
  L216():
    r117 = dyn base16();
    goto L61(r117);
  L232():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L229(dx14);
  L233():
    _Platform4 = ld `.Platform`;
    check L234() else D57();
  L269():
    text_select1 = ldf `text.select`;
    check L270() else D72();
  L277():
    goto L77(r150);
  L279():
    instlib1 = ld instlib;
    check L281() else D77();
  L280():
    r151 = dyn base20(<sym instlib>);
    goto L79(r151);
  D28():
    deopt 133 [pkg1];
  D53():
    deopt 241 [r119];
  D57():
    deopt 261 [c83, _Platform4];
  D72():
    deopt 319 [];
  D74():
    deopt 322 [oldPkgs78];
  D77():
    deopt 332 [instlib1];
  L50(r93):
    popenv;
    return r93;
  L68(c95):
    c109 = `as.logical`(c95);
    if c109 then L248() else L70();
  L80():
    goto L82();
  L82():
    unique = ldf unique;
    check L288() else D79();
  L159():
    p13 = prom<V +>{
      oldPkgs11 = ld oldPkgs;
      oldPkgs12 = force? oldPkgs11;
      checkMissing(oldPkgs12);
      return oldPkgs12;
    };
    r65 = dyn nrow(p13);
    check L160() else D29();
  L183():
    invisible = ldf invisible in base;
    r94 = dyn invisible();
    check L185() else D41();
  L184():
    r92 = dyn base12();
    goto L50(r92);
  L217():
    goto L61(r119);
  L234():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c86 = `is.object`(_Platform5);
    if c86 then L236() else L237(c83, _Platform5);
  L240():
    capabilities = ldf capabilities;
    check L241() else D58();
  L270():
    p29 = prom<V +>{
      oldPkgs76 = ld oldPkgs;
      oldPkgs77 = force? oldPkgs76;
      checkMissing(oldPkgs77);
      return oldPkgs77;
    };
    r147 = dyn text_select1(p29);
    check L271() else D73();
  L273():
    oldPkgs79 = force? oldPkgs78;
    checkMissing(oldPkgs79);
    goto L75(oldPkgs79);
  L281():
    instlib2 = force? instlib1;
    checkMissing(instlib2);
    c116 = `==`(instlib2, NULL);
    goto L79(c116);
  L282():
    update2 = ld update;
    check L283() else D78();
  D29():
    deopt 135 [pkg1, r65];
  D41():
    deopt 192 [r94];
  D58():
    deopt 268 [c94];
  D73():
    deopt 321 [r147];
  D78():
    deopt 335 [update2];
  D79():
    deopt 345 [];
  L70():
    text_select = ldf `text.select`;
    check L264() else D68();
  L74(dx26):
    goto L75(dx26);
  L160():
    r66 = `<`(pkg1, r65);
    c49 = `as.logical`(r66);
    if c49 then L161() else L42();
  L185():
    goto L50(r94);
  L235(c90, dx17):
    r129 = `==`(dx17, "AQUA");
    c91 = `as.logical`(r129);
    c92 = `||`(c90, c91);
    goto L67(c92);
  L236():
    dr16 = tryDispatchBuiltin.1("$", _Platform5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L238() else L237(c83, dr16);
  L237(c88, _Platform7):
    r128 = `$`(_Platform7, <sym GUI>);
    goto L235(c88, r128);
  L241():
    r130 = dyn capabilities("tcltk");
    check L242() else D59();
  L248():
    select_list = ldf `select.list`;
    check L249() else D62();
  L271():
    goto L75(r147);
  L283():
    update3 = force? update2;
    checkMissing(update3);
    c118 = `is.object`(update3);
    if c118 then L284() else L285();
  L288():
    p30 = prom<V +>{
      instlib3 = ld instlib;
      instlib4 = force? instlib3;
      checkMissing(instlib4);
      return instlib4;
    };
    r155 = dyn unique(p30);
    check L289() else D80();
  D59():
    deopt 270 [c94, r130];
  D62():
    deopt 278 [];
  D68():
    deopt 311 [];
  D80():
    deopt 347 [r155];
  L42():
    goto L47();
  L81(dx29):
    st instlib = dx29;
    goto L82();
  L161():
    pkg2 = ld pkg;
    check L162() else D30();
  L238():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L235(c83, dx16);
  L242():
    c97 = `as.logical`(r130);
    if c97 then L243() else L69(c94, c97);
  L249():
    p25 = prom<V +>{
      oldPkgs51 = ld oldPkgs;
      oldPkgs52 = force? oldPkgs51;
      checkMissing(oldPkgs52);
      c110 = `is.object`(oldPkgs52);
      if c110 then L1() else L2();
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", oldPkgs52);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2();
    L2():
      __7 = ldf `[` in base;
      r132 = dyn __7(oldPkgs52, <missing>, 1);
      goto L0(r132);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p26 = prom<V +>{
      oldPkgs55 = ld oldPkgs;
      oldPkgs56 = force? oldPkgs55;
      checkMissing(oldPkgs56);
      c111 = `is.object`(oldPkgs56);
      if c111 then L1() else L2();
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", oldPkgs56);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2();
    L2():
      __8 = ldf `[` in base;
      r134 = dyn __8(oldPkgs56, <missing>, 1);
      goto L0(r134);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r136 = dyn select_list[, , multiple, title, graphics](p25, p26, TRUE, "Packages to be updated", TRUE);
    check L250() else D63();
  L264():
    p27 = prom<V +>{
      oldPkgs74 = ld oldPkgs;
      oldPkgs75 = force? oldPkgs74;
      checkMissing(oldPkgs75);
      return oldPkgs75;
    };
    r143 = dyn text_select(p27);
    check L265() else D69();
  L284():
    dr26 = tryDispatchBuiltin.1("[", update3);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L286() else L285();
  L285():
    __11 = ldf `[` in base;
    r153 = dyn __11(update3, <missing>, "LibPath");
    goto L81(r153);
  L289():
    st libs = r155;
    libs = ld libs;
    check L290() else D81();
  D30():
    deopt 137 [pkg2];
  D63():
    deopt 287 [r136];
  D69():
    deopt 313 [r143];
  D81():
    deopt 349 [libs];
  L69(c100, c101):
    c106 = `as.logical`(c101);
    c107 = `||`(c100, c106);
    goto L68(c107);
  L162():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    r67 = `+`(pkg3, 1);
    st pkg = r67;
    find_package = ldf `find.package`;
    check L163() else D31();
  L243():
    capabilities1 = ldf capabilities;
    check L244() else D60();
  L250():
    st k = r136;
    oldPkgs59 = ld oldPkgs;
    check L251() else D64();
  L265():
    goto L74(r143);
  L286():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L81(dx28);
  L290():
    libs1 = force? libs;
    checkMissing(libs1);
    s = toForSeq(libs1);
    l = length(s);
    i = 0;
    goto L83(i);
  D31():
    deopt 143 [];
  D60():
    deopt 272 [c94, c97];
  D64():
    deopt 289 [oldPkgs59];
  L83(i1):
    i2 = `+`.1(i1, 1);
    c119 = `<`.1(l, i2);
    if c119 then L291() else L86();
  L163():
    p14 = prom<V +>{
      oldPkgs13 = ld oldPkgs;
      oldPkgs14 = force? oldPkgs13;
      checkMissing(oldPkgs14);
      c50 = `is.object`(oldPkgs14);
      if c50 then L1() else L2(oldPkgs14);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", oldPkgs14);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(oldPkgs16):
      pkg4 = ld pkg;
      pkg5 = force? pkg4;
      __ = ldf `[` in base;
      r68 = dyn __(oldPkgs16, pkg5);
      goto L0(r68);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p15 = prom<V +>{
      lib_loc5 = ld `lib.loc`;
      lib_loc6 = force? lib_loc5;
      checkMissing(lib_loc6);
      return lib_loc6;
    };
    r71 = dyn find_package[, `lib.loc`](p14, p15);
    check L164() else D32();
  L244():
    r131 = dyn capabilities1("X11");
    check L245() else D61();
  L251():
    oldPkgs60 = force? oldPkgs59;
    checkMissing(oldPkgs60);
    c112 = `is.object`(oldPkgs60);
    if c112 then L252() else L253(oldPkgs60);
  D32():
    deopt 147 [r71];
  D61():
    deopt 274 [c94, c97, r131];
  L71(dx23):
    goto L74(dx23);
  L86():
    x = `[[`(s, i2, NULL, TRUE);
    st l = x;
    type7 = ld type;
    check L292() else D82();
  L164():
    find_package1 = ldf `find.package`;
    check L165() else D33();
  L245():
    c102 = `as.logical`(r131);
    c103 = `&&`(c97, c102);
    goto L69(c94, c103);
  L252():
    dr22 = tryDispatchBuiltin.1("[", oldPkgs60);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L254() else L253(dr22);
  L253(oldPkgs62):
    sym18 = ldf match;
    base18 = ldf match in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L255() else L256();
  L291():
    invisible.0();
    popenv;
    return i2;
  D33():
    deopt 148 [r71];
  D82():
    deopt 351 [i2, type7];
  L72(r138):
    __10 = ldf `[` in base;
    r141 = dyn __10(oldPkgs60, r138, <missing>, FALSE);
    goto L71(r141);
  L165():
    p16 = prom<V +>{
      oldPkgs17 = ld oldPkgs;
      oldPkgs18 = force? oldPkgs17;
      checkMissing(oldPkgs18);
      c51 = `is.object`(oldPkgs18);
      if c51 then L1() else L2(oldPkgs18);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", oldPkgs18);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(oldPkgs20):
      pkg6 = ld pkg;
      pkg7 = force? pkg6;
      __1 = ldf `[` in base;
      r72 = dyn __1(oldPkgs20, pkg7);
      goto L0(r72);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p17 = prom<V +>{
      oldPkgs21 = ld oldPkgs;
      oldPkgs22 = force? oldPkgs21;
      checkMissing(oldPkgs22);
      c52 = `is.object`(oldPkgs22);
      if c52 then L1() else L2(oldPkgs22);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", oldPkgs22);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(oldPkgs24):
      pkg8 = ld pkg;
      pkg9 = force? pkg8;
      __2 = ldf `[` in base;
      r74 = dyn __2(oldPkgs24, pkg9, 2.0);
      goto L0(r74);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r76 = dyn find_package1[, `lib.loc`](p16, p17);
    check L166() else D34();
  L254():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L71(dx22);
  L255():
    k = ld k;
    check L257() else D65();
  L256():
    r137 = dyn base18(<sym k>, <lang `[`(oldPkgs, , 1)>);
    goto L72(r137);
  L292():
    type8 = force? type7;
    checkMissing(type8);
    r156 = `==`(type8, "both");
    c120 = `as.logical`(r156);
    if c120 then L293() else L84();
  D34():
    deopt 152 [r71, r76];
  D65():
    deopt 293 [oldPkgs62, k];
  L84():
    install_packages1 = ldf `install.packages`;
    check L297() else D85();
  L85(i7):
    goto L83(i7);
  L166():
    r77 = `!=`(r71, r76);
    c53 = `as.logical`(r77);
    if c53 then L167() else L43();
  L257():
    k1 = force? k;
    checkMissing(k1);
    oldPkgs66 = ld oldPkgs;
    check L258() else D66();
  L293():
    install_packages = ldf `install.packages`;
    check L294() else D83();
  D66():
    deopt 295 [oldPkgs62, oldPkgs66];
  D83():
    deopt 356 [i2];
  D85():
    deopt 368 [i2];
  L43():
    goto L45();
  L45():
    goto L46();
  L167():
    warning = ldf warning;
    check L168() else D35();
  L258():
    oldPkgs67 = force? oldPkgs66;
    checkMissing(oldPkgs67);
    c113 = `is.object`(oldPkgs67);
    if c113 then L259() else L260(oldPkgs62);
  L294():
    p31 = prom<V +>{
      update6 = ld update;
      update7 = force? update6;
      checkMissing(update7);
      c121 = `is.object`(update7);
      if c121 then L1() else L2(update7);
    L0(dx32):
      return dx32;
    L1():
      dr28 = tryDispatchBuiltin.1("[", update7);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(update9):
      instlib5 = ld instlib;
      instlib6 = force? instlib5;
      checkMissing(instlib6);
      l1 = ld l;
      l2 = force? l1;
      checkMissing(l2);
      r157 = `==`(instlib6, l2);
      __12 = ldf `[` in base;
      r158 = dyn __12(update9, r157, "Package");
      goto L0(r158);
    L3():
      dx31 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx31);
    };
    p32 = prom<V +>{
      l3 = ld l;
      l4 = force? l3;
      checkMissing(l4);
      return l4;
    };
    p33 = prom<V +>{
      repos3 = ld repos;
      repos4 = force? repos3;
      checkMissing(repos4);
      return repos4;
    };
    p34 = prom<V +>{
      method5 = ld method;
      method6 = force? method5;
      checkMissing(method6);
      return method6;
    };
    ddd2 = ld `...`;
    p35 = prom<V +>{
      type9 = ld type;
      type10 = force? type9;
      checkMissing(type10);
      return type10;
    };
    r164 = dyn install_packages[, , repos, method, `...`, type](p31, p32, p33, p34, ddd2, p35);
    check L295() else D84();
  L297():
    p36 = prom<V +>{
      update10 = ld update;
      update11 = force? update10;
      checkMissing(update11);
      c122 = `is.object`(update11);
      if c122 then L1() else L2(update11);
    L0(dx34):
      return dx34;
    L1():
      dr30 = tryDispatchBuiltin.1("[", update11);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(update13):
      instlib7 = ld instlib;
      instlib8 = force? instlib7;
      checkMissing(instlib8);
      l5 = ld l;
      l6 = force? l5;
      checkMissing(l6);
      r166 = `==`(instlib8, l6);
      __13 = ldf `[` in base;
      r167 = dyn __13(update13, r166, "Package");
      goto L0(r167);
    L3():
      dx33 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx33);
    };
    p37 = prom<V +>{
      l7 = ld l;
      l8 = force? l7;
      checkMissing(l8);
      return l8;
    };
    p38 = prom<V +>{
      contriburl5 = ld contriburl;
      contriburl6 = force? contriburl5;
      checkMissing(contriburl6);
      return contriburl6;
    };
    p39 = prom<V +>{
      method7 = ld method;
      method8 = force? method7;
      checkMissing(method8);
      return method8;
    };
    p40 = prom<V +>{
      available7 = ld available;
      available8 = force? available7;
      checkMissing(available8);
      return available8;
    };
    ddd3 = ld `...`;
    p41 = prom<V +>{
      type11 = ld type;
      type12 = force? type11;
      checkMissing(type12);
      return type12;
    };
    r174 = dyn install_packages1[, , contriburl, method, available, `...`, type](p36, p37, p38, p39, p40, ddd3, p41);
    check L298() else D86();
  D35():
    deopt 155 [];
  D84():
    deopt 366 [i2, r164];
  D86():
    deopt 380 [i2, r174];
  L73(oldPkgs73, dx25):
    match = ldf match in base;
    r140 = dyn match(k1, dx25, NA_INT, NULL);
    check L262() else D67();
  L168():
    p20 = prom<V +>{
      sprintf = ldf sprintf;
      p18 = prom<V +>{
        oldPkgs25 = ld oldPkgs;
        oldPkgs26 = force? oldPkgs25;
        checkMissing(oldPkgs26);
        c54 = `is.object`(oldPkgs26);
        if c54 then L1() else L2(oldPkgs26);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", oldPkgs26);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(oldPkgs28):
        pkg10 = ld pkg;
        pkg11 = force? pkg10;
        __3 = ldf `[` in base;
        r78 = dyn __3(oldPkgs28, pkg11);
        goto L0(r78);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p19 = prom<V +>{
        oldPkgs29 = ld oldPkgs;
        oldPkgs30 = force? oldPkgs29;
        checkMissing(oldPkgs30);
        c55 = `is.object`(oldPkgs30);
        if c55 then L1() else L2(oldPkgs30);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[", oldPkgs30);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(oldPkgs32):
        pkg12 = ld pkg;
        pkg13 = force? pkg12;
        __4 = ldf `[` in base;
        r80 = dyn __4(oldPkgs32, pkg13, 2.0);
        goto L0(r80);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r82 = dyn sprintf("package '%s' in library '%s' will not be updated", p18, p19);
      return r82;
    };
    r84 = dyn warning[, `call.`, `immediate.`](p20, FALSE, TRUE);
    check L169() else D36();
  L259():
    dr24 = tryDispatchBuiltin.1("[", oldPkgs67);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L261() else L260(oldPkgs62);
  L260(oldPkgs70):
    __9 = ldf `[` in base;
    r139 = dyn __9(oldPkgs67, <missing>, 1);
    goto L73(oldPkgs70, r139);
  L295():
    goto L85(i2);
  L298():
    goto L85(i2);
  D36():
    deopt 161 [r84];
  D67():
    deopt 304 [oldPkgs73, r140];
  L169():
    oldPkgs33 = ld oldPkgs;
    check L170() else D37();
  L261():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L73(oldPkgs62, dx24);
  L262():
    goto L72(r140);
  D37():
    deopt 162 [oldPkgs33];
  L170():
    oldPkgs34 = force? oldPkgs33;
    checkMissing(oldPkgs34);
    c56 = `is.object`(oldPkgs34);
    if c56 then L171() else L172(oldPkgs34);
  L44(dx11):
    st oldPkgs = dx11;
    pkg16 = ld pkg;
    check L175() else D39();
  L171():
    dr10 = tryDispatchBuiltin.1("[", oldPkgs34);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L173() else L172(dr10);
  L172(oldPkgs36):
    pkg14 = ld pkg;
    check L174() else D38();
  D38():
    deopt 164 [oldPkgs36, pkg14];
  D39():
    deopt 173 [pkg16];
  L173():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L44(dx10);
  L174():
    pkg15 = force? pkg14;
    checkMissing(pkg15);
    r85 = `-`(<missing>, pkg15);
    __5 = ldf `[` in base;
    r86 = dyn __5(oldPkgs34, r85, <missing>, FALSE);
    goto L44(r86);
  L175():
    pkg17 = force? pkg16;
    checkMissing(pkg17);
    r87 = `-`(pkg17, 1);
    st pkg = r87;
    goto L45();
  }
}
fun inner4077758179(old) {
  (reg old:*) -+> V { var old:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nrow:cls, reg old1:*, reg old2:V, reg p:p(V +), reg r3:V, reg r4:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg cat:cls, reg old3:*, reg old4:V, reg c1:L, reg old6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg k:*, reg k1:V, reg __:cls, reg r5:V, reg p1:p(V +), reg old7:*, reg old8:V, reg c2:L, reg old10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg k2:*, reg k3:V, reg __1:cls, reg r7:V, reg p2:p(V +), reg old11:*, reg old12:V, reg c3:L, reg old14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg k4:*, reg k5:V, reg __2:cls, reg r9:V, reg p3:p(V +), reg checkBuilt:*, reg checkBuilt1:V, reg c4:L, reg paste:cls, reg old15:*, reg old16:V, reg c5:L, reg old18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg k6:*, reg k7:V, reg __3:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg old19:*, reg old20:V, reg c6:L, reg old22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg k8:*, reg k9:V, reg __4:cls, reg r15:V, reg p6:p(V +), reg simplifyRepos:cls, reg old23:*, reg old24:V, reg c7:L, reg old26:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg k10:*, reg k11:V, reg __5:cls, reg r17:V, reg p7:p(V +), reg type:*, reg type1:V, reg p8:p(V +), reg r20:V, reg p9:p(V +), reg r22:V, reg cat1:cls, reg r23:V, reg askYesNo:cls, reg r24:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg i7:I, reg r26:V, reg answer:*, reg answer1:V, reg is_na:cls, reg r27:V, reg c8:L, reg cat2:cls, reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg invisible:cls, reg r31:V, reg isTRUE:cls, reg answer2:*, reg answer3:V, reg p10:p(V +), reg r35:V, reg c9:L, reg rbind:cls, reg update:*, reg update1:V, reg p11:p(V +), reg old27:*, reg old28:V, reg c10:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg k12:*, reg k13:V, reg __6:cls, reg r37:V, reg p12:p(V +), reg r39:V, reg i17:I, reg update2:*, reg update3:V |
    mkenv;
    st old = old;
    st update = NULL;
    sym = ldf seq_len;
    base = ldf seq_len in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L9():
    nrow = ldf nrow;
    check L11() else D0();
  L10():
    r = dyn base(<lang nrow(old)>);
    goto L0(r);
  D0():
    deopt 5 [];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L13() else L8();
  L11():
    p = prom<V +>{
      old1 = ld old;
      old2 = force? old1;
      checkMissing(old2);
      return old2;
    };
    r3 = dyn nrow(p);
    check L12() else D1();
  D1():
    deopt 7 [r3];
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    cat = ldf cat;
    check L14() else D2();
  L12():
    r4 = seq_len(r3);
    goto L0(r4);
  L13():
    update2 = ld update;
    check L38() else D17();
  D2():
    deopt 10 [i2];
  D17():
    deopt 65 [update2];
  L14():
    p1 = prom<V +>{
      old3 = ld old;
      old4 = force? old3;
      checkMissing(old4);
      c1 = `is.object`(old4);
      if c1 then L1() else L2(old4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", old4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(old6):
      k = ld k;
      k1 = force? k;
      __ = ldf `[` in base;
      r5 = dyn __(old6, k1, "Package");
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      old7 = ld old;
      old8 = force? old7;
      checkMissing(old8);
      c2 = `is.object`(old8);
      if c2 then L1() else L2(old8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", old8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(old10):
      k2 = ld k;
      k3 = force? k2;
      __1 = ldf `[` in base;
      r7 = dyn __1(old10, k3, "Installed");
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      old11 = ld old;
      old12 = force? old11;
      checkMissing(old12);
      c3 = `is.object`(old12);
      if c3 then L1() else L2(old12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", old12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(old14):
      k4 = ld k;
      k5 = force? k4;
      __2 = ldf `[` in base;
      r9 = dyn __2(old14, k5, "LibPath");
      goto L0(r9);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p5 = prom<V +>{
      checkBuilt = ld checkBuilt;
      checkBuilt1 = force? checkBuilt;
      checkMissing(checkBuilt1);
      c4 = `as.logical`(checkBuilt1);
      if c4 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      paste = ldf paste;
      p4 = prom<V +>{
        old15 = ld old;
        old16 = force? old15;
        checkMissing(old16);
        c5 = `is.object`(old16);
        if c5 then L1() else L2(old16);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", old16);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(old18):
        k6 = ld k;
        k7 = force? k6;
        __3 = ldf `[` in base;
        r11 = dyn __3(old18, k7, "Built");
        goto L0(r11);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r13 = dyn paste("built under R", p4);
      return r13;
    };
    p6 = prom<V +>{
      old19 = ld old;
      old20 = force? old19;
      checkMissing(old20);
      c6 = `is.object`(old20);
      if c6 then L1() else L2(old20);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", old20);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(old22):
      k8 = ld k;
      k9 = force? k8;
      __4 = ldf `[` in base;
      r15 = dyn __4(old22, k9, "ReposVer");
      goto L0(r15);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p9 = prom<V +>{
      simplifyRepos = ldf simplifyRepos;
      p7 = prom<V +>{
        old23 = ld old;
        old24 = force? old23;
        checkMissing(old24);
        c7 = `is.object`(old24);
        if c7 then L1() else L2(old24);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", old24);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(old26):
        k10 = ld k;
        k11 = force? k10;
        __5 = ldf `[` in base;
        r17 = dyn __5(old26, k11, "Repository");
        goto L0(r17);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      p8 = prom<V +>{
        type = ld type;
        type1 = force? type;
        checkMissing(type1);
        return type1;
      };
      r20 = dyn simplifyRepos(p7, p8);
      return r20;
    };
    r22 = dyn cat(p1, ":\n", "Version", p2, "installed in", p3, p5, "\n", "Version", p6, "available at", p9);
    check L15() else D3();
  L38():
    update3 = force? update2;
    checkMissing(update3);
    popenv;
    return update3;
  D3():
    deopt 23 [i2, r22];
  L15():
    cat1 = ldf cat;
    check L16() else D4();
  D4():
    deopt 25 [i2];
  L16():
    r23 = dyn cat1("\n");
    check L17() else D5();
  D5():
    deopt 27 [i2, r23];
  L17():
    askYesNo = ldf askYesNo;
    check L18() else D6();
  D6():
    deopt 29 [i2];
  L18():
    r24 = dyn askYesNo("Update?");
    check L19() else D7();
  D7():
    deopt 31 [i2, r24];
  L19():
    st answer = r24;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L2(i7, r26):
    c8 = `as.logical`(r26);
    if c8 then L24() else L3();
  L20():
    answer = ld answer;
    check L22() else D8();
  L21():
    r25 = dyn base1(<sym answer>);
    goto L2(i2, r25);
  D8():
    deopt 35 [i2, answer];
  L3():
    isTRUE = ldf isTRUE;
    check L32() else D13();
  L22():
    answer1 = force? answer;
    checkMissing(answer1);
    is_na = ldf `is.na` in base;
    r27 = dyn is_na(answer1);
    check L23() else D9();
  L24():
    cat2 = ldf cat;
    check L25() else D10();
  D9():
    deopt 38 [i2, r27];
  D10():
    deopt 40 [i7];
  D13():
    deopt 51 [i7];
  L23():
    goto L2(i2, r27);
  L25():
    r28 = dyn cat2("cancelled by user\n");
    check L26() else D11();
  L32():
    p10 = prom<V +>{
      answer2 = ld answer;
      answer3 = force? answer2;
      checkMissing(answer3);
      return answer3;
    };
    r35 = dyn isTRUE(p10);
    check L33() else D14();
  D11():
    deopt 42 [i7, r28];
  D14():
    deopt 53 [i7, r35];
  L26():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L33():
    c9 = `as.logical`(r35);
    if c9 then L34() else L6();
  L4(r30):
    popenv;
    return r30;
  L6():
    goto L7(i7);
  L7(i17):
    goto L1(i17);
  L27():
    invisible = ldf invisible in base;
    r31 = dyn invisible();
    check L29() else D12();
  L28():
    r29 = dyn base2();
    goto L4(r29);
  L34():
    rbind = ldf rbind;
    check L35() else D15();
  D12():
    deopt 46 [i7, r31];
  D15():
    deopt 55 [i7];
  L29():
    goto L4(r31);
  L35():
    p11 = prom<V +>{
      update = ld update;
      update1 = force? update;
      checkMissing(update1);
      return update1;
    };
    p12 = prom<V +>{
      old27 = ld old;
      old28 = force? old27;
      checkMissing(old28);
      c10 = `is.object`(old28);
      if c10 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", old28);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      k12 = ld k;
      k13 = force? k12;
      __6 = ldf `[` in base;
      r37 = dyn __6(old28, k13, <missing>);
      goto L0(r37);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r39 = dyn rbind(p11, p12);
    check L36() else D16();
  D16():
    deopt 58 [i7, r39];
  L36():
    st update = r39;
    goto L7(i7);
  }
}