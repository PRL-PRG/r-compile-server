fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4026916110;
    st getDependencies = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4026916110(pkgs, dependencies, available, lib, binary, `...`, av2) {
  (reg pkgs:*, reg dependencies:*, reg available:*, reg lib:*, reg binary:*, reg ddd:dots, reg av2:*) -+> V { var pkgs:*, var dependencies:*, reg dependencies_isMissing:L, reg dependencies_orDefault:*, var available:*, reg available_isMissing:L, reg available_orDefault:*, var lib:*, reg lib_isMissing:L, reg lib_orDefault:*, reg _libPaths:cls, reg r:V, reg c:L, reg r2:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg p:p(V +), var binary:*, reg binary_isMissing:L, reg binary_orDefault:*, var `...`:dots?, var av2:*, reg av2_isMissing:L, reg av2_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg dependencies1:*, reg dependencies2:V, reg c1:V, reg c2:L, reg unique:cls, reg pkgs1:*, reg pkgs2:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg lib1:*, reg lib2:V, reg length:cls, reg r13:V, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg dependencies3:*, reg dependencies4:V, reg c3:L, reg c4:L, reg c6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg c9:L, reg r18:V, reg dependencies5:*, reg dependencies6:V, reg is_na:cls, reg r19:V, reg c10:L, reg c11:V, reg c13:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg c14:cls, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg dependencies7:*, reg dependencies8:V, reg c15:L, reg c16:L, reg c17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg c21:L, reg r27:V, reg dependencies9:*, reg dependencies10:V, reg c22:L, reg c23:L, reg c26:L, reg c27:V, reg dependencies11:*, reg dependencies12:V, reg c28:L, reg c29:V, reg c32:L, reg c33:V, reg depends:*, reg depends1:V, reg c35:L, reg c37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg c40:L, reg r29:V, reg dependencies13:*, reg dependencies14:V, reg c41:L, reg c42:L, reg c43:V, reg c45:L, reg binary1:*, reg binary2:V, reg c46:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r30:V, reg r31:V, reg c47:cls, reg r32:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r33:V, reg r34:V, reg c48:cls, reg r35:V, reg r36:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r37:V, reg r38:V, reg c49:cls, reg r39:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r40:V, reg r41:V, reg c50:cls, reg r42:V, reg depends2:*, reg depends3:V, reg c51:L, reg c53:V, reg oneLib:*, reg oneLib1:V, reg r44:V, reg c54:L, reg c55:V, reg c57:L, reg warning:cls, reg r45:V, reg unique1:cls, reg pkgs3:*, reg pkgs4:V, reg p2:p(V +), reg r48:V, reg _in_:cls, reg p3:*, reg p4:V, reg p5:p(V +), reg row_names:cls, reg available1:*, reg available2:V, reg p6:p(V +), reg r51:V, reg p7:p(V +), reg r53:V, reg r54:V, reg vapply:cls, reg p8:*, reg p9:V, reg p10:p(V +), reg isBasePkg:*, reg isBasePkg1:V, reg p11:p(V +), reg r57:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r58:V, reg r59:V, reg base13:*, reg base14:V, reg sum:cls, reg r60:V, reg c58:L, reg warning1:cls, reg sprintf:cls, reg ngettext:cls, reg sym13:cls, reg base15:cls, reg guard13:L, reg r61:V, reg r62:V, reg base16:*, reg base17:V, reg sum1:cls, reg r63:V, reg p12:p(V +), reg r65:V, reg p13:p(V +), reg paste:cls, reg sQuote:cls, reg p14:*, reg p15:V, reg c59:L, reg p17:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg base18:*, reg base19:V, reg __1:cls, reg r67:V, reg p18:p(V +), reg r69:V, reg p19:p(V +), reg r71:V, reg p20:p(V +), reg r73:V, reg p21:p(V +), reg r75:V, reg miss:*, reg miss1:V, reg base20:*, reg base21:V, reg r77:V, reg r78:V, reg sym14:cls, reg base22:cls, reg guard14:L, reg r79:V, reg r80:V, reg m0:*, reg m1:V, reg sum2:cls, reg r81:V, reg c60:L, reg c62:V, reg sym15:cls, reg base23:cls, reg guard15:L, reg r82:V, reg c65:L, reg r83:V, reg av3:*, reg av4:V, reg c66:V, reg r84:V, reg c67:L, reg c68:V, reg c70:L, reg _in_1:cls, reg rownames:cls, reg av5:*, reg av6:V, reg p22:p(V +), reg r86:V, reg p23:p(V +), reg p24:*, reg p25:V, reg c71:L, reg p27:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg m2:*, reg m3:V, reg __2:cls, reg r88:V, reg p28:p(V +), reg r90:V, reg av7:*, reg av8:V, reg c72:L, reg av10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg keep:*, reg keep1:V, reg __3:cls, reg r91:V, reg nrow:cls, reg av11:*, reg av12:V, reg p29:p(V +), reg r93:V, reg c73:L, reg av13:*, reg av14:V, reg c74:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r94:V, reg l:*, reg c75:L, reg r96:S, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym16:cls, reg base24:cls, reg guard16:L, reg r103:V, reg r104:S, reg l5:*, reg r105:S, reg r106:V, reg ds:*, reg ds1:V, reg is_na1:cls, reg r107:V, reg ___:cls, reg r108:V, reg lapply:cls, reg strsplit:cls, reg sub:cls, reg ds2:*, reg ds3:V, reg p30:p(V +), reg r110:V, reg p31:p(V +), reg r112:V, reg p32:p(V +), reg r114:cls, reg p33:p(V +), reg r116:V, reg lengths:cls, reg x:*, reg x1:V, reg p34:p(V +), reg r118:V, reg which:cls, reg lens:*, reg lens1:V, reg r119:V, reg p35:p(V +), reg r121:V, reg av17:*, reg av18:V, reg c76:L, reg av20:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg pos:*, reg pos1:V, reg __5:cls, reg r122:V, reg x2:*, reg x3:V, reg c77:L, reg x5:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg pos2:*, reg pos3:V, reg __6:cls, reg r123:V, reg paste1:cls, reg sQuote1:cls, reg av21:*, reg av22:V, reg c78:L, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __7:cls, reg r124:V, reg p36:p(V +), reg r126:V, reg p37:p(V +), reg av25:*, reg av26:V, reg c79:L, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __8:cls, reg r128:V, reg p38:p(V +), reg unlist:cls, reg x6:*, reg x7:V, reg p39:p(V +), reg r131:V, reg p40:p(V +), reg r133:V, reg r134:V, reg sym17:cls, reg base25:cls, reg guard17:L, reg r136:V, reg r137:V, reg m4:*, reg m5:V, reg sum3:cls, reg r138:V, reg c80:L, reg paste2:cls, reg binary3:*, reg binary4:V, reg c81:L, reg p41:p(V +), reg r140:V, reg sym18:cls, reg base26:cls, reg guard18:L, reg r141:V, reg r142:V, reg paste3:cls, reg ngettext1:cls, reg sym19:cls, reg base27:cls, reg guard19:L, reg r143:V, reg r144:V, reg m6:*, reg m7:V, reg sum4:cls, reg r145:V, reg p42:p(V +), reg r147:V, reg p43:p(V +), reg grepl:cls, reg R_version_string:*, reg R_version_string1:V, reg p44:p(V +), reg r150:V, reg c82:L, reg p45:p(V +), reg r152:V, reg c83:cls, reg r153:V, reg warning2:cls, reg sprintf1:cls, reg ngettext2:cls, reg sym20:cls, reg base28:cls, reg guard20:L, reg r154:V, reg r155:V, reg m8:*, reg m9:V, reg sum5:cls, reg r156:V, reg p46:p(V +), reg r158:V, reg p47:p(V +), reg paste4:cls, reg sQuote2:cls, reg p48:*, reg p49:V, reg c84:L, reg p51:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg m10:*, reg m11:V, reg __9:cls, reg r160:V, reg p52:p(V +), reg r162:V, reg p53:p(V +), reg r164:V, reg p54:p(V +), reg paste5:cls, reg sym21:cls, reg base29:cls, reg guard21:L, reg r166:V, reg r167:V, reg msg:*, reg msg1:V, reg msg2:*, reg msg3:V, reg msg4:*, reg msg5:V, reg c85:cls, reg r168:V, reg p55:p(V +), reg r170:V, reg p56:p(V +), reg r172:V, reg p57:p(V +), reg r174:V, reg sym22:cls, reg base30:cls, reg guard22:L, reg r175:V, reg r176:V, reg m12:*, reg m13:V, reg sum6:cls, reg r177:V, reg r178:V, reg c86:L, reg c88:V, reg sym23:cls, reg base31:cls, reg guard23:L, reg r179:V, reg c91:L, reg r180:V, reg sym24:cls, reg base32:cls, reg guard24:L, reg r181:V, reg c94:L, reg r182:V, reg tolower:cls, reg p58:*, reg p59:V, reg c95:L, reg p61:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg m14:*, reg m15:V, reg __10:cls, reg r183:V, reg p62:p(V +), reg r185:V, reg tolower1:cls, reg row_names1:cls, reg available3:*, reg available4:V, reg p63:p(V +), reg r187:V, reg p64:p(V +), reg r189:V, reg match:cls, reg r190:V, reg is_na2:cls, reg r191:V, reg r192:V, reg c96:L, reg c97:V, reg c99:L, reg warning3:cls, reg sprintf2:cls, reg sQuote3:cls, reg row_names2:cls, reg available5:*, reg available6:V, reg p65:p(V +), reg r194:V, reg c100:L, reg r196:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg w:*, reg w1:V, reg __11:cls, reg r197:V, reg p66:p(V +), reg r199:V, reg p67:p(V +), reg r201:V, reg p68:p(V +), reg r203:V, reg flush_console:cls, reg r205:V, reg p69:*, reg p70:V, reg c101:L, reg p72:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg miss2:*, reg miss3:V, reg r207:V, reg __12:cls, reg r208:V, reg depends4:*, reg depends5:V, reg c102:L, reg c104:V, reg sym25:cls, reg base33:cls, reg guard25:L, reg r209:V, reg c107:L, reg r210:V, reg p73:*, reg p74:V, reg length1:cls, reg r211:V, reg c108:L, reg c109:V, reg c111:L, reg p75:*, reg p76:V, reg _libPaths1:cls, reg r212:V, reg _in_2:cls, reg lib3:*, reg lib4:V, reg p77:p(V +), reg libpath:*, reg libpath1:V, reg p78:p(V +), reg r215:V, reg r216:V, reg c112:L, reg sym26:cls, reg base34:cls, reg guard26:L, reg r217:V, reg r218:V, reg lib5:*, reg lib6:V, reg libpath2:*, reg libpath3:V, reg c113:cls, reg r219:V, reg installed_packages:cls, reg libpath4:*, reg libpath5:V, reg p79:p(V +), reg sym27:cls, reg base35:cls, reg guard27:L, reg r222:V, reg r223:V, reg c114:cls, reg r224:V, reg p80:p(V +), reg ddd1:dots?, reg r226:V, reg character:cls, reg r227:V, reg apply:cls, reg available7:*, reg available8:V, reg c115:L, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg p81:*, reg p82:V, reg dependencies15:*, reg dependencies16:V, reg __13:cls, reg r228:V, reg p83:p(V +), reg r230:cls, reg p84:p(V +), reg r232:V, reg _clean_up_dependencies2:cls, reg deps:*, reg deps1:V, reg p85:p(V +), reg installed:*, reg installed1:V, reg p86:p(V +), reg available11:*, reg available12:V, reg p87:p(V +), reg r236:V, reg sym28:cls, reg base36:cls, reg guard28:L, reg r237:V, reg r238:V, reg not_avail:*, reg not_avail1:V, reg res:*, reg res1:V, reg c116:L, reg res3:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg __14:cls, reg r239:V, reg c117:cls, reg r240:V, reg unique2:cls, reg res4:*, reg res5:V, reg c118:L, reg res7:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg __15:cls, reg r241:V, reg p88:p(V +), reg r243:V, reg deps2:*, reg deps3:V, reg c119:L, reg deps5:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg _in_3:cls, reg deps6:*, reg deps7:V, reg p89:p(V +), reg sym29:cls, reg base37:cls, reg guard29:L, reg r245:V, reg r246:V, reg pkgs5:*, reg pkgs6:V, reg c120:cls, reg r247:V, reg p90:p(V +), reg r249:V, reg r250:V, reg __16:cls, reg r251:V, reg sym30:cls, reg base38:cls, reg guard30:L, reg r252:V, reg r253:V, reg deps8:*, reg deps9:V, reg length2:cls, reg r254:V, reg r255:V, reg c121:L, reg sym31:cls, reg base39:cls, reg guard31:L, reg r257:V, reg r258:V, reg deps10:*, reg deps11:V, reg pkgs7:*, reg pkgs8:V, reg c122:cls, reg r259:V, reg deps12:*, reg deps13:V, reg sym32:cls, reg base40:cls, reg guard32:L, reg r260:V, reg r261:V, reg dep2:*, reg dep3:V, reg c123:V, reg r262:V, reg c124:L, reg dep4:*, reg dep5:V, reg sym33:cls, reg base41:cls, reg guard33:L, reg r264:V, reg r265:V, reg not_avail2:*, reg not_avail3:V, reg length3:cls, reg r266:V, reg c125:L, reg unique3:cls, reg not_avail4:*, reg not_avail5:V, reg p91:p(V +), reg r268:V, reg warning4:cls, reg sprintf3:cls, reg ngettext3:cls, reg sym34:cls, reg base42:cls, reg guard34:L, reg r269:V, reg r270:V, reg not_avail6:*, reg not_avail7:V, reg length4:cls, reg r271:V, reg p92:p(V +), reg r273:V, reg p93:p(V +), reg paste6:cls, reg sQuote4:cls, reg not_avail8:*, reg not_avail9:V, reg p94:p(V +), reg r276:V, reg p95:p(V +), reg r278:V, reg p96:p(V +), reg r280:V, reg p97:p(V +), reg r282:V, reg flush_console1:cls, reg r283:V, reg unique4:cls, reg pkgs9:*, reg pkgs10:V, reg p98:p(V +), reg r286:V, reg pkgs11:*, reg pkgs12:V, reg c126:L, reg pkgs14:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg _in_4:cls, reg pkgs15:*, reg pkgs16:V, reg p99:p(V +), reg row_names3:cls, reg available13:*, reg available14:V, reg p100:p(V +), reg r289:V, reg p101:p(V +), reg r291:V, reg __17:cls, reg r292:V, reg sym35:cls, reg base43:cls, reg guard35:L, reg r293:V, reg r294:V, reg pkgs17:*, reg pkgs18:V, reg length5:cls, reg r295:V, reg sym36:cls, reg base44:cls, reg guard36:L, reg r298:V, reg r299:V, reg r300:V, reg p102:*, reg p103:V, reg length6:cls, reg r301:V, reg r302:V, reg c127:L, reg setdiff:cls, reg pkgs19:*, reg pkgs20:V, reg p104:p(V +), reg p105:*, reg p106:V, reg p107:p(V +), reg r305:V, reg message:cls, reg sprintf4:cls, reg ngettext4:cls, reg sym37:cls, reg base45:cls, reg guard37:L, reg r306:V, reg r307:V, reg added:*, reg added1:V, reg length7:cls, reg r308:V, reg p108:p(V +), reg r310:V, reg p109:p(V +), reg paste7:cls, reg sQuote5:cls, reg added2:*, reg added3:V, reg p110:p(V +), reg r313:V, reg p111:p(V +), reg r315:V, reg p112:p(V +), reg r317:V, reg p113:p(V +), reg r319:V, reg flush_console2:cls, reg r320:V, reg pkgs21:*, reg pkgs22:V, reg p114:*, reg p115:V |
    mkenv;
    st pkgs = pkgs;
    dependencies_isMissing = missing.0(dependencies);
    if dependencies_isMissing then L0(NA_LGL) else L0(dependencies);
  L0(dependencies_orDefault):
    st dependencies = dependencies_orDefault;
    available_isMissing = missing.0(available);
    if available_isMissing then L1(NULL) else L1(available);
  L1(available_orDefault):
    st available = available_orDefault;
    lib_isMissing = missing.0(lib);
    if lib_isMissing then L2() else L3(lib);
  L2():
    p = prom<V +>{
      _libPaths = ldf `.libPaths`;
      r = dyn _libPaths();
      c = `is.object`(r);
      if c then L1() else L2(r);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r2):
      __ = ldf `[` in base;
      r3 = dyn __(r2, 1);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L3(p);
  L3(lib_orDefault):
    st lib = lib_orDefault;
    binary_isMissing = missing.0(binary);
    if binary_isMissing then L4(FALSE) else L4(binary);
  L4(binary_orDefault):
    st binary = binary_orDefault;
    st `...` = ddd;
    av2_isMissing = missing.0(av2);
    if av2_isMissing then L5(NULL) else L5(av2);
  L5(av2_orDefault):
    st av2 = av2_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L87() else L88();
  L6(r6):
    c2 = `as.logical`(r6);
    if c2 then L90() else L7();
  L87():
    dependencies1 = ld dependencies;
    check L89() else D0();
  L88():
    r5 = dyn base(<sym dependencies>);
    goto L6(r5);
  D0():
    deopt 1 [dependencies1];
  L7():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L95() else L96();
  L89():
    dependencies2 = force? dependencies1;
    checkMissing(dependencies2);
    c1 = `==`(dependencies2, NULL);
    goto L6(c1);
  L90():
    unique = ldf unique;
    check L91() else D1();
  D1():
    deopt 5 [];
  L9(r12):
    r14 = `==`(r12, 1);
    st oneLib = r14;
    st dep2 = NULL;
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L99() else L100();
  L91():
    p1 = prom<V +>{
      pkgs1 = ld pkgs;
      pkgs2 = force? pkgs1;
      checkMissing(pkgs2);
      return pkgs2;
    };
    r8 = dyn unique(p1);
    check L92() else D2();
  L95():
    lib1 = ld lib;
    check L97() else D3();
  L96():
    r11 = dyn base1(<sym lib>);
    goto L9(r11);
  D2():
    deopt 7 [r8];
  D3():
    deopt 13 [lib1];
  L10(r16):
    c4 = `as.logical`(r16);
    if c4 then L102() else L11(c4);
  L92():
    popenv;
    return r8;
  L97():
    lib2 = force? lib1;
    checkMissing(lib2);
    length = ldf length in base;
    r13 = dyn length(lib2);
    check L98() else D4();
  L99():
    dependencies3 = ld dependencies;
    check L101() else D5();
  L100():
    r15 = dyn base2(<sym dependencies>);
    goto L10(r15);
  D4():
    deopt 16 [r13];
  D5():
    deopt 24 [dependencies3];
  L11(c6):
    c13 = `as.logical`(c6);
    if c13 then L108() else L13();
  L98():
    goto L9(r13);
  L101():
    dependencies4 = force? dependencies3;
    checkMissing(dependencies4);
    c3 = `is.logical`(dependencies4);
    goto L10(c3);
  L102():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L103() else L104();
  L12(c9, r18):
    c10 = `as.logical`(r18);
    c11 = `&&`(c9, c10);
    goto L11(c11);
  L13():
    goto L15();
  L15():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L113() else L114();
  L103():
    dependencies5 = ld dependencies;
    check L105() else D6();
  L104():
    r17 = dyn base3(<sym dependencies>);
    goto L12(c4, r17);
  L108():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L109() else L110();
  D6():
    deopt 29 [c4, dependencies5];
  L14(r21):
    st dependencies = r21;
    goto L15();
  L16(r25):
    c16 = `as.logical`(r25);
    if c16 then L17(c16) else L116();
  L105():
    dependencies6 = force? dependencies5;
    checkMissing(dependencies6);
    is_na = ldf `is.na` in base;
    r19 = dyn is_na(dependencies6);
    check L106() else D7();
  L109():
    c14 = ldf c in base;
    r22 = dyn c14("Depends", "Imports", "LinkingTo");
    check L111() else D8();
  L110():
    r20 = dyn base4("Depends", "Imports", "LinkingTo");
    goto L14(r20);
  L113():
    dependencies7 = ld dependencies;
    check L115() else D9();
  L114():
    r24 = dyn base5(<sym dependencies>);
    goto L16(r24);
  D7():
    deopt 32 [c4, r19];
  D8():
    deopt 40 [r22];
  D9():
    deopt 45 [dependencies7];
  L17(c17):
    st depends = c17;
    depends = ld depends;
    check L124() else D12();
  L106():
    goto L12(c4, r19);
  L111():
    goto L14(r22);
  L115():
    dependencies8 = force? dependencies7;
    checkMissing(dependencies8);
    c15 = `is.character`(dependencies8);
    goto L16(c15);
  L116():
    sym6 = ldf `is.logical`;
    base6 = ldf `is.logical` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L117() else L118();
  D12():
    deopt 57 [depends];
  L18(c21, r27):
    c23 = `as.logical`(r27);
    if c23 then L120() else L19(c21, c23);
  L117():
    dependencies9 = ld dependencies;
    check L119() else D10();
  L118():
    r26 = dyn base6(<sym dependencies>);
    goto L18(c16, r26);
  L124():
    depends1 = force? depends;
    checkMissing(depends1);
    c35 = `as.logical`(depends1);
    if c35 then L125() else L20(c35);
  D10():
    deopt 49 [c16, dependencies9];
  L19(c26, c27):
    c32 = `as.logical`(c27);
    c33 = `||`(c26, c32);
    goto L17(c33);
  L20(c37):
    c45 = `as.logical`(c37);
    if c45 then L130() else L22();
  L119():
    dependencies10 = force? dependencies9;
    checkMissing(dependencies10);
    c22 = `is.logical`(dependencies10);
    goto L18(c16, c22);
  L120():
    dependencies11 = ld dependencies;
    check L121() else D11();
  L125():
    sym7 = ldf `is.logical`;
    base7 = ldf `is.logical` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L126() else L127();
  D11():
    deopt 52 [c21, c23, dependencies11];
  L21(c40, r29):
    c42 = `as.logical`(r29);
    c43 = `&&`(c40, c42);
    goto L20(c43);
  L22():
    goto L29();
  L29():
    depends2 = ld depends;
    check L147() else D19();
  L121():
    dependencies12 = force? dependencies11;
    checkMissing(dependencies12);
    c28 = `as.logical`(dependencies12);
    c29 = `&&`(c23, c28);
    goto L19(c21, c29);
  L126():
    dependencies13 = ld dependencies;
    check L128() else D13();
  L127():
    r28 = dyn base7(<sym dependencies>);
    goto L21(c35, r28);
  L130():
    binary1 = ld binary;
    check L131() else D14();
  D13():
    deopt 60 [c35, dependencies13];
  D14():
    deopt 64 [binary1];
  D19():
    deopt 100 [depends2];
  L128():
    dependencies14 = force? dependencies13;
    checkMissing(dependencies14);
    c41 = `is.logical`(dependencies14);
    goto L21(c35, c41);
  L131():
    binary2 = force? binary1;
    checkMissing(binary2);
    c46 = `as.logical`(binary2);
    if c46 then L132() else L23();
  L147():
    depends3 = force? depends2;
    checkMissing(depends3);
    c51 = `as.logical`(depends3);
    if c51 then L148() else L30(c51);
  L23():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L140() else L141();
  L26(r36):
    goto L29();
  L30(c53):
    c57 = `as.logical`(c53);
    if c57 then L151() else L31();
  L132():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L133() else L134();
  L148():
    oneLib = ld oneLib;
    check L149() else D20();
  D20():
    deopt 102 [c51, oneLib];
  L24(r31):
    st dependencies = r31;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L136() else L137();
  L27(r38):
    st dependencies = r38;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L143() else L144();
  L31():
    goto L32();
  L32():
    unique1 = ldf unique;
    check L155() else D23();
  L133():
    c47 = ldf c in base;
    r32 = dyn c47("Depends", "Imports", "Suggests");
    check L135() else D15();
  L134():
    r30 = dyn base8("Depends", "Imports", "Suggests");
    goto L24(r30);
  L140():
    c49 = ldf c in base;
    r39 = dyn c49("Depends", "Imports", "LinkingTo", "Suggests");
    check L142() else D17();
  L141():
    r37 = dyn base10("Depends", "Imports", "LinkingTo", "Suggests");
    goto L27(r37);
  L149():
    oneLib1 = force? oneLib;
    checkMissing(oneLib1);
    r44 = `!`(oneLib1);
    c54 = `as.logical`(r44);
    c55 = `&&`(c51, c54);
    goto L30(c55);
  L151():
    warning = ldf warning;
    check L152() else D21();
  D15():
    deopt 72 [r32];
  D17():
    deopt 88 [r39];
  D21():
    deopt 107 [];
  D23():
    deopt 116 [];
  L25(r34):
    st dep2 = r34;
    goto L26(r34);
  L28(r41):
    st dep2 = r41;
    goto L26(r41);
  L135():
    goto L24(r32);
  L136():
    c48 = ldf c in base;
    r35 = dyn c48("Depends", "Imports");
    check L138() else D16();
  L137():
    r33 = dyn base9("Depends", "Imports");
    goto L25(r33);
  L142():
    goto L27(r39);
  L143():
    c50 = ldf c in base;
    r42 = dyn c50("Depends", "Imports", "LinkingTo");
    check L145() else D18();
  L144():
    r40 = dyn base11("Depends", "Imports", "LinkingTo");
    goto L28(r40);
  L152():
    r45 = dyn warning("Do not know which element of 'lib' to install dependencies into\nskipping dependencies");
    check L153() else D22();
  L155():
    p2 = prom<V +>{
      pkgs3 = ld pkgs;
      pkgs4 = force? pkgs3;
      checkMissing(pkgs4);
      return pkgs4;
    };
    r48 = dyn unique1(p2);
    check L156() else D24();
  D16():
    deopt 79 [r35];
  D18():
    deopt 96 [r42];
  D22():
    deopt 109 [r45];
  D24():
    deopt 118 [r48];
  L138():
    goto L25(r35);
  L145():
    goto L28(r42);
  L153():
    st depends = FALSE;
    goto L32();
  L156():
    st p0 = r48;
    _in_ = ldf `%in%`;
    check L157() else D25();
  D25():
    deopt 121 [];
  L157():
    p5 = prom<V +>{
      p3 = ld p0;
      p4 = force? p3;
      checkMissing(p4);
      return p4;
    };
    p7 = prom<V +>{
      row_names = ldf `row.names`;
      p6 = prom<V +>{
        available1 = ld available;
        available2 = force? available1;
        checkMissing(available2);
        return available2;
      };
      r51 = dyn row_names(p6);
      return r51;
    };
    r53 = dyn _in_(p5, p7);
    check L158() else D26();
  D26():
    deopt 124 [r53];
  L158():
    r54 = `!`(r53);
    st miss = r54;
    vapply = ldf vapply;
    check L159() else D27();
  D27():
    deopt 128 [];
  L159():
    p10 = prom<V +>{
      p8 = ld p0;
      p9 = force? p8;
      checkMissing(p9);
      return p9;
    };
    p11 = prom<V +>{
      isBasePkg = ld isBasePkg;
      isBasePkg1 = force? isBasePkg;
      checkMissing(isBasePkg1);
      return isBasePkg1;
    };
    r57 = dyn vapply(p10, p11, FALSE);
    check L160() else D28();
  D28():
    deopt 132 [r57];
  L160():
    st base = r57;
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L161() else L162();
  L33(r59):
    c58 = `as.logical`(r59);
    if c58 then L165() else L34();
  L161():
    base13 = ld base;
    check L163() else D29();
  L162():
    r58 = dyn base12(<sym base>);
    goto L33(r58);
  D29():
    deopt 136 [base13];
  L34():
    goto L35();
  L35():
    miss = ld miss;
    check L169() else D33();
  L163():
    base14 = force? base13;
    checkMissing(base14);
    sum = ldf sum in base;
    r60 = dyn sum(base14);
    check L164() else D30();
  L165():
    warning1 = ldf warning;
    check L166() else D31();
  D30():
    deopt 139 [r60];
  D31():
    deopt 141 [];
  D33():
    deopt 150 [miss];
  L164():
    goto L33(r60);
  L166():
    p21 = prom<V +>{
      sprintf = ldf sprintf;
      p13 = prom<V +>{
        ngettext = ldf ngettext;
        p12 = prom<V +>{
          sym13 = ldf sum;
          base15 = ldf sum in base;
          guard13 = `==`.4(sym13, base15);
          if guard13 then L1() else L2();
        L0(r62):
          return r62;
        L1():
          base16 = ld base;
          base17 = force? base16;
          checkMissing(base17);
          sum1 = ldf sum in base;
          r63 = dyn sum1(base17);
          goto L0(r63);
        L2():
          r61 = dyn base15(<sym base>);
          goto L0(r61);
        };
        r65 = dyn ngettext(p12, "package %s is a base package, and should not be updated", "packages %s are base packages, and should not be updated");
        return r65;
      };
      p20 = prom<V +>{
        paste = ldf paste;
        p19 = prom<V +>{
          sQuote = ldf sQuote;
          p18 = prom<V +>{
            p14 = ld p0;
            p15 = force? p14;
            checkMissing(p15);
            c59 = `is.object`(p15);
            if c59 then L1() else L2(p15);
          L0(dx3):
            return dx3;
          L1():
            dr2 = tryDispatchBuiltin.1("[", p15);
            dc1 = getTryDispatchBuiltinDispatched(dr2);
            if dc1 then L3() else L2(dr2);
          L2(p17):
            base18 = ld base;
            base19 = force? base18;
            __1 = ldf `[` in base;
            r67 = dyn __1(p17, base19);
            goto L0(r67);
          L3():
            dx2 = getTryDispatchBuiltinValue(dr2);
            goto L0(dx2);
          };
          r69 = dyn sQuote(p18);
          return r69;
        };
        r71 = dyn paste[, collapse](p19, ", ");
        return r71;
      };
      r73 = dyn sprintf(p13, p20);
      return r73;
    };
    r75 = dyn warning1[, domain, `call.`](p21, NA_LGL, FALSE);
    check L167() else D32();
  L169():
    miss1 = force? miss;
    checkMissing(miss1);
    base20 = ld base;
    check L170() else D34();
  D32():
    deopt 147 [r75];
  D34():
    deopt 151 [miss1, base20];
  L167():
    goto L35();
  L170():
    base21 = force? base20;
    checkMissing(base21);
    r77 = `!`(base21);
    r78 = `&&`(miss1, r77);
    st m0 = r78;
    st msg2 = NULL;
    sym14 = ldf sum;
    base22 = ldf sum in base;
    guard14 = `==`.4(sym14, base22);
    if guard14 then L171() else L172();
  L36(r80):
    c60 = `as.logical`(r80);
    if c60 then L175() else L37(c60);
  L171():
    m0 = ld m0;
    check L173() else D35();
  L172():
    r79 = dyn base22(<sym m0>);
    goto L36(r79);
  D35():
    deopt 161 [m0];
  L37(c62):
    c70 = `as.logical`(c62);
    if c70 then L180() else L39();
  L173():
    m1 = force? m0;
    checkMissing(m1);
    sum2 = ldf sum in base;
    r81 = dyn sum2(m1);
    check L174() else D36();
  L175():
    sym15 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base23);
    if guard15 then L176() else L177();
  D36():
    deopt 164 [r81];
  L38(c65, r83):
    r84 = `!`(r83);
    c67 = `as.logical`(r84);
    c68 = `&&`(c65, c67);
    goto L37(c68);
  L39():
    goto L48();
  L48():
    sym17 = ldf sum;
    base25 = ldf sum in base;
    guard17 = `==`.4(sym17, base25);
    if guard17 then L222() else L223();
  L174():
    goto L36(r81);
  L176():
    av3 = ld av2;
    check L178() else D37();
  L177():
    r82 = dyn base23(<sym av2>);
    goto L38(c60, r82);
  L180():
    _in_1 = ldf `%in%`;
    check L181() else D38();
  D37():
    deopt 166 [c60, av3];
  D38():
    deopt 172 [];
  L49(r137):
    c80 = `as.logical`(r137);
    if c80 then L226() else L50();
  L178():
    av4 = force? av3;
    checkMissing(av4);
    c66 = `==`(av4, NULL);
    goto L38(c60, c66);
  L181():
    p23 = prom<V +>{
      rownames = ldf rownames;
      p22 = prom<V +>{
        av5 = ld av2;
        av6 = force? av5;
        checkMissing(av6);
        return av6;
      };
      r86 = dyn rownames(p22);
      return r86;
    };
    p28 = prom<V +>{
      p24 = ld p0;
      p25 = force? p24;
      checkMissing(p25);
      c71 = `is.object`(p25);
      if c71 then L1() else L2(p25);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", p25);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(p27):
      m2 = ld m0;
      m3 = force? m2;
      __2 = ldf `[` in base;
      r88 = dyn __2(p27, m3);
      goto L0(r88);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r90 = dyn _in_1(p23, p28);
    check L182() else D39();
  L222():
    m4 = ld m0;
    check L224() else D59();
  L223():
    r136 = dyn base25(<sym m0>);
    goto L49(r136);
  D39():
    deopt 175 [r90];
  D59():
    deopt 256 [m4];
  L50():
    goto L58();
  L58():
    p69 = ld p0;
    check L259() else D80();
  L182():
    st keep = r90;
    av7 = ld av2;
    check L183() else D40();
  L224():
    m5 = force? m4;
    checkMissing(m5);
    sum3 = ldf sum in base;
    r138 = dyn sum3(m5);
    check L225() else D60();
  L226():
    paste2 = ldf paste0;
    check L227() else D61();
  D40():
    deopt 177 [av7];
  D60():
    deopt 259 [r138];
  D61():
    deopt 261 [];
  D80():
    deopt 328 [p69];
  L183():
    av8 = force? av7;
    checkMissing(av8);
    c72 = `is.object`(av8);
    if c72 then L184() else L185(av8);
  L225():
    goto L49(r138);
  L227():
    p41 = prom<V +>{
      binary3 = ld binary;
      binary4 = force? binary3;
      checkMissing(binary4);
      c81 = `as.logical`(binary4);
      if c81 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "as a binary package ";
    };
    r140 = dyn paste2(p41, "for this version of R");
    check L228() else D62();
  L259():
    p70 = force? p69;
    checkMissing(p70);
    c101 = `is.object`(p70);
    if c101 then L260() else L261(p70);
  D62():
    deopt 264 [r140];
  L40(dx7):
    st av2 = dx7;
    nrow = ldf nrow;
    check L188() else D42();
  L59(dx27):
    st p0 = dx27;
    depends4 = ld depends;
    check L264() else D82();
  L184():
    dr6 = tryDispatchBuiltin.1("[", av8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L186() else L185(dr6);
  L185(av10):
    keep = ld keep;
    check L187() else D41();
  L228():
    st msg = r140;
    sym18 = ldf c;
    base26 = ldf c in base;
    guard18 = `==`.4(sym18, base26);
    if guard18 then L229() else L230();
  L260():
    dr26 = tryDispatchBuiltin.1("[", p70);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L262() else L261(dr26);
  L261(p72):
    miss2 = ld miss;
    check L263() else D81();
  D41():
    deopt 179 [av10, keep];
  D42():
    deopt 188 [];
  D81():
    deopt 330 [p72, miss2];
  D82():
    deopt 335 [depends4];
  L51(r142):
    st msg3 = r142;
    warning2 = ldf warning;
    check L234() else D66();
  L186():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L40(dx6);
  L187():
    keep1 = force? keep;
    __3 = ldf `[` in base;
    r91 = dyn __3(av8, keep1, <missing>, FALSE);
    goto L40(r91);
  L188():
    p29 = prom<V +>{
      av11 = ld av2;
      av12 = force? av11;
      checkMissing(av12);
      return av12;
    };
    r93 = dyn nrow(p29);
    check L189() else D43();
  L229():
    paste3 = ldf paste0;
    check L231() else D63();
  L230():
    r141 = dyn base26(<lang paste0(ngettext(sum(m0), "A version of this package for your version of R might be available elsewhere,\nsee the ideas at\n", "Versions of these packages for your version of R might be available elsewhere,\nsee the ideas at\n"), if(grepl("Under development", R.version.string), {
          "https://cran.r-project.org/doc/manuals/r-devel/R-admin.html#Installing-packages"
        }, {
          "https://cran.r-project.org/doc/manuals/r-patched/R-admin.html#Installing-packages"
        }))>);
    goto L51(r141);
  L262():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L59(dx26);
  L263():
    miss3 = force? miss2;
    checkMissing(miss3);
    r207 = `!`(miss3);
    __12 = ldf `[` in base;
    r208 = dyn __12(p72, r207);
    goto L59(r208);
  L264():
    depends5 = force? depends4;
    checkMissing(depends5);
    c102 = `as.logical`(depends5);
    if c102 then L265() else L60(c102);
  D43():
    deopt 190 [r93];
  D63():
    deopt 269 [];
  D66():
    deopt 277 [];
  L60(c104):
    c111 = `as.logical`(c104);
    if c111 then L271() else L62();
  L189():
    c73 = `as.logical`(r93);
    if c73 then L190() else L41();
  L231():
    p43 = prom<V +>{
      ngettext1 = ldf ngettext;
      p42 = prom<V +>{
        sym19 = ldf sum;
        base27 = ldf sum in base;
        guard19 = `==`.4(sym19, base27);
        if guard19 then L1() else L2();
      L0(r144):
        return r144;
      L1():
        m6 = ld m0;
        m7 = force? m6;
        checkMissing(m7);
        sum4 = ldf sum in base;
        r145 = dyn sum4(m7);
        goto L0(r145);
      L2():
        r143 = dyn base27(<sym m0>);
        goto L0(r143);
      };
      r147 = dyn ngettext1(p42, "A version of this package for your version of R might be available elsewhere,\nsee the ideas at\n", "Versions of these packages for your version of R might be available elsewhere,\nsee the ideas at\n");
      return r147;
    };
    p45 = prom<V +>{
      grepl = ldf grepl;
      p44 = prom<V +>{
        R_version_string = ld `R.version.string`;
        R_version_string1 = force? R_version_string;
        checkMissing(R_version_string1);
        return R_version_string1;
      };
      r150 = dyn grepl("Under development", p44);
      c82 = `as.logical`(r150);
      if c82 then L1() else L0();
    L0():
      return "https://cran.r-project.org/doc/manuals/r-patched/R-admin.html#Installing-packages";
    L1():
      return "https://cran.r-project.org/doc/manuals/r-devel/R-admin.html#Installing-packages";
    };
    r152 = dyn paste3(p43, p45);
    check L232() else D64();
  L234():
    p57 = prom<V +>{
      sprintf1 = ldf sprintf;
      p47 = prom<V +>{
        ngettext2 = ldf ngettext;
        p46 = prom<V +>{
          sym20 = ldf sum;
          base28 = ldf sum in base;
          guard20 = `==`.4(sym20, base28);
          if guard20 then L1() else L2();
        L0(r155):
          return r155;
        L1():
          m8 = ld m0;
          m9 = force? m8;
          checkMissing(m9);
          sum5 = ldf sum in base;
          r156 = dyn sum5(m9);
          goto L0(r156);
        L2():
          r154 = dyn base28(<sym m0>);
          goto L0(r154);
        };
        r158 = dyn ngettext2(p46, "package %s is not available %s", "packages %s are not available %s");
        return r158;
      };
      p54 = prom<V +>{
        paste4 = ldf paste;
        p53 = prom<V +>{
          sQuote2 = ldf sQuote;
          p52 = prom<V +>{
            p48 = ld p0;
            p49 = force? p48;
            checkMissing(p49);
            c84 = `is.object`(p49);
            if c84 then L1() else L2(p49);
          L0(dx21):
            return dx21;
          L1():
            dr20 = tryDispatchBuiltin.1("[", p49);
            dc10 = getTryDispatchBuiltinDispatched(dr20);
            if dc10 then L3() else L2(dr20);
          L2(p51):
            m10 = ld m0;
            m11 = force? m10;
            __9 = ldf `[` in base;
            r160 = dyn __9(p51, m11);
            goto L0(r160);
          L3():
            dx20 = getTryDispatchBuiltinValue(dr20);
            goto L0(dx20);
          };
          r162 = dyn sQuote2(p52);
          return r162;
        };
        r164 = dyn paste4[, collapse](p53, ", ");
        return r164;
      };
      p56 = prom<V +>{
        paste5 = ldf paste;
        p55 = prom<V +>{
          sym21 = ldf c;
          base29 = ldf c in base;
          guard21 = `==`.4(sym21, base29);
          if guard21 then L1() else L2();
        L0(r167):
          return r167;
        L1():
          msg = ld msg;
          msg1 = force? msg;
          checkMissing(msg1);
          msg2 = ld msg2;
          msg3 = force? msg2;
          checkMissing(msg3);
          msg4 = ld msg3;
          msg5 = force? msg4;
          checkMissing(msg5);
          c85 = ldf c in base;
          r168 = dyn c85(msg1, msg3, "", msg5);
          goto L0(r168);
        L2():
          r166 = dyn base29(<sym msg>, <sym msg2>, "", <sym msg3>);
          goto L0(r166);
        };
        r170 = dyn paste5[, collapse](p55, "\n");
        return r170;
      };
      r172 = dyn sprintf1(p47, p54, p56);
      return r172;
    };
    r174 = dyn warning2[, domain, `call.`](p57, NA_LGL, FALSE);
    check L235() else D67();
  L265():
    sym25 = ldf length;
    base33 = ldf length in base;
    guard25 = `==`.4(sym25, base33);
    if guard25 then L266() else L267();
  D64():
    deopt 272 [r152];
  D67():
    deopt 283 [r174];
  L41():
    goto L47(NULL);
  L47(r134):
    goto L48();
  L61(c107, r210):
    c108 = `as.logical`(r210);
    c109 = `&&`(c107, c108);
    goto L60(c109);
  L62():
    goto L86();
  L86():
    p114 = ld p0;
    check L366() else D141();
  L190():
    av13 = ld av2;
    check L191() else D44();
  L232():
    c83 = ldf c in base;
    r153 = dyn c83(r152);
    check L233() else D65();
  L235():
    sym22 = ldf sum;
    base30 = ldf sum in base;
    guard22 = `==`.4(sym22, base30);
    if guard22 then L236() else L237();
  L266():
    p73 = ld p0;
    check L268() else D83();
  L267():
    r209 = dyn base33(<sym p0>);
    goto L61(c102, r209);
  L271():
    p75 = ld p0;
    check L272() else D85();
  D44():
    deopt 191 [av13];
  D65():
    deopt 274 [r153];
  D83():
    deopt 339 [c102, p73];
  D85():
    deopt 344 [p75];
  D141():
    deopt 536 [p114];
  L52(r176):
    r178 = `==`(r176, 1);
    c86 = `as.logical`(r178);
    if c86 then L240() else L53(c86);
  L191():
    av14 = force? av13;
    checkMissing(av14);
    c74 = `is.object`(av14);
    if c74 then L192() else L193();
  L233():
    goto L51(r153);
  L236():
    m12 = ld m0;
    check L238() else D68();
  L237():
    r175 = dyn base30(<sym m0>);
    goto L52(r175);
  L268():
    p74 = force? p73;
    checkMissing(p74);
    length1 = ldf length in base;
    r211 = dyn length1(p74);
    check L269() else D84();
  L272():
    p76 = force? p75;
    checkMissing(p76);
    st p1 = p76;
    _libPaths1 = ldf `.libPaths`;
    check L273() else D86();
  L366():
    p115 = force? p114;
    checkMissing(p115);
    popenv;
    return p115;
  D68():
    deopt 286 [m12];
  D84():
    deopt 342 [c102, r211];
  D86():
    deopt 348 [];
  L42(dx9):
    st ds = dx9;
    l = ld ds;
    c75 = `is.object`(l);
    if c75 then L195() else L196("", l);
  L53(c88):
    c99 = `as.logical`(c88);
    if c99 then L252() else L56();
  L192():
    dr8 = tryDispatchBuiltin.1("[", av14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L194() else L193();
  L193():
    __4 = ldf `[` in base;
    r94 = dyn __4(av14, <missing>, "Depends");
    goto L42(r94);
  L238():
    m13 = force? m12;
    checkMissing(m13);
    sum6 = ldf sum in base;
    r177 = dyn sum6(m13);
    check L239() else D69();
  L240():
    sym23 = ldf `is.na`;
    base31 = ldf `is.na` in base;
    guard23 = `==`.4(sym23, base31);
    if guard23 then L241() else L242();
  L269():
    goto L61(c102, r211);
  L273():
    r212 = dyn _libPaths1();
    check L274() else D87();
  D69():
    deopt 289 [r177];
  D87():
    deopt 349 [r212];
  L43(dx11):
    st ds = dx11;
    lapply = ldf lapply;
    check L202() else D47();
  L54(c91, r180):
    r192 = `!`(r180);
    c96 = `as.logical`(r192);
    c97 = `&&`(c91, c96);
    goto L53(c97);
  L56():
    goto L57();
  L57():
    flush_console = ldf `flush.console`;
    check L256() else D78();
  L194():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L42(dx8);
  L195():
    dr10 = tryDispatchBuiltin.0("[<-", l, "");
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L197() else L196("", dr10);
  L196(r96, l2):
    sym16 = ldf `is.na`;
    base24 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base24);
    if guard16 then L198() else L199();
  L239():
    goto L52(r177);
  L241():
    sym24 = ldf match;
    base32 = ldf match in base;
    guard24 = `==`.4(sym24, base32);
    if guard24 then L243() else L244();
  L242():
    r179 = dyn base31(<lang `<-`(w, match(tolower(`[`(p0, m0)), tolower(row.names(available))))>);
    goto L54(c86, r179);
  L252():
    warning3 = ldf warning;
    check L253() else D76();
  L274():
    st libpath = r212;
    _in_2 = ldf `%in%`;
    check L275() else D88();
  D47():
    deopt 210 [];
  D76():
    deopt 314 [];
  D78():
    deopt 324 [];
  D88():
    deopt 352 [];
  L44(r104, l5, r105, r106):
    ___ = ldf `[<-` in base;
    r108 = dyn ___(l5, r105, r106);
    goto L43(r108);
  L55(c94, r182):
    st w = r182;
    is_na2 = ldf `is.na` in base;
    r191 = dyn is_na2(r182);
    check L250() else D75();
  L197():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L43(dx10);
  L198():
    ds = ld ds;
    check L200() else D45();
  L199():
    r103 = dyn base24(<sym ds>);
    goto L44(r96, l2, "", r103);
  L202():
    p32 = prom<V +>{
      strsplit = ldf strsplit;
      p31 = prom<V +>{
        sub = ldf sub;
        p30 = prom<V +>{
          ds2 = ld ds;
          ds3 = force? ds2;
          checkMissing(ds3);
          return ds3;
        };
        r110 = dyn sub("^[[:space:]]*", "", p30);
        return r110;
      };
      r112 = dyn strsplit(p31, "[[:space:]]*,[[:space:]]*");
      return r112;
    };
    p33 = prom<V +>{
      r114 = clos inner1236783023;
      return r114;
    };
    r116 = dyn lapply(p32, p33);
    check L203() else D48();
  L243():
    tolower = ldf tolower;
    check L245() else D70();
  L244():
    r181 = dyn base32(<lang tolower(`[`(p0, m0))>, <lang tolower(row.names(available))>);
    goto L55(c86, r181);
  L253():
    p68 = prom<V +>{
      sprintf2 = ldf sprintf;
      p67 = prom<V +>{
        sQuote3 = ldf sQuote;
        p66 = prom<V +>{
          row_names2 = ldf `row.names`;
          p65 = prom<V +>{
            available5 = ld available;
            available6 = force? available5;
            checkMissing(available6);
            return available6;
          };
          r194 = dyn row_names2(p65);
          c100 = `is.object`(r194);
          if c100 then L1() else L2(r194);
        L0(dx25):
          return dx25;
        L1():
          dr24 = tryDispatchBuiltin.1("[", r194);
          dc12 = getTryDispatchBuiltinDispatched(dr24);
          if dc12 then L3() else L2(dr24);
        L2(r196):
          w = ld w;
          w1 = force? w;
          __11 = ldf `[` in base;
          r197 = dyn __11(r196, w1);
          goto L0(r197);
        L3():
          dx24 = getTryDispatchBuiltinValue(dr24);
          goto L0(dx24);
        };
        r199 = dyn sQuote3(p66);
        return r199;
      };
      r201 = dyn sprintf2("Perhaps you meant %s ?", p67);
      return r201;
    };
    r203 = dyn warning3[, `call.`, domain](p68, FALSE, NA_LGL);
    check L254() else D77();
  L256():
    r205 = dyn flush_console();
    check L257() else D79();
  L275():
    p77 = prom<V +>{
      lib3 = ld lib;
      lib4 = force? lib3;
      checkMissing(lib4);
      return lib4;
    };
    p78 = prom<V +>{
      libpath = ld libpath;
      libpath1 = force? libpath;
      checkMissing(libpath1);
      return libpath1;
    };
    r215 = dyn _in_2(p77, p78);
    check L276() else D89();
  D45():
    deopt 203 [r96, l2, "", ds];
  D48():
    deopt 213 [r116];
  D70():
    deopt 297 [c86];
  D75():
    deopt 310 [c94, r191];
  D77():
    deopt 320 [r203];
  D79():
    deopt 325 [r205];
  D89():
    deopt 355 [r215];
  L200():
    ds1 = force? ds;
    checkMissing(ds1);
    is_na1 = ldf `is.na` in base;
    r107 = dyn is_na1(ds1);
    check L201() else D46();
  L203():
    st x = r116;
    lengths = ldf lengths;
    check L204() else D49();
  L245():
    p62 = prom<V +>{
      p58 = ld p0;
      p59 = force? p58;
      checkMissing(p59);
      c95 = `is.object`(p59);
      if c95 then L1() else L2(p59);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[", p59);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(p61):
      m14 = ld m0;
      m15 = force? m14;
      __10 = ldf `[` in base;
      r183 = dyn __10(p61, m15);
      goto L0(r183);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r185 = dyn tolower(p62);
    check L246() else D71();
  L250():
    goto L54(c94, r191);
  L254():
    goto L57();
  L257():
    goto L58();
  L276():
    r216 = `!`(r215);
    c112 = `as.logical`(r216);
    if c112 then L277() else L63();
  D46():
    deopt 206 [r96, l2, "", r107];
  D49():
    deopt 216 [];
  D71():
    deopt 299 [c86, r185];
  L63():
    goto L65();
  L65():
    installed_packages = ldf `installed.packages`;
    check L284() else D93();
  L201():
    goto L44(r96, l2, "", r107);
  L204():
    p34 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r118 = dyn lengths(p34);
    check L205() else D50();
  L246():
    tolower1 = ldf tolower;
    check L247() else D72();
  L277():
    sym26 = ldf c;
    base34 = ldf c in base;
    guard26 = `==`.4(sym26, base34);
    if guard26 then L278() else L279();
  D50():
    deopt 218 [r118];
  D72():
    deopt 301 [c86];
  D93():
    deopt 369 [];
  L64(r218):
    st libpath = r218;
    goto L65();
  L205():
    st lens = r118;
    which = ldf which;
    check L206() else D51();
  L247():
    p64 = prom<V +>{
      row_names1 = ldf `row.names`;
      p63 = prom<V +>{
        available3 = ld available;
        available4 = force? available3;
        checkMissing(available4);
        return available4;
      };
      r187 = dyn row_names1(p63);
      return r187;
    };
    r189 = dyn tolower1(p64);
    check L248() else D73();
  L278():
    lib5 = ld lib;
    check L280() else D90();
  L279():
    r217 = dyn base34(<sym lib>, <sym libpath>);
    goto L64(r217);
  L284():
    p79 = prom<V +>{
      libpath4 = ld libpath;
      libpath5 = force? libpath4;
      checkMissing(libpath5);
      return libpath5;
    };
    p80 = prom<V +>{
      sym27 = ldf c;
      base35 = ldf c in base;
      guard27 = `==`.4(sym27, base35);
      if guard27 then L1() else L2();
    L0(r223):
      return r223;
    L1():
      c114 = ldf c in base;
      r224 = dyn c114("Package", "Version");
      goto L0(r224);
    L2():
      r222 = dyn base35("Package", "Version");
      goto L0(r222);
    };
    ddd1 = ld `...`;
    r226 = dyn installed_packages[`lib.loc`, fields, `...`](p79, p80, ddd1);
    check L285() else D94();
  D51():
    deopt 221 [];
  D73():
    deopt 303 [c86, r189];
  D90():
    deopt 359 [lib5];
  D94():
    deopt 375 [r226];
  L206():
    p35 = prom<V +>{
      lens = ld lens;
      lens1 = force? lens;
      checkMissing(lens1);
      r119 = `>`(lens1, 0);
      return r119;
    };
    r121 = dyn which(p35);
    check L207() else D52();
  L248():
    match = ldf match in base;
    r190 = dyn match(r185, r189, NA_INT, NULL);
    check L249() else D74();
  L280():
    lib6 = force? lib5;
    checkMissing(lib6);
    libpath2 = ld libpath;
    check L281() else D91();
  L285():
    st installed = r226;
    character = ldf character;
    check L286() else D95();
  D52():
    deopt 223 [r121];
  D74():
    deopt 307 [c86, r190];
  D91():
    deopt 361 [libpath2];
  D95():
    deopt 378 [];
  L207():
    st pos = r121;
    av17 = ld av2;
    check L208() else D53();
  L249():
    goto L55(c86, r190);
  L281():
    libpath3 = force? libpath2;
    checkMissing(libpath3);
    c113 = ldf c in base;
    r219 = dyn c113(lib6, libpath3);
    check L282() else D92();
  L286():
    r227 = dyn character();
    check L287() else D96();
  D53():
    deopt 225 [av17];
  D92():
    deopt 364 [r219];
  D96():
    deopt 379 [r227];
  L208():
    av18 = force? av17;
    checkMissing(av18);
    c76 = `is.object`(av18);
    if c76 then L209() else L210(av18);
  L282():
    goto L64(r219);
  L287():
    st not_avail = r227;
    goto L77();
  L45(dx13):
    st av2 = dx13;
    x2 = ld x;
    check L213() else D55();
  L77():
    apply = ldf apply;
    check L288() else D97();
  L209():
    dr12 = tryDispatchBuiltin.1("[", av18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L211() else L210(dr12);
  L210(av20):
    pos = ld pos;
    check L212() else D54();
  D54():
    deopt 227 [av20, pos];
  D55():
    deopt 235 [x2];
  D97():
    deopt 382 [];
  L211():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L45(dx12);
  L212():
    pos1 = force? pos;
    __5 = ldf `[` in base;
    r122 = dyn __5(av18, pos1, <missing>, FALSE);
    goto L45(r122);
  L213():
    x3 = force? x2;
    checkMissing(x3);
    c77 = `is.object`(x3);
    if c77 then L214() else L215(x3);
  L288():
    p83 = prom<V +>{
      available7 = ld available;
      available8 = force? available7;
      checkMissing(available8);
      c115 = `is.object`(available8);
      if c115 then L1() else L2();
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("[", available8);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2();
    L2():
      p81 = ld p1;
      p82 = force? p81;
      dependencies15 = ld dependencies;
      dependencies16 = force? dependencies15;
      __13 = ldf `[` in base;
      r228 = dyn __13(available8, p82, dependencies16, FALSE);
      goto L0(r228);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    p84 = prom<V +>{
      r230 = clos inner2501545716;
      return r230;
    };
    r232 = dyn apply(p83, 1, p84);
    check L289() else D98();
  D98():
    deopt 386 [r232];
  L46(dx15):
    st x = dx15;
    paste1 = ldf paste;
    check L218() else D57();
  L214():
    dr14 = tryDispatchBuiltin.1("[", x3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L216() else L215(dr14);
  L215(x5):
    pos2 = ld pos;
    check L217() else D56();
  L289():
    st deps = r232;
    _clean_up_dependencies2 = ldf `.clean_up_dependencies2`;
    check L290() else D99();
  D56():
    deopt 237 [x5, pos2];
  D57():
    deopt 242 [];
  D99():
    deopt 389 [];
  L216():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L46(dx14);
  L217():
    pos3 = force? pos2;
    __6 = ldf `[` in base;
    r123 = dyn __6(x5, pos3);
    goto L46(r123);
  L218():
    p37 = prom<V +>{
      sQuote1 = ldf sQuote;
      p36 = prom<V +>{
        av21 = ld av2;
        av22 = force? av21;
        checkMissing(av22);
        c78 = `is.object`(av22);
        if c78 then L1() else L2();
      L0(dx17):
        return dx17;
      L1():
        dr16 = tryDispatchBuiltin.1("[", av22);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2();
      L2():
        __7 = ldf `[` in base;
        r124 = dyn __7(av22, <missing>, "Package");
        goto L0(r124);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx16);
      };
      r126 = dyn sQuote1(p36);
      return r126;
    };
    p38 = prom<V +>{
      av25 = ld av2;
      av26 = force? av25;
      checkMissing(av26);
      c79 = `is.object`(av26);
      if c79 then L1() else L2();
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", av26);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2();
    L2():
      __8 = ldf `[` in base;
      r128 = dyn __8(av26, <missing>, "Version");
      goto L0(r128);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p40 = prom<V +>{
      unlist = ldf unlist;
      p39 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      r131 = dyn unlist(p39);
      return r131;
    };
    r133 = dyn paste1(p37, "version", p38, "is in the repositories but depends on", p40);
    check L219() else D58();
  L290():
    p85 = prom<V +>{
      deps = ld deps;
      deps1 = force? deps;
      checkMissing(deps1);
      return deps1;
    };
    p86 = prom<V +>{
      installed = ld installed;
      installed1 = force? installed;
      checkMissing(installed1);
      return installed1;
    };
    p87 = prom<V +>{
      available11 = ld available;
      available12 = force? available11;
      checkMissing(available12);
      return available12;
    };
    r236 = dyn _clean_up_dependencies2(p85, p86, p87);
    check L291() else D100();
  D58():
    deopt 248 [r133];
  D100():
    deopt 393 [r236];
  L219():
    st msg2 = r133;
    goto L47(r133);
  L291():
    st res = r236;
    sym28 = ldf c;
    base36 = ldf c in base;
    guard28 = `==`.4(sym28, base36);
    if guard28 then L292() else L293();
  L66(r238):
    st not_avail = r238;
    unique2 = ldf unique;
    check L300() else D104();
  L292():
    not_avail = ld not_avail;
    check L294() else D101();
  L293():
    r237 = dyn base36(<sym not_avail>, <lang `[[`(res, 2)>);
    goto L66(r237);
  D101():
    deopt 397 [not_avail];
  D104():
    deopt 408 [];
  L294():
    not_avail1 = force? not_avail;
    checkMissing(not_avail1);
    res = ld res;
    check L295() else D102();
  L300():
    p88 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      c118 = `is.object`(res5);
      if c118 then L1() else L2(res5);
    L0(dx33):
      return dx33;
    L1():
      dr32 = tryDispatchBuiltin.1("[[", res5);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(res7):
      __15 = ldf `[[` in base;
      r241 = dyn __15(res7, 1);
      goto L0(r241);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    r243 = dyn unique2(p88);
    check L301() else D105();
  D102():
    deopt 399 [res];
  D105():
    deopt 410 [r243];
  L295():
    res1 = force? res;
    checkMissing(res1);
    c116 = `is.object`(res1);
    if c116 then L296() else L297(res1);
  L301():
    st deps = r243;
    deps2 = ld deps;
    check L302() else D106();
  D106():
    deopt 412 [deps2];
  L67(dx31):
    c117 = ldf c in base;
    r240 = dyn c117(not_avail1, dx31);
    check L299() else D103();
  L296():
    dr30 = tryDispatchBuiltin.1("[[", res1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L298() else L297(dr30);
  L297(res3):
    __14 = ldf `[[` in base;
    r239 = dyn __14(res3, 2);
    goto L67(r239);
  L302():
    deps3 = force? deps2;
    checkMissing(deps3);
    c119 = `is.object`(deps3);
    if c119 then L303() else L304(deps3);
  D103():
    deopt 405 [r240];
  L68(dx35):
    st deps = dx35;
    sym30 = ldf length;
    base38 = ldf length in base;
    guard30 = `==`.4(sym30, base38);
    if guard30 then L308() else L309();
  L298():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L67(dx30);
  L299():
    goto L66(r240);
  L303():
    dr34 = tryDispatchBuiltin.1("[", deps3);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L305() else L304(dr34);
  L304(deps5):
    _in_3 = ldf `%in%`;
    check L306() else D107();
  D107():
    deopt 415 [deps5];
  L69(r253):
    r255 = `!`(r253);
    c121 = `as.logical`(r255);
    if c121 then L312() else L70();
  L305():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L68(dx34);
  L306():
    p89 = prom<V +>{
      deps6 = ld deps;
      deps7 = force? deps6;
      checkMissing(deps7);
      return deps7;
    };
    p90 = prom<V +>{
      sym29 = ldf c;
      base37 = ldf c in base;
      guard29 = `==`.4(sym29, base37);
      if guard29 then L1() else L2();
    L0(r246):
      return r246;
    L1():
      pkgs5 = ld pkgs;
      pkgs6 = force? pkgs5;
      checkMissing(pkgs6);
      c120 = ldf c in base;
      r247 = dyn c120("R", pkgs6);
      goto L0(r247);
    L2():
      r245 = dyn base37("R", <sym pkgs>);
      goto L0(r245);
    };
    r249 = dyn _in_3(p89, p90);
    check L307() else D108();
  L308():
    deps8 = ld deps;
    check L310() else D109();
  L309():
    r252 = dyn base38(<sym deps>);
    goto L69(r252);
  D108():
    deopt 418 [deps5, r249];
  D109():
    deopt 424 [deps8];
  L70():
    sym31 = ldf c;
    base39 = ldf c in base;
    guard31 = `==`.4(sym31, base39);
    if guard31 then L315() else L316();
  L307():
    r250 = `!`(r249);
    __16 = ldf `[` in base;
    r251 = dyn __16(deps5, r250);
    goto L68(r251);
  L310():
    deps9 = force? deps8;
    checkMissing(deps9);
    length2 = ldf length in base;
    r254 = dyn length2(deps9);
    check L311() else D110();
  L312():
    sym33 = ldf length;
    base41 = ldf length in base;
    guard33 = `==`.4(sym33, base41);
    if guard33 then L328() else L329();
  D110():
    deopt 427 [r254];
  L73(r258):
    st pkgs = r258;
    deps12 = ld deps;
    check L320() else D114();
  L78(r265):
    c125 = `as.logical`(r265);
    if c125 then L332() else L79();
  L311():
    goto L69(r254);
  L315():
    deps10 = ld deps;
    check L317() else D111();
  L316():
    r257 = dyn base39(<sym deps>, <sym pkgs>);
    goto L73(r257);
  L328():
    not_avail2 = ld not_avail;
    check L330() else D117();
  L329():
    r264 = dyn base41(<sym not_avail>);
    goto L78(r264);
  D111():
    deopt 435 [deps10];
  D114():
    deopt 442 [deps12];
  D117():
    deopt 463 [not_avail2];
  L79():
    goto L80();
  L80():
    unique4 = ldf unique;
    check L340() else D125();
  L317():
    deps11 = force? deps10;
    checkMissing(deps11);
    pkgs7 = ld pkgs;
    check L318() else D112();
  L320():
    deps13 = force? deps12;
    checkMissing(deps13);
    st p1 = deps13;
    sym32 = ldf `is.null`;
    base40 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base40);
    if guard32 then L321() else L322();
  L330():
    not_avail3 = force? not_avail2;
    checkMissing(not_avail3);
    length3 = ldf length in base;
    r266 = dyn length3(not_avail3);
    check L331() else D118();
  L332():
    unique3 = ldf unique;
    check L333() else D119();
  D112():
    deopt 437 [pkgs7];
  D118():
    deopt 466 [r266];
  D119():
    deopt 468 [];
  D125():
    deopt 488 [];
  L74(r261):
    r262 = `!`(r261);
    c124 = `as.logical`(r262);
    if c124 then L324() else L75();
  L318():
    pkgs8 = force? pkgs7;
    checkMissing(pkgs8);
    c122 = ldf c in base;
    r259 = dyn c122(deps11, pkgs8);
    check L319() else D113();
  L321():
    dep2 = ld dep2;
    check L323() else D115();
  L322():
    r260 = dyn base40(<sym dep2>);
    goto L74(r260);
  L331():
    goto L78(r266);
  L333():
    p91 = prom<V +>{
      not_avail4 = ld not_avail;
      not_avail5 = force? not_avail4;
      checkMissing(not_avail5);
      return not_avail5;
    };
    r268 = dyn unique3(p91);
    check L334() else D120();
  L340():
    p98 = prom<V +>{
      pkgs9 = ld pkgs;
      pkgs10 = force? pkgs9;
      checkMissing(pkgs10);
      return pkgs10;
    };
    r286 = dyn unique4(p98);
    check L341() else D126();
  D113():
    deopt 440 [r259];
  D115():
    deopt 446 [dep2];
  D120():
    deopt 470 [r268];
  D126():
    deopt 490 [r286];
  L75():
    goto L76();
  L76():
    goto L77();
  L319():
    goto L73(r259);
  L323():
    dep3 = force? dep2;
    checkMissing(dep3);
    c123 = `==`(dep3, NULL);
    goto L74(c123);
  L324():
    dep4 = ld dep2;
    check L325() else D116();
  L334():
    st not_avail = r268;
    warning4 = ldf warning;
    check L335() else D121();
  L341():
    st pkgs = r286;
    pkgs11 = ld pkgs;
    check L342() else D127();
  D116():
    deopt 450 [dep4];
  D121():
    deopt 473 [];
  D127():
    deopt 492 [pkgs11];
  L325():
    dep5 = force? dep4;
    checkMissing(dep5);
    st dependencies = dep5;
    st dep2 = NULL;
    goto L76();
  L335():
    p97 = prom<V +>{
      sprintf3 = ldf sprintf;
      p93 = prom<V +>{
        ngettext3 = ldf ngettext;
        p92 = prom<V +>{
          sym34 = ldf length;
          base42 = ldf length in base;
          guard34 = `==`.4(sym34, base42);
          if guard34 then L1() else L2();
        L0(r270):
          return r270;
        L1():
          not_avail6 = ld not_avail;
          not_avail7 = force? not_avail6;
          checkMissing(not_avail7);
          length4 = ldf length in base;
          r271 = dyn length4(not_avail7);
          goto L0(r271);
        L2():
          r269 = dyn base42(<sym not_avail>);
          goto L0(r269);
        };
        r273 = dyn ngettext3(p92, "dependency %s is not available", "dependencies %s are not available");
        return r273;
      };
      p96 = prom<V +>{
        paste6 = ldf paste;
        p95 = prom<V +>{
          sQuote4 = ldf sQuote;
          p94 = prom<V +>{
            not_avail8 = ld not_avail;
            not_avail9 = force? not_avail8;
            checkMissing(not_avail9);
            return not_avail9;
          };
          r276 = dyn sQuote4(p94);
          return r276;
        };
        r278 = dyn paste6[, collapse](p95, ", ");
        return r278;
      };
      r280 = dyn sprintf3(p93, p96);
      return r280;
    };
    r282 = dyn warning4[, domain, `call.`, `immediate.`](p97, NA_LGL, FALSE, TRUE);
    check L336() else D122();
  L342():
    pkgs12 = force? pkgs11;
    checkMissing(pkgs12);
    c126 = `is.object`(pkgs12);
    if c126 then L343() else L344(pkgs12);
  D122():
    deopt 481 [r282];
  L81(dx37):
    st pkgs = dx37;
    sym35 = ldf length;
    base43 = ldf length in base;
    guard35 = `==`.4(sym35, base43);
    if guard35 then L348() else L349();
  L336():
    flush_console1 = ldf `flush.console`;
    check L337() else D123();
  L343():
    dr36 = tryDispatchBuiltin.1("[", pkgs12);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L345() else L344(dr36);
  L344(pkgs14):
    _in_4 = ldf `%in%`;
    check L346() else D128();
  D123():
    deopt 483 [];
  D128():
    deopt 495 [pkgs14];
  L82(r294):
    sym36 = ldf length;
    base44 = ldf length in base;
    guard36 = `==`.4(sym36, base44);
    if guard36 then L352() else L353();
  L337():
    r283 = dyn flush_console1();
    check L338() else D124();
  L345():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L81(dx36);
  L346():
    p99 = prom<V +>{
      pkgs15 = ld pkgs;
      pkgs16 = force? pkgs15;
      checkMissing(pkgs16);
      return pkgs16;
    };
    p101 = prom<V +>{
      row_names3 = ldf `row.names`;
      p100 = prom<V +>{
        available13 = ld available;
        available14 = force? available13;
        checkMissing(available14);
        return available14;
      };
      r289 = dyn row_names3(p100);
      return r289;
    };
    r291 = dyn _in_4(p99, p101);
    check L347() else D129();
  L348():
    pkgs17 = ld pkgs;
    check L350() else D130();
  L349():
    r293 = dyn base43(<sym pkgs>);
    goto L82(r293);
  D124():
    deopt 484 [r283];
  D129():
    deopt 498 [pkgs14, r291];
  D130():
    deopt 503 [pkgs17];
  L83(r299, r300):
    r302 = `>`(r299, r300);
    c127 = `as.logical`(r302);
    if c127 then L356() else L84();
  L338():
    goto L80();
  L347():
    __17 = ldf `[` in base;
    r292 = dyn __17(pkgs14, r291);
    goto L81(r292);
  L350():
    pkgs18 = force? pkgs17;
    checkMissing(pkgs18);
    length5 = ldf length in base;
    r295 = dyn length5(pkgs18);
    check L351() else D131();
  L352():
    p102 = ld p0;
    check L354() else D132();
  L353():
    r298 = dyn base44(<sym p0>);
    goto L83(r294, r298);
  D131():
    deopt 506 [r295];
  D132():
    deopt 508 [r294, p102];
  L84():
    goto L85();
  L85():
    pkgs21 = ld pkgs;
    check L364() else D140();
  L351():
    goto L82(r295);
  L354():
    p103 = force? p102;
    checkMissing(p103);
    length6 = ldf length in base;
    r301 = dyn length6(p103);
    check L355() else D133();
  L356():
    setdiff = ldf setdiff;
    check L357() else D134();
  D133():
    deopt 511 [r294, r301];
  D134():
    deopt 514 [];
  D140():
    deopt 531 [pkgs21];
  L355():
    goto L83(r294, r301);
  L357():
    p104 = prom<V +>{
      pkgs19 = ld pkgs;
      pkgs20 = force? pkgs19;
      checkMissing(pkgs20);
      return pkgs20;
    };
    p107 = prom<V +>{
      p105 = ld p0;
      p106 = force? p105;
      checkMissing(p106);
      return p106;
    };
    r305 = dyn setdiff(p104, p107);
    check L358() else D135();
  L364():
    pkgs22 = force? pkgs21;
    checkMissing(pkgs22);
    st p0 = pkgs22;
    goto L86();
  D135():
    deopt 517 [r305];
  L358():
    st added = r305;
    message = ldf message;
    check L359() else D136();
  D136():
    deopt 520 [];
  L359():
    p113 = prom<V +>{
      sprintf4 = ldf sprintf;
      p109 = prom<V +>{
        ngettext4 = ldf ngettext;
        p108 = prom<V +>{
          sym37 = ldf length;
          base45 = ldf length in base;
          guard37 = `==`.4(sym37, base45);
          if guard37 then L1() else L2();
        L0(r307):
          return r307;
        L1():
          added = ld added;
          added1 = force? added;
          checkMissing(added1);
          length7 = ldf length in base;
          r308 = dyn length7(added1);
          goto L0(r308);
        L2():
          r306 = dyn base45(<sym added>);
          goto L0(r306);
        };
        r310 = dyn ngettext4(p108, "also installing the dependency %s", "also installing the dependencies %s");
        return r310;
      };
      p112 = prom<V +>{
        paste7 = ldf paste;
        p111 = prom<V +>{
          sQuote5 = ldf sQuote;
          p110 = prom<V +>{
            added2 = ld added;
            added3 = force? added2;
            checkMissing(added3);
            return added3;
          };
          r313 = dyn sQuote5(p110);
          return r313;
        };
        r315 = dyn paste7[, collapse](p111, ", ");
        return r315;
      };
      r317 = dyn sprintf4(p109, p112);
      return r317;
    };
    r319 = dyn message[, , domain](p113, "\n", NA_LGL);
    check L360() else D137();
  D137():
    deopt 525 [r319];
  L360():
    flush_console2 = ldf `flush.console`;
    check L361() else D138();
  D138():
    deopt 527 [];
  L361():
    r320 = dyn flush_console2();
    check L362() else D139();
  D139():
    deopt 528 [r320];
  L362():
    goto L85();
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg s1:*, reg s2:V, reg c:L, reg s4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grepl:cls, reg s5:*, reg s6:V, reg p:p(V +), reg r1:V, reg __:cls, reg r2:V |
    mkenv;
    st s = s;
    s1 = ld s;
    check L1() else D0();
  D0():
    deopt 0 [s1];
  L1():
    s2 = force? s1;
    checkMissing(s2);
    c = `is.object`(s2);
    if c then L2() else L3(s2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", s2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(s4):
    grepl = ldf grepl;
    check L5() else D1();
  D1():
    deopt 3 [s4];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      s5 = ld s;
      s6 = force? s5;
      checkMissing(s6);
      return s6;
    };
    r1 = dyn grepl("^R[[:space:]]*\\(", p);
    check L6() else D2();
  D2():
    deopt 6 [s4, r1];
  L6():
    __ = ldf `[` in base;
    r2 = dyn __(s4, r1);
    goto L0(r2);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg x7:V, reg r1:V, reg x8:*, reg x9:V, reg is_na:cls, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V |
    mkenv;
    st x = x;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L2() else L3(x2);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(x4):
      sym = ldf `is.na`;
      base = ldf `is.na` in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(x7, r1):
      r3 = `!`(r1);
      __ = ldf `[` in base;
      r4 = dyn __(x7, r3);
      goto L0(r4);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      is_na = ldf `is.na` in base;
      r2 = dyn is_na(x9);
      goto L1(x4, r2);
    L6():
      r = dyn base(<sym x>);
      goto L1(x4, r);
    };
    r6 = dyn paste[, collapse](p, ", ");
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}