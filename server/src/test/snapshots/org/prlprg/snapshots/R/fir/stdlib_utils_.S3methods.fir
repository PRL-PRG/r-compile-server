fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner553873921;
    st `.S3methods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner553873921(`generic.function`, class, envir, `all.names`, dropPath, useEnv) {
  (reg generic_function:*, reg class:*, reg envir:*, reg all_names:*, reg dropPath:*, reg useEnv:*) -+> V { var `generic.function`:*, var class:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var `all.names`:*, reg all_names_isMissing:L, reg all_names_orDefault:*, var dropPath:*, reg dropPath_isMissing:L, reg dropPath_orDefault:*, var useEnv:*, reg useEnv_isMissing:L, reg useEnv_orDefault:*, reg r2:cls, reg __:cls, reg r3:V, reg r4:cls, reg r5:V, reg getKnownS3generics:cls, reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg sys_call:cls, reg p1:p(V +), reg r10:V, reg c:L, reg r12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r13:V, reg as_symbol:cls, reg r14:V, reg identical:cls, reg r15:V, reg useEnv1:*, reg useEnv2:V, reg c1:L, reg attach:cls, reg envir1:*, reg envir2:V, reg p2:p(V +), reg r17:V, reg methods_called:*, reg methods_called1:V, reg c2:L, reg message:cls, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg on_exit:cls, reg r22:V, reg search:cls, reg r24:V, reg dropPath1:*, reg dropPath2:V, reg c3:L, reg sp:*, reg sp1:V, reg c4:L, reg sp3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg sp6:V, reg r26:V, reg useEnv3:*, reg useEnv4:V, reg c5:L, reg sp9:V, reg r27:v(I), reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg sp12:V, reg r29:V, reg sp13:*, reg sp14:V, reg length:cls, reg r30:V, reg c6:cls, reg r31:V, reg __2:cls, reg r32:V, reg lapply:cls, reg sp15:*, reg sp16:V, reg p3:p(V +), reg ls:*, reg ls1:V, reg p4:p(V +), reg all_names1:*, reg all_names2:V, reg p5:p(V +), reg r36:V, reg lengths:cls, reg an:*, reg an1:V, reg p6:p(V +), reg r38:V, reg unlist:cls, reg an2:*, reg an3:V, reg p7:p(V +), reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg sp17:*, reg sp18:V, reg lens:*, reg lens1:V, reg rep_int:cls, reg r43:V, reg l:*, reg names__:cls, reg r44:V, reg an4:*, reg an5:V, reg c7:L, reg an7:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg duplicated:cls, reg an8:*, reg an9:V, reg p8:p(V +), reg r46:V, reg r47:V, reg __3:cls, reg r48:V, reg data_frame:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg r50:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg an10:*, reg an11:V, reg length1:cls, reg r53:V, reg rep_int1:cls, reg r54:V, reg p9:p(V +), reg _rmpkg:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg an12:*, reg an13:V, reg names:cls, reg r58:V, reg p10:p(V +), reg r60:V, reg p11:p(V +), reg an14:*, reg an15:V, reg p12:p(V +), reg r63:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r64:V, reg r65:V, reg missing:cls, reg r66:V, reg r67:V, reg c8:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg r69:V, reg generic_function1:*, reg generic_function2:V, reg c9:L, reg r70:V, reg c10:L, reg deparse1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:V, reg substitute:cls, reg r73:V, reg p13:p(V +), reg r75:V, reg exists:cls, reg generic_function3:*, reg generic_function4:V, reg p14:p(V +), reg envir3:*, reg envir4:V, reg p15:p(V +), reg r79:V, reg r80:V, reg c11:L, reg c13:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r81:V, reg c16:L, reg r82:V, reg generic_function5:*, reg generic_function6:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r83:V, reg c19:L, reg generic_function9:V, reg r84:V, reg c20:cls, reg r85:V, reg r86:V, reg any:cls, reg r87:V, reg r88:V, reg c21:L, reg c22:V, reg c24:L, reg stop:cls, reg gettextf:cls, reg generic_function10:*, reg generic_function11:V, reg p16:p(V +), reg r90:V, reg p17:p(V +), reg r92:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r94:V, reg r95:V, reg generic_function12:*, reg generic_function13:V, reg knownGenerics:*, reg knownGenerics1:V, reg r96:V, reg any1:cls, reg r97:V, reg r98:V, reg c25:L, reg findGeneric:cls, reg generic_function14:*, reg generic_function15:V, reg p18:p(V +), reg envir5:*, reg envir6:V, reg p19:p(V +), reg methods_called2:*, reg methods_called3:V, reg r101:V, reg p20:p(V +), reg r103:V, reg truegf:*, reg truegf1:V, reg r104:V, reg c26:L, reg r105:V, reg truegf2:*, reg truegf3:V, reg generic_function16:*, reg generic_function17:V, reg r106:V, reg c27:L, reg warning:cls, reg gettextf1:cls, reg generic_function18:*, reg generic_function19:V, reg p21:p(V +), reg truegf4:*, reg truegf5:V, reg p22:p(V +), reg r109:V, reg p23:p(V +), reg r111:V, reg truegf6:*, reg truegf7:V, reg info:*, reg info1:V, reg c28:L, reg info3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg startsWith:cls, reg row_names:cls, reg info4:*, reg info5:V, reg p24:p(V +), reg r114:V, reg p25:p(V +), reg paste0:cls, reg generic_function20:*, reg generic_function21:V, reg p26:p(V +), reg r117:V, reg p27:p(V +), reg r119:V, reg __4:cls, reg r120:V, reg info6:*, reg info7:V, reg c29:L, reg info9:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg _in_:cls, reg row_names1:cls, reg info10:*, reg info11:V, reg p28:p(V +), reg r122:V, reg p29:p(V +), reg S3MethodsStopList:*, reg S3MethodsStopList1:V, reg p30:p(V +), reg r125:V, reg r126:V, reg __5:cls, reg r127:V, reg nrow:cls, reg info12:*, reg info13:V, reg p31:p(V +), reg r129:V, reg c30:L, reg vapply:cls, reg row_names2:cls, reg info14:*, reg info15:V, reg p32:p(V +), reg r131:V, reg p33:p(V +), reg exists1:*, reg exists2:V, reg p34:p(V +), reg logical:cls, reg r134:V, reg p35:p(V +), reg r136:V, reg info16:*, reg info17:V, reg c31:L, reg info19:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg keep:*, reg keep1:V, reg __6:cls, reg r137:V, reg warn_not_generic:*, reg warn_not_generic1:V, reg c32:L, reg c34:V, reg nrow1:cls, reg info20:*, reg info21:V, reg p36:p(V +), reg r139:V, reg c35:L, reg c36:V, reg c38:L, reg warning1:cls, reg gettextf2:cls, reg generic_function22:*, reg generic_function23:V, reg p37:p(V +), reg r141:V, reg p38:p(V +), reg r143:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r145:V, reg r146:V, reg _knownS3Generics:*, reg _knownS3Generics1:V, reg c39:L, reg _knownS3Generics3:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg generic_function24:*, reg generic_function25:V, reg __7:cls, reg r147:V, reg is_na:cls, reg r148:V, reg r149:V, reg c40:L, reg asNamespace:cls, reg w:*, reg w1:V, reg p39:p(V +), reg r151:V, reg r152:V, reg get:cls, reg generic_function26:*, reg generic_function27:V, reg p40:p(V +), reg envir7:*, reg envir8:V, reg p41:p(V +), reg r155:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r156:V, reg r157:V, reg _isMethodsDispatchOn:cls, reg r158:V, reg c41:L, reg c43:V, reg __8:cls, reg r159:V, reg r160:cls, reg genfun:*, reg genfun1:V, reg p42:p(V +), reg r162:V, reg c44:L, reg c45:V, reg c47:L, reg __9:cls, reg r163:V, reg r164:cls, reg __10:cls, reg r165:V, reg p43:p(V +), reg r167:V, reg _defenv_for_S3_registry:cls, reg genfun2:*, reg genfun3:V, reg p44:p(V +), reg r170:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r171:V, reg r172:V, reg get1:cls, reg defenv:*, reg defenv1:V, reg p45:p(V +), reg r174:V, reg names1:cls, reg r175:V, reg S3reg:*, reg S3reg1:V, reg c48:L, reg S3reg3:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg startsWith1:cls, reg S3reg4:*, reg S3reg5:V, reg p46:p(V +), reg paste1:cls, reg generic_function28:*, reg generic_function29:V, reg p47:p(V +), reg r178:V, reg p48:p(V +), reg r180:V, reg __11:cls, reg r181:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r182:V, reg r183:V, reg S3reg6:*, reg S3reg7:V, reg length2:cls, reg r184:V, reg c49:L, reg rbindSome:cls, reg info22:*, reg info23:V, reg p49:p(V +), reg S3reg8:*, reg S3reg9:V, reg p50:p(V +), reg paste2:cls, reg generic_function30:*, reg generic_function31:V, reg p51:p(V +), reg r188:V, reg p52:p(V +), reg r190:V, reg generic_function32:*, reg generic_function33:V, reg r192:V, reg c50:L, reg info24:*, reg info25:V, reg c51:L, reg info27:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg grep:cls, reg row_names3:cls, reg info28:*, reg info29:V, reg p53:p(V +), reg r194:V, reg p54:p(V +), reg r196:V, reg r197:V, reg __12:cls, reg r198:V, reg dx20:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r199:V, reg r200:V, reg missing1:cls, reg r201:V, reg r202:V, reg c52:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r203:V, reg r204:V, reg class1:*, reg class2:V, reg c53:L, reg r205:V, reg c54:L, reg deparse2:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r206:V, reg r207:V, reg substitute1:cls, reg r208:V, reg p55:p(V +), reg r210:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r212:V, reg r213:V, reg class3:*, reg class4:V, reg length3:cls, reg r214:V, reg r215:V, reg c55:L, reg warning2:cls, reg r216:V, reg class5:*, reg class6:V, reg c56:L, reg class8:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg __13:cls, reg r217:V, reg paste3:cls, reg class9:*, reg class10:V, reg p56:p(V +), reg r219:V, reg gsub:cls, reg name:*, reg name1:V, reg p57:p(V +), reg r221:V, reg info30:*, reg info31:V, reg c57:L, reg info33:V, reg dr20:V, reg dc10:L, reg dx25:V, reg dx26:V, reg grep1:cls, reg name2:*, reg name3:V, reg p58:p(V +), reg row_names4:cls, reg info34:*, reg info35:V, reg p59:p(V +), reg r224:V, reg p60:p(V +), reg r226:V, reg __14:cls, reg r227:V, reg info36:*, reg info37:V, reg c58:L, reg info39:V, reg dr22:V, reg dc11:L, reg dx27:V, reg dx28:V, reg _in_1:cls, reg row_names5:cls, reg info40:*, reg info41:V, reg p61:p(V +), reg r229:V, reg p62:p(V +), reg S3MethodsStopList2:*, reg S3MethodsStopList3:V, reg p63:p(V +), reg r232:V, reg r233:V, reg __15:cls, reg r234:V, reg nrow2:cls, reg info42:*, reg info43:V, reg p64:p(V +), reg r236:V, reg c59:L, reg gsub1:cls, reg name4:*, reg name5:V, reg p65:p(V +), reg row_names6:cls, reg info44:*, reg info45:V, reg p66:p(V +), reg r239:V, reg p67:p(V +), reg r241:V, reg vapply1:cls, reg possible_generics:*, reg possible_generics1:V, reg p68:p(V +), reg r243:cls, reg p69:p(V +), reg logical1:cls, reg r245:V, reg p70:p(V +), reg r247:V, reg info46:*, reg info47:V, reg c60:L, reg info49:V, reg dr24:V, reg dc12:L, reg dx29:V, reg dx30:V, reg keep2:*, reg keep3:V, reg __16:cls, reg r248:V, reg unlist1:cls, reg lapply1:cls, reg loadedNamespaces:cls, reg r249:V, reg p71:p(V +), reg r251:cls, reg p72:p(V +), reg r253:V, reg p73:p(V +), reg r255:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r256:V, reg r257:V, reg S3reg10:*, reg S3reg11:V, reg length4:cls, reg r258:V, reg c61:L, reg S3reg12:*, reg S3reg13:V, reg c62:L, reg S3reg15:V, reg dr26:V, reg dc13:L, reg dx32:V, reg dx33:V, reg vapply2:cls, reg gsub2:cls, reg name6:*, reg name7:V, reg p74:p(V +), reg S3reg16:*, reg S3reg17:V, reg p75:p(V +), reg r261:V, reg p76:p(V +), reg exists3:*, reg exists4:V, reg p77:p(V +), reg r264:V, reg __17:cls, reg r265:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r266:V, reg r267:V, reg S3reg18:*, reg S3reg19:V, reg length5:cls, reg r268:V, reg c63:L, reg rbindSome1:cls, reg info50:*, reg info51:V, reg p78:p(V +), reg S3reg20:*, reg S3reg21:V, reg p79:p(V +), reg r271:V, reg r272:V, reg stop1:cls, reg r273:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r274:V, reg r275:V, reg missing2:cls, reg r276:V, reg r277:V, reg c64:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r278:V, reg r279:V, reg generic_function34:*, reg generic_function35:V, reg nrow3:cls, reg info52:*, reg info53:V, reg p80:p(V +), reg r281:V, reg rep_int2:cls, reg r282:V, reg r283:V, reg sub:cls, reg paste4:cls, reg class11:*, reg class12:V, reg p81:p(V +), reg r285:V, reg p82:p(V +), reg row_names7:cls, reg info54:*, reg info55:V, reg p83:p(V +), reg r288:V, reg p84:p(V +), reg r290:V, reg l1:*, reg c65:L, reg r292:V, reg l3:*, reg dr28:V, reg dc14:L, reg dx35:V, reg dx36:V, reg r295:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r296:V, reg r297:V, reg nrow4:cls, reg info56:*, reg info57:V, reg p85:p(V +), reg r299:V, reg rep_int3:cls, reg r300:V, reg l4:*, reg c66:L, reg r302:V, reg l6:*, reg dr30:V, reg dc15:L, reg dx37:V, reg dx38:V, reg r305:V, reg info58:*, reg info59:V, reg c67:L, reg info61:V, reg dr32:V, reg dc16:L, reg dx39:V, reg dx40:V, reg sort_list:cls, reg row_names8:cls, reg info62:*, reg info63:V, reg p86:p(V +), reg r307:V, reg p87:p(V +), reg r309:V, reg __18:cls, reg r310:V, reg row_names9:cls, reg info64:*, reg info65:V, reg p88:p(V +), reg r312:V, reg l7:*, reg class__:cls, reg r313:V, reg info66:*, reg info67:V, reg l8:*, reg attr__:cls, reg r314:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r315:V, reg r316:V, reg missing3:cls, reg r317:V, reg l9:*, reg attr__1:cls, reg r318:V, reg res:*, reg res1:V |
    mkenv;
    st `generic.function` = generic_function;
    st class = class;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    all_names_isMissing = missing.0(all_names);
    if all_names_isMissing then L2(FALSE) else L2(all_names);
  L2(all_names_orDefault):
    st `all.names` = all_names_orDefault;
    dropPath_isMissing = missing.0(dropPath);
    if dropPath_isMissing then L3(FALSE) else L3(dropPath);
  L3(dropPath_orDefault):
    st dropPath = dropPath_orDefault;
    useEnv_isMissing = missing.0(useEnv);
    if useEnv_isMissing then L4(FALSE) else L4(useEnv);
  L4(useEnv_orDefault):
    st useEnv = useEnv_orDefault;
    r2 = clos inner790807247;
    st rbindSome = r2;
    __ = ldf `::`;
    check L90() else D0();
  D0():
    deopt 4 [];
  L90():
    r3 = dyn __("tools", "nonS3methods");
    check L91() else D1();
  D1():
    deopt 7 [r3];
  L91():
    checkFun.0(r3);
    r4 = r3 as cls;
    r5 = dyn r4(NULL);
    check L92() else D2();
  D2():
    deopt 10 [r5];
  L92():
    st S3MethodsStopList = r5;
    getKnownS3generics = ldf getKnownS3generics;
    check L93() else D3();
  D3():
    deopt 13 [];
  L93():
    r6 = dyn getKnownS3generics();
    check L94() else D4();
  D4():
    deopt 14 [r6];
  L94():
    st knownGenerics = r6;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L95() else L96();
  L5(r8):
    st `methods.called` = r8;
    useEnv1 = ld useEnv;
    check L105() else D10();
  L95():
    sys_call = ldf `sys.call`;
    check L97() else D5();
  L96():
    r7 = dyn base(<lang `[[`(sys.call(`-`(1.0)), 1.0)>, <lang as.symbol("methods")>);
    goto L5(r7);
  D5():
    deopt 19 [];
  D10():
    deopt 39 [useEnv1];
  L97():
    p1 = prom<V +>{
      return -1.0;
    };
    r10 = dyn sys_call(p1);
    check L98() else D6();
  L105():
    useEnv2 = force? useEnv1;
    checkMissing(useEnv2);
    c1 = `as.logical`(useEnv2);
    if c1 then L106() else L7();
  D6():
    deopt 21 [r10];
  L7():
    goto L11();
  L11():
    search = ldf search;
    check L117() else D16();
  L98():
    c = `is.object`(r10);
    if c then L99() else L100(r10);
  L106():
    attach = ldf attach;
    check L107() else D11();
  D11():
    deopt 42 [];
  D16():
    deopt 63 [];
  L6(dx1):
    as_symbol = ldf `as.symbol`;
    check L102() else D7();
  L99():
    dr = tryDispatchBuiltin.1("[[", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L101() else L100(dr);
  L100(r12):
    __1 = ldf `[[` in base;
    r13 = dyn __1(r12, 1.0);
    goto L6(r13);
  L107():
    p2 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r17 = dyn attach[, pos, `warn.conflicts`](p2, 2, FALSE);
    check L108() else D12();
  L117():
    r24 = dyn search();
    check L118() else D17();
  D7():
    deopt 26 [];
  D12():
    deopt 48 [r17];
  D17():
    deopt 64 [r24];
  L101():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L102():
    r14 = dyn as_symbol("methods");
    check L103() else D8();
  L108():
    methods_called = ld `methods.called`;
    check L109() else D13();
  L118():
    st sp = r24;
    dropPath1 = ld dropPath;
    check L119() else D18();
  D8():
    deopt 28 [r14];
  D13():
    deopt 49 [methods_called];
  D18():
    deopt 66 [dropPath1];
  L103():
    identical = ldf identical in base;
    r15 = dyn identical(dx1, r14, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L104() else D9();
  L109():
    methods_called1 = force? methods_called;
    checkMissing(methods_called1);
    c2 = `as.logical`(methods_called1);
    if c2 then L110() else L8();
  L119():
    dropPath2 = force? dropPath1;
    checkMissing(dropPath2);
    c3 = `as.logical`(dropPath2);
    if c3 then L120() else L12();
  D9():
    deopt 37 [r15];
  L8():
    goto L9();
  L9():
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L114() else L115();
  L12():
    goto L18();
  L18():
    lapply = ldf lapply;
    check L136() else D24();
  L104():
    goto L5(r15);
  L110():
    message = ldf message;
    check L111() else D14();
  L120():
    sp = ld sp;
    check L121() else D19();
  D14():
    deopt 52 [];
  D19():
    deopt 68 [sp];
  D24():
    deopt 91 [];
  L10(r21):
    goto L11();
  L111():
    r18 = dyn message("some methods may be unavailable outside of their namespace");
    check L112() else D15();
  L114():
    on_exit = ldf `on.exit` in base;
    r22 = dyn on_exit(<lang detach(2)>);
    goto L10(r22);
  L115():
    r20 = dyn base1(<lang detach(2)>);
    goto L10(r20);
  L121():
    sp1 = force? sp;
    checkMissing(sp1);
    c4 = `is.object`(sp1);
    if c4 then L122() else L123(sp1);
  L136():
    p3 = prom<V +>{
      sp15 = ld sp;
      sp16 = force? sp15;
      checkMissing(sp16);
      return sp16;
    };
    p4 = prom<V +>{
      ls = ld ls;
      ls1 = force? ls;
      checkMissing(ls1);
      return ls1;
    };
    p5 = prom<V +>{
      all_names1 = ld `all.names`;
      all_names2 = force? all_names1;
      checkMissing(all_names2);
      return all_names2;
    };
    r36 = dyn lapply[, , `all.names`](p3, p4, p5);
    check L137() else D25();
  D15():
    deopt 54 [r18];
  D25():
    deopt 96 [r36];
  L13(dx3):
    st sp = dx3;
    goto L18();
  L112():
    goto L9();
  L122():
    dr2 = tryDispatchBuiltin.1("[", sp1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L124() else L123(dr2);
  L123(sp3):
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L125() else L126();
  L137():
    st an = r36;
    lengths = ldf lengths;
    check L138() else D26();
  D26():
    deopt 99 [];
  L14(sp6, r26):
    __2 = ldf `[` in base;
    r32 = dyn __2(sp6, r26);
    goto L13(r32);
  L124():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L125():
    useEnv3 = ld useEnv;
    check L127() else D20();
  L126():
    r25 = dyn base2(<lang if(useEnv, `:`(1.0, 2.0), 1)>, <lang length(sp)>);
    goto L14(sp3, r25);
  L138():
    p6 = prom<V +>{
      an = ld an;
      an1 = force? an;
      checkMissing(an1);
      return an1;
    };
    r38 = dyn lengths(p6);
    check L139() else D27();
  D20():
    deopt 72 [sp3, useEnv3];
  D27():
    deopt 101 [r38];
  L127():
    useEnv4 = force? useEnv3;
    checkMissing(useEnv4);
    c5 = `as.logical`(useEnv4);
    if c5 then L128() else L15();
  L139():
    st lens = r38;
    unlist = ldf unlist;
    check L140() else D28();
  D28():
    deopt 104 [];
  L15():
    goto L16(sp3, 1);
  L16(sp9, r27):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L130() else L131();
  L128():
    goto L16(sp3, <int 1, 2>);
  L140():
    p7 = prom<V +>{
      an2 = ld an;
      an3 = force? an2;
      checkMissing(an3);
      return an3;
    };
    r40 = dyn unlist[, `use.names`](p7, FALSE);
    check L141() else D29();
  D29():
    deopt 108 [r40];
  L17(sp12, r29):
    c6 = ldf c in base;
    r31 = dyn c6(r27, r29);
    check L134() else D23();
  L130():
    sp13 = ld sp;
    check L132() else D21();
  L131():
    r28 = dyn base3(<sym sp>);
    goto L17(sp9, r28);
  L141():
    st an = r40;
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L142() else L143();
  D21():
    deopt 80 [sp9, sp13];
  D23():
    deopt 85 [sp12, r31];
  L19(r42):
    l = ld an;
    names__ = ldf `names<-`;
    check L147() else D33();
  L132():
    sp14 = force? sp13;
    checkMissing(sp14);
    length = ldf length in base;
    r30 = dyn length(sp14);
    check L133() else D22();
  L134():
    goto L14(sp12, r31);
  L142():
    sp17 = ld sp;
    check L144() else D30();
  L143():
    r41 = dyn base4(<sym sp>, <sym lens>);
    goto L19(r41);
  D22():
    deopt 83 [sp9, r30];
  D30():
    deopt 112 [sp17];
  D33():
    deopt 119 [r42, l, r42];
  L133():
    goto L17(sp9, r30);
  L144():
    sp18 = force? sp17;
    checkMissing(sp18);
    lens = ld lens;
    check L145() else D31();
  L147():
    r44 = dyn names__(l, NULL, r42);
    check L148() else D34();
  D31():
    deopt 114 [lens];
  D34():
    deopt 121 [r42, r44];
  L145():
    lens1 = force? lens;
    checkMissing(lens1);
    rep_int = ldf `rep.int` in base;
    r43 = dyn rep_int(sp18, lens1);
    check L146() else D32();
  L148():
    st an = r44;
    an4 = ld an;
    check L149() else D35();
  D32():
    deopt 117 [r43];
  D35():
    deopt 123 [an4];
  L146():
    goto L19(r43);
  L149():
    an5 = force? an4;
    checkMissing(an5);
    c7 = `is.object`(an5);
    if c7 then L150() else L151(an5);
  L20(dx6):
    st an = dx6;
    data_frame = ldf `data.frame`;
    check L155() else D38();
  L150():
    dr4 = tryDispatchBuiltin.1("[", an5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L152() else L151(dr4);
  L151(an7):
    duplicated = ldf duplicated;
    check L153() else D36();
  D36():
    deopt 126 [an7];
  D38():
    deopt 133 [];
  L152():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L20(dx5);
  L153():
    p8 = prom<V +>{
      an8 = ld an;
      an9 = force? an8;
      checkMissing(an9);
      return an9;
    };
    r46 = dyn duplicated(p8);
    check L154() else D37();
  L155():
    p9 = prom<V +>{
      sym5 = ldf `rep.int`;
      base5 = ldf `rep.int` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r50):
      return r50;
    L2():
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r49 = dyn base5(TRUE, <lang length(an)>);
      goto L0(r49);
    L1(r52):
      rep_int1 = ldf `rep.int` in base;
      r54 = dyn rep_int1(TRUE, r52);
      goto L0(r54);
    L4():
      an10 = ld an;
      an11 = force? an10;
      checkMissing(an11);
      length1 = ldf length in base;
      r53 = dyn length1(an11);
      goto L1(r53);
    L5():
      r51 = dyn base6(<sym an>);
      goto L1(r51);
    };
    p11 = prom<V +>{
      _rmpkg = ldf `.rmpkg`;
      p10 = prom<V +>{
        sym7 = ldf names;
        base7 = ldf names in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r57):
        return r57;
      L1():
        an12 = ld an;
        an13 = force? an12;
        checkMissing(an13);
        names = ldf names in base;
        r58 = dyn names(an13);
        goto L0(r58);
      L2():
        r56 = dyn base7(<sym an>);
        goto L0(r56);
      };
      r60 = dyn _rmpkg(p10);
      return r60;
    };
    p12 = prom<V +>{
      an14 = ld an;
      an15 = force? an14;
      checkMissing(an15);
      return an15;
    };
    r63 = dyn data_frame[visible, from, `row.names`](p9, p11, p12);
    check L156() else D39();
  D37():
    deopt 128 [an7, r46];
  D39():
    deopt 140 [r63];
  L154():
    r47 = `!`(r46);
    __3 = ldf `[` in base;
    r48 = dyn __3(an7, r47);
    goto L20(r48);
  L156():
    st info = r63;
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L157() else L158();
  L21(r65):
    r67 = `!`(r65);
    c8 = `as.logical`(r67);
    if c8 then L159() else L22();
  L157():
    missing = ldf missing in base;
    r66 = dyn missing(<sym generic.function>);
    goto L21(r66);
  L158():
    r64 = dyn base8(<sym generic.function>);
    goto L21(r64);
  L22():
    sym18 = ldf missing;
    base18 = ldf missing in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L291() else L292();
  L61():
    sym24 = ldf missing;
    base24 = ldf missing in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L367() else L368();
  L159():
    sym9 = ldf `is.character`;
    base9 = ldf `is.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L160() else L161();
  L23(r69):
    r70 = `!`(r69);
    c10 = `as.logical`(r70);
    if c10 then L163() else L24();
  L62(r200):
    r202 = `!`(r200);
    c52 = `as.logical`(r202);
    if c52 then L293() else L63();
  L83(r275):
    r277 = `!`(r275);
    c64 = `as.logical`(r277);
    if c64 then L369() else L84();
  L160():
    generic_function1 = ld `generic.function`;
    check L162() else D40();
  L161():
    r68 = dyn base9(<sym generic.function>);
    goto L23(r68);
  L291():
    missing1 = ldf missing in base;
    r201 = dyn missing1(<sym class>);
    goto L62(r201);
  L292():
    r199 = dyn base18(<sym class>);
    goto L62(r199);
  L367():
    missing2 = ldf missing in base;
    r276 = dyn missing2(<sym generic.function>);
    goto L83(r276);
  L368():
    r274 = dyn base24(<sym generic.function>);
    goto L83(r274);
  D40():
    deopt 147 [generic_function1];
  L24():
    goto L25();
  L25():
    exists = ldf exists;
    check L167() else D43();
  L63():
    stop1 = ldf stop;
    check L365() else D145();
  L84():
    sub = ldf sub;
    check L377() else D151();
  L86(r283):
    l1 = ld info;
    c65 = `is.object`(l1);
    if c65 then L380() else L381(r283, l1);
  L162():
    generic_function2 = force? generic_function1;
    checkMissing(generic_function2);
    c9 = `is.character`(generic_function2);
    goto L23(c9);
  L163():
    deparse1 = ldf deparse1;
    check L164() else D41();
  L293():
    sym19 = ldf `is.character`;
    base19 = ldf `is.character` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L294() else L295();
  L369():
    sym25 = ldf `rep.int`;
    base25 = ldf `rep.int` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L370() else L371();
  D41():
    deopt 152 [];
  D43():
    deopt 159 [];
  D145():
    deopt 546 [];
  D151():
    deopt 564 [];
  L64(r204):
    r205 = `!`(r204);
    c54 = `as.logical`(r205);
    if c54 then L297() else L65();
  L85(r279):
    goto L86(r279);
  L164():
    p13 = prom<V +>{
      sym10 = ldf substitute;
      base10 = ldf substitute in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r72):
      return r72;
    L1():
      substitute = ldf substitute in base;
      r73 = dyn substitute(<sym generic.function>);
      goto L0(r73);
    L2():
      r71 = dyn base10(<sym generic.function>);
      goto L0(r71);
    };
    r75 = dyn deparse1(p13);
    check L165() else D42();
  L167():
    p14 = prom<V +>{
      generic_function3 = ld `generic.function`;
      generic_function4 = force? generic_function3;
      checkMissing(generic_function4);
      return generic_function4;
    };
    p15 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r79 = dyn exists[, mode, envir](p14, "function", p15);
    check L168() else D44();
  L294():
    class1 = ld class;
    check L296() else D108();
  L295():
    r203 = dyn base19(<sym class>);
    goto L64(r203);
  L365():
    r273 = dyn stop1("must supply 'generic.function' or 'class'");
    check L366() else D146();
  L370():
    generic_function34 = ld `generic.function`;
    check L372() else D147();
  L371():
    r278 = dyn base25(<sym generic.function>, <lang nrow(info)>);
    goto L85(r278);
  L377():
    p82 = prom<V +>{
      paste4 = ldf paste0;
      p81 = prom<V +>{
        class11 = ld class;
        class12 = force? class11;
        checkMissing(class12);
        return class12;
      };
      r285 = dyn paste4("\\.", p81, "$");
      return r285;
    };
    p84 = prom<V +>{
      row_names7 = ldf `row.names`;
      p83 = prom<V +>{
        info54 = ld info;
        info55 = force? info54;
        checkMissing(info55);
        return info55;
      };
      r288 = dyn row_names7(p83);
      return r288;
    };
    r290 = dyn sub(p82, "", p84);
    check L378() else D152();
  L379(dx36):
    st info = dx36;
    sym26 = ldf `rep.int`;
    base26 = ldf `rep.int` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L383() else L384();
  L380():
    dr28 = tryDispatchBuiltin.0("$<-", l1, r283);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L382() else L381(r283, dr28);
  L381(r292, l3):
    r295 = `$<-`(l3, <sym generic>, r283);
    goto L379(r295);
  D42():
    deopt 154 [r75];
  D44():
    deopt 165 [r79];
  D108():
    deopt 410 [class1];
  D146():
    deopt 548 [r273];
  D147():
    deopt 555 [generic_function34];
  D152():
    deopt 568 [r290];
  L65():
    goto L66();
  L66():
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L301() else L302();
  L87(r297):
    l4 = ld info;
    c66 = `is.object`(l4);
    if c66 then L389() else L390(r297, l4);
  L165():
    st `generic.function` = r75;
    goto L25();
  L168():
    r80 = `!`(r79);
    c11 = `as.logical`(r80);
    if c11 then L169() else L26(c11);
  L296():
    class2 = force? class1;
    checkMissing(class2);
    c53 = `is.character`(class2);
    goto L64(c53);
  L297():
    deparse2 = ldf deparse1;
    check L298() else D109();
  L366():
    goto L61();
  L372():
    generic_function35 = force? generic_function34;
    checkMissing(generic_function35);
    nrow3 = ldf nrow;
    check L373() else D148();
  L378():
    goto L86(r290);
  L382():
    dx35 = getTryDispatchBuiltinValue(dr28);
    goto L379(dx35);
  L383():
    nrow4 = ldf nrow;
    check L385() else D153();
  L384():
    r296 = dyn base26(FALSE, <lang nrow(info)>);
    goto L87(r296);
  D109():
    deopt 415 [];
  D148():
    deopt 558 [];
  D153():
    deopt 576 [];
  L26(c13):
    c24 = `as.logical`(c13);
    if c24 then L178() else L29();
  L67(r213):
    r215 = `>`(r213, 1);
    c55 = `as.logical`(r215);
    if c55 then L305() else L68();
  L169():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L170() else L171();
  L298():
    p55 = prom<V +>{
      sym20 = ldf substitute;
      base20 = ldf substitute in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r207):
      return r207;
    L1():
      substitute1 = ldf substitute in base;
      r208 = dyn substitute1(<sym class>);
      goto L0(r208);
    L2():
      r206 = dyn base20(<sym class>);
      goto L0(r206);
    };
    r210 = dyn deparse2(p55);
    check L299() else D110();
  L301():
    class3 = ld class;
    check L303() else D111();
  L302():
    r212 = dyn base21(<sym class>);
    goto L67(r212);
  L373():
    p80 = prom<V +>{
      info52 = ld info;
      info53 = force? info52;
      checkMissing(info53);
      return info53;
    };
    r281 = dyn nrow3(p80);
    check L374() else D149();
  L385():
    p85 = prom<V +>{
      info56 = ld info;
      info57 = force? info56;
      checkMissing(info57);
      return info57;
    };
    r299 = dyn nrow4(p85);
    check L386() else D154();
  L388(dx38):
    st info = dx38;
    info58 = ld info;
    check L392() else D156();
  L389():
    dr30 = tryDispatchBuiltin.0("$<-", l4, r297);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L391() else L390(r297, dr30);
  L390(r302, l6):
    r305 = `$<-`(l6, <sym isS4>, r297);
    goto L388(r305);
  D110():
    deopt 417 [r210];
  D111():
    deopt 423 [class3];
  D149():
    deopt 560 [r281];
  D154():
    deopt 578 [r299];
  D156():
    deopt 584 [info58];
  L27(c16, r82):
    r88 = `!`(r82);
    c21 = `as.logical`(r88);
    c22 = `&&`(c16, c21);
    goto L26(c22);
  L29():
    goto L30();
  L30():
    st `warn.not.generic` = FALSE;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L182() else L183();
  L68():
    goto L70();
  L70():
    paste3 = ldf paste0;
    check L313() else D116();
  L170():
    generic_function5 = ld `generic.function`;
    check L172() else D45();
  L171():
    r81 = dyn base11(<lang `==`(generic.function, c("Math", "Ops", "Complex", "Summary", "matrixOps"))>);
    goto L27(c11, r81);
  L178():
    stop = ldf stop;
    check L179() else D48();
  L299():
    st class = r210;
    goto L66();
  L303():
    class4 = force? class3;
    checkMissing(class4);
    length3 = ldf length in base;
    r214 = dyn length3(class4);
    check L304() else D112();
  L305():
    warning2 = ldf warning;
    check L306() else D113();
  L374():
    rep_int2 = ldf `rep.int` in base;
    r282 = dyn rep_int2(generic_function35, r281);
    check L375() else D150();
  L386():
    rep_int3 = ldf `rep.int` in base;
    r300 = dyn rep_int3(FALSE, r299);
    check L387() else D155();
  L391():
    dx37 = getTryDispatchBuiltinValue(dr30);
    goto L388(dx37);
  L392():
    info59 = force? info58;
    checkMissing(info59);
    c67 = `is.object`(info59);
    if c67 then L393() else L394(info59);
  D45():
    deopt 169 [c11, generic_function5];
  D48():
    deopt 185 [];
  D112():
    deopt 426 [r214];
  D113():
    deopt 430 [];
  D116():
    deopt 442 [];
  D150():
    deopt 562 [r282];
  D155():
    deopt 580 [r300];
  L31(r95):
    r98 = `!`(r95);
    c25 = `as.logical`(r98);
    if c25 then L187() else L32();
  L88(dx40):
    st info = dx40;
    row_names9 = ldf `row.names`;
    check L398() else D159();
  L172():
    generic_function6 = force? generic_function5;
    checkMissing(generic_function6);
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L173() else L174();
  L179():
    p17 = prom<V +>{
      gettextf = ldf gettextf;
      p16 = prom<V +>{
        generic_function10 = ld `generic.function`;
        generic_function11 = force? generic_function10;
        checkMissing(generic_function11);
        return generic_function11;
      };
      r90 = dyn gettextf("no function '%s' is visible", p16);
      return r90;
    };
    r92 = dyn stop[, domain](p17, NA_LGL);
    check L180() else D49();
  L182():
    generic_function12 = ld `generic.function`;
    check L184() else D50();
  L183():
    r94 = dyn base13(<lang `==`(generic.function, knownGenerics)>);
    goto L31(r94);
  L304():
    goto L67(r214);
  L306():
    r216 = dyn warning2("'class' is of length > 1; only the first element will be used");
    check L307() else D114();
  L313():
    p56 = prom<V +>{
      class9 = ld class;
      class10 = force? class9;
      checkMissing(class10);
      return class10;
    };
    r219 = dyn paste3(".", p56, "$");
    check L314() else D117();
  L375():
    goto L85(r282);
  L387():
    goto L87(r300);
  L393():
    dr32 = tryDispatchBuiltin.1("[", info59);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L395() else L394(dr32);
  L394(info61):
    sort_list = ldf `sort.list`;
    check L396() else D157();
  D49():
    deopt 189 [r92];
  D50():
    deopt 197 [generic_function12];
  D114():
    deopt 432 [r216];
  D117():
    deopt 446 [r219];
  D157():
    deopt 587 [info61];
  D159():
    deopt 597 [];
  L28(c19, generic_function9, r84):
    r86 = `==`(generic_function9, r84);
    any = ldf any in base;
    r87 = dyn any(r86);
    check L176() else D47();
  L32():
    goto L36();
  L36():
    info = ld info;
    check L201() else D61();
  L173():
    c20 = ldf c in base;
    r85 = dyn c20("Math", "Ops", "Complex", "Summary", "matrixOps");
    check L175() else D46();
  L174():
    r83 = dyn base12("Math", "Ops", "Complex", "Summary", "matrixOps");
    goto L28(c11, generic_function6, r83);
  L180():
    goto L30();
  L184():
    generic_function13 = force? generic_function12;
    checkMissing(generic_function13);
    knownGenerics = ld knownGenerics;
    check L185() else D51();
  L187():
    findGeneric = ldf findGeneric;
    check L188() else D53();
  L307():
    class5 = ld class;
    check L308() else D115();
  L314():
    st name = r219;
    gsub = ldf gsub;
    check L315() else D118();
  L395():
    dx39 = getTryDispatchBuiltinValue(dr32);
    goto L88(dx39);
  L396():
    p87 = prom<V +>{
      row_names8 = ldf `row.names`;
      p86 = prom<V +>{
        info62 = ld info;
        info63 = force? info62;
        checkMissing(info63);
        return info63;
      };
      r307 = dyn row_names8(p86);
      return r307;
    };
    r309 = dyn sort_list(p87);
    check L397() else D158();
  L398():
    p88 = prom<V +>{
      info64 = ld info;
      info65 = force? info64;
      checkMissing(info65);
      return info65;
    };
    r312 = dyn row_names9(p88);
    check L399() else D160();
  D46():
    deopt 178 [c11, generic_function6, r85];
  D47():
    deopt 181 [c19, r87];
  D51():
    deopt 198 [generic_function13, knownGenerics];
  D53():
    deopt 205 [];
  D61():
    deopt 236 [info];
  D115():
    deopt 433 [class5];
  D118():
    deopt 449 [];
  D158():
    deopt 589 [info61, r309];
  D160():
    deopt 599 [r312];
  L175():
    goto L28(c11, generic_function6, r85);
  L176():
    goto L27(c19, r87);
  L185():
    knownGenerics1 = force? knownGenerics;
    checkMissing(knownGenerics1);
    r96 = `==`(generic_function13, knownGenerics1);
    any1 = ldf any in base;
    r97 = dyn any1(r96);
    check L186() else D52();
  L188():
    p18 = prom<V +>{
      generic_function14 = ld `generic.function`;
      generic_function15 = force? generic_function14;
      checkMissing(generic_function15);
      return generic_function15;
    };
    p19 = prom<V +>{
      envir5 = ld envir;
      envir6 = force? envir5;
      checkMissing(envir6);
      return envir6;
    };
    p20 = prom<V +>{
      methods_called2 = ld `methods.called`;
      methods_called3 = force? methods_called2;
      checkMissing(methods_called3);
      r101 = `!`(methods_called3);
      return r101;
    };
    r103 = dyn findGeneric[, , warnS4only](p18, p19, p20);
    check L189() else D54();
  L201():
    info1 = force? info;
    checkMissing(info1);
    c28 = `is.object`(info1);
    if c28 then L202() else L203(info1);
  L308():
    class6 = force? class5;
    checkMissing(class6);
    c56 = `is.object`(class6);
    if c56 then L309() else L310(class6);
  L315():
    p57 = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    r221 = dyn gsub("([.[])", "\\\\\\1", p57);
    check L316() else D119();
  L397():
    __18 = ldf `[` in base;
    r310 = dyn __18(info59, r309, <missing>, FALSE);
    goto L88(r310);
  L399():
    st res = r312;
    l7 = ld res;
    class__ = ldf `class<-`;
    check L400() else D161();
  D52():
    deopt 202 [r97];
  D54():
    deopt 210 [r103];
  D119():
    deopt 453 [r221];
  D161():
    deopt 604 ["MethodsFunction", l7, "MethodsFunction"];
  L37(dx8):
    st info = dx8;
    info6 = ld info;
    check L207() else D64();
  L69(dx23):
    st class = dx23;
    goto L70();
  L186():
    goto L31(r97);
  L189():
    st truegf = r103;
    truegf = ld truegf;
    check L190() else D55();
  L202():
    dr6 = tryDispatchBuiltin.1("[", info1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L204() else L203(dr6);
  L203(info3):
    startsWith = ldf startsWith;
    check L205() else D62();
  L309():
    dr18 = tryDispatchBuiltin.1("[", class6);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L311() else L310(dr18);
  L310(class8):
    __13 = ldf `[` in base;
    r217 = dyn __13(class8, 1);
    goto L69(r217);
  L316():
    st name = r221;
    info30 = ld info;
    check L317() else D120();
  L400():
    r313 = dyn class__(l7, NULL, "MethodsFunction");
    check L401() else D162();
  D55():
    deopt 212 [truegf];
  D62():
    deopt 239 [info3];
  D64():
    deopt 247 [info6];
  D120():
    deopt 455 [info30];
  D162():
    deopt 606 ["MethodsFunction", r313];
  L190():
    truegf1 = force? truegf;
    checkMissing(truegf1);
    r104 = `==`(truegf1, "");
    c26 = `as.logical`(r104);
    if c26 then L191() else L33();
  L204():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L37(dx7);
  L205():
    p25 = prom<V +>{
      row_names = ldf `row.names`;
      p24 = prom<V +>{
        info4 = ld info;
        info5 = force? info4;
        checkMissing(info5);
        return info5;
      };
      r114 = dyn row_names(p24);
      return r114;
    };
    p27 = prom<V +>{
      paste0 = ldf paste0;
      p26 = prom<V +>{
        generic_function20 = ld `generic.function`;
        generic_function21 = force? generic_function20;
        checkMissing(generic_function21);
        return generic_function21;
      };
      r117 = dyn paste0(p26, ".");
      return r117;
    };
    r119 = dyn startsWith(p25, p27);
    check L206() else D63();
  L207():
    info7 = force? info6;
    checkMissing(info7);
    c29 = `is.object`(info7);
    if c29 then L208() else L209(info7);
  L311():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L69(dx22);
  L317():
    info31 = force? info30;
    checkMissing(info31);
    c57 = `is.object`(info31);
    if c57 then L318() else L319(info31);
  L401():
    st res = r313;
    info66 = ld info;
    check L402() else D163();
  D63():
    deopt 242 [info3, r119];
  D163():
    deopt 608 [info66];
  L33():
    truegf2 = ld truegf;
    check L193() else D56();
  L34(r105):
    goto L36();
  L38(dx10):
    st info = dx10;
    nrow = ldf nrow;
    check L213() else D67();
  L71(dx26):
    st info = dx26;
    info36 = ld info;
    check L323() else D123();
  L191():
    st `warn.not.generic` = TRUE;
    goto L34(TRUE);
  L206():
    __4 = ldf `[` in base;
    r120 = dyn __4(info1, r119, <missing>);
    goto L37(r120);
  L208():
    dr8 = tryDispatchBuiltin.1("[", info7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L210() else L209(dr8);
  L209(info9):
    _in_ = ldf `%in%`;
    check L211() else D65();
  L318():
    dr20 = tryDispatchBuiltin.1("[", info31);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L320() else L319(dr20);
  L319(info33):
    grep1 = ldf grep;
    check L321() else D121();
  L402():
    info67 = force? info66;
    checkMissing(info67);
    l8 = ld res;
    attr__ = ldf `attr<-`;
    check L403() else D164();
  D56():
    deopt 219 [truegf2];
  D65():
    deopt 250 [info9];
  D67():
    deopt 260 [];
  D121():
    deopt 458 [info33];
  D123():
    deopt 466 [info36];
  D164():
    deopt 611 [info67, l8, info67];
  L193():
    truegf3 = force? truegf2;
    checkMissing(truegf3);
    generic_function16 = ld `generic.function`;
    check L194() else D57();
  L210():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L38(dx9);
  L211():
    p29 = prom<V +>{
      row_names1 = ldf `row.names`;
      p28 = prom<V +>{
        info10 = ld info;
        info11 = force? info10;
        checkMissing(info11);
        return info11;
      };
      r122 = dyn row_names1(p28);
      return r122;
    };
    p30 = prom<V +>{
      S3MethodsStopList = ld S3MethodsStopList;
      S3MethodsStopList1 = force? S3MethodsStopList;
      checkMissing(S3MethodsStopList1);
      return S3MethodsStopList1;
    };
    r125 = dyn _in_(p29, p30);
    check L212() else D66();
  L213():
    p31 = prom<V +>{
      info12 = ld info;
      info13 = force? info12;
      checkMissing(info13);
      return info13;
    };
    r129 = dyn nrow(p31);
    check L214() else D68();
  L320():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L71(dx25);
  L321():
    p58 = prom<V +>{
      name2 = ld name;
      name3 = force? name2;
      checkMissing(name3);
      return name3;
    };
    p60 = prom<V +>{
      row_names4 = ldf `row.names`;
      p59 = prom<V +>{
        info34 = ld info;
        info35 = force? info34;
        checkMissing(info35);
        return info35;
      };
      r224 = dyn row_names4(p59);
      return r224;
    };
    r226 = dyn grep1(p58, p60);
    check L322() else D122();
  L323():
    info37 = force? info36;
    checkMissing(info37);
    c58 = `is.object`(info37);
    if c58 then L324() else L325(info37);
  L403():
    r314 = dyn attr__(l8, NULL, "info", info67);
    check L404() else D165();
  D57():
    deopt 220 [truegf3, generic_function16];
  D66():
    deopt 253 [info9, r125];
  D68():
    deopt 262 [r129];
  D122():
    deopt 461 [info33, r226];
  D165():
    deopt 614 [info67, r314];
  L72(dx28):
    st info = dx28;
    nrow2 = ldf nrow;
    check L329() else D126();
  L194():
    generic_function17 = force? generic_function16;
    checkMissing(generic_function17);
    r106 = `!=`(truegf3, generic_function17);
    c27 = `as.logical`(r106);
    if c27 then L195() else L35();
  L212():
    r126 = `!`(r125);
    __5 = ldf `[` in base;
    r127 = dyn __5(info7, r126, <missing>);
    goto L38(r127);
  L214():
    c30 = `as.logical`(r129);
    if c30 then L215() else L39();
  L322():
    __14 = ldf `[` in base;
    r227 = dyn __14(info31, r226, <missing>);
    goto L71(r227);
  L324():
    dr22 = tryDispatchBuiltin.1("[", info37);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L326() else L325(dr22);
  L325(info39):
    _in_1 = ldf `%in%`;
    check L327() else D124();
  L404():
    st res = r314;
    sym27 = ldf missing;
    base27 = ldf missing in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L405() else L406();
  D124():
    deopt 469 [info39];
  D126():
    deopt 479 [];
  L35():
    goto L34(NULL);
  L39():
    goto L41();
  L41():
    warn_not_generic = ld `warn.not.generic`;
    check L224() else D73();
  L89(r316):
    l9 = ld res;
    attr__1 = ldf `attr<-`;
    check L407() else D166();
  L195():
    warning = ldf warning;
    check L196() else D58();
  L215():
    vapply = ldf vapply;
    check L216() else D69();
  L326():
    dx27 = getTryDispatchBuiltinValue(dr22);
    goto L72(dx27);
  L327():
    p62 = prom<V +>{
      row_names5 = ldf `row.names`;
      p61 = prom<V +>{
        info40 = ld info;
        info41 = force? info40;
        checkMissing(info41);
        return info41;
      };
      r229 = dyn row_names5(p61);
      return r229;
    };
    p63 = prom<V +>{
      S3MethodsStopList2 = ld S3MethodsStopList;
      S3MethodsStopList3 = force? S3MethodsStopList2;
      checkMissing(S3MethodsStopList3);
      return S3MethodsStopList3;
    };
    r232 = dyn _in_1(p62, p63);
    check L328() else D125();
  L329():
    p64 = prom<V +>{
      info42 = ld info;
      info43 = force? info42;
      checkMissing(info43);
      return info43;
    };
    r236 = dyn nrow2(p64);
    check L330() else D127();
  L405():
    missing3 = ldf missing in base;
    r317 = dyn missing3(<sym generic.function>);
    goto L89(r317);
  L406():
    r315 = dyn base27(<sym generic.function>);
    goto L89(r315);
  D58():
    deopt 224 [];
  D69():
    deopt 264 [];
  D73():
    deopt 282 [warn_not_generic];
  D125():
    deopt 472 [info39, r232];
  D127():
    deopt 481 [r236];
  D166():
    deopt 620 [r316, l9, r316];
  L196():
    p23 = prom<V +>{
      gettextf1 = ldf gettextf;
      p21 = prom<V +>{
        generic_function18 = ld `generic.function`;
        generic_function19 = force? generic_function18;
        checkMissing(generic_function19);
        return generic_function19;
      };
      p22 = prom<V +>{
        truegf4 = ld truegf;
        truegf5 = force? truegf4;
        checkMissing(truegf5);
        return truegf5;
      };
      r109 = dyn gettextf1("generic function '%s' dispatches methods for generic '%s'", p21, p22);
      return r109;
    };
    r111 = dyn warning[, domain](p23, NA_LGL);
    check L197() else D59();
  L216():
    p33 = prom<V +>{
      row_names2 = ldf `row.names`;
      p32 = prom<V +>{
        info14 = ld info;
        info15 = force? info14;
        checkMissing(info15);
        return info15;
      };
      r131 = dyn row_names2(p32);
      return r131;
    };
    p34 = prom<V +>{
      exists1 = ld exists;
      exists2 = force? exists1;
      checkMissing(exists2);
      return exists2;
    };
    p35 = prom<V +>{
      logical = ldf logical;
      r134 = dyn logical(1.0);
      return r134;
    };
    r136 = dyn vapply[, , , mode](p33, p34, p35, "function");
    check L217() else D70();
  L224():
    warn_not_generic1 = force? warn_not_generic;
    checkMissing(warn_not_generic1);
    c32 = `as.logical`(warn_not_generic1);
    if c32 then L225() else L42(c32);
  L328():
    r233 = `!`(r232);
    __15 = ldf `[` in base;
    r234 = dyn __15(info37, r233, <missing>);
    goto L72(r234);
  L330():
    c59 = `as.logical`(r236);
    if c59 then L331() else L73();
  L407():
    r318 = dyn attr__1(l9, NULL, "byclass", r316);
    check L408() else D167();
  D59():
    deopt 228 [r111];
  D70():
    deopt 270 [r136];
  D167():
    deopt 623 [r316, r318];
  L42(c34):
    c38 = `as.logical`(c34);
    if c38 then L229() else L43();
  L73():
    goto L75();
  L75():
    unlist1 = ldf unlist;
    check L342() else D134();
  L197():
    truegf6 = ld truegf;
    check L198() else D60();
  L217():
    st keep = r136;
    info16 = ld info;
    check L218() else D71();
  L225():
    nrow1 = ldf nrow;
    check L226() else D74();
  L331():
    gsub1 = ldf gsub;
    check L332() else D128();
  L408():
    st res = r318;
    res = ld res;
    check L409() else D168();
  D60():
    deopt 229 [truegf6];
  D71():
    deopt 272 [info16];
  D74():
    deopt 285 [c32];
  D128():
    deopt 483 [];
  D134():
    deopt 507 [];
  D168():
    deopt 625 [res];
  L43():
    goto L44();
  L44():
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L233() else L234();
  L198():
    truegf7 = force? truegf6;
    checkMissing(truegf7);
    st `generic.function` = truegf7;
    goto L34(truegf7);
  L218():
    info17 = force? info16;
    checkMissing(info17);
    c31 = `is.object`(info17);
    if c31 then L219() else L220(info17);
  L226():
    p36 = prom<V +>{
      info20 = ld info;
      info21 = force? info20;
      checkMissing(info21);
      return info21;
    };
    r139 = dyn nrow1(p36);
    check L227() else D75();
  L229():
    warning1 = ldf warning;
    check L230() else D76();
  L332():
    p65 = prom<V +>{
      name4 = ld name;
      name5 = force? name4;
      checkMissing(name5);
      return name5;
    };
    p67 = prom<V +>{
      row_names6 = ldf `row.names`;
      p66 = prom<V +>{
        info44 = ld info;
        info45 = force? info44;
        checkMissing(info45);
        return info45;
      };
      r239 = dyn row_names6(p66);
      return r239;
    };
    r241 = dyn gsub1(p65, "", p67);
    check L333() else D129();
  L342():
    p73 = prom<V +>{
      lapply1 = ldf lapply;
      p71 = prom<V +>{
        loadedNamespaces = ldf loadedNamespaces;
        r249 = dyn loadedNamespaces();
        return r249;
      };
      p72 = prom<V +>{
        r251 = clos inner3002224933;
        return r251;
      };
      r253 = dyn lapply1(p71, p72);
      return r253;
    };
    r255 = dyn unlist1(p73);
    check L343() else D135();
  L409():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D75():
    deopt 287 [c32, r139];
  D76():
    deopt 290 [];
  D129():
    deopt 487 [r241];
  D135():
    deopt 509 [r255];
  L40(dx12):
    st info = dx12;
    goto L41();
  L45(r146):
    r149 = `!`(r146);
    c40 = `as.logical`(r149);
    if c40 then L241() else L47();
  L219():
    dr10 = tryDispatchBuiltin.1("[", info17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L221() else L220(dr10);
  L220(info19):
    keep = ld keep;
    check L222() else D72();
  L227():
    c35 = `as.logical`(r139);
    c36 = `&&`(c32, c35);
    goto L42(c36);
  L230():
    p38 = prom<V +>{
      gettextf2 = ldf gettextf;
      p37 = prom<V +>{
        generic_function22 = ld `generic.function`;
        generic_function23 = force? generic_function22;
        checkMissing(generic_function23);
        return generic_function23;
      };
      r141 = dyn gettextf2("function '%s' appears not to be S3 generic; found functions that look like S3 methods", p37);
      return r141;
    };
    r143 = dyn warning1[, domain](p38, NA_LGL);
    check L231() else D77();
  L233():
    _knownS3Generics = ld `.knownS3Generics`;
    check L235() else D78();
  L234():
    r145 = dyn base14(<lang `<-`(w, `[`(.knownS3Generics, generic.function))>);
    goto L45(r145);
  L333():
    st `possible.generics` = r241;
    vapply1 = ldf vapply;
    check L334() else D130();
  L343():
    st S3reg = r255;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L344() else L345();
  D72():
    deopt 274 [info19, keep];
  D77():
    deopt 294 [r143];
  D78():
    deopt 299 [_knownS3Generics];
  D130():
    deopt 490 [];
  L47():
    get = ldf get;
    check L245() else D83();
  L48(r152):
    st defenv = r152;
    sym16 = ldf names;
    base16 = ldf names in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L262() else L263();
  L76(r257):
    c61 = `as.logical`(r257);
    if c61 then L348() else L77();
  L221():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L40(dx11);
  L222():
    keep1 = force? keep;
    __6 = ldf `[` in base;
    r137 = dyn __6(info17, keep1, <missing>);
    goto L40(r137);
  L231():
    goto L44();
  L235():
    _knownS3Generics1 = force? _knownS3Generics;
    checkMissing(_knownS3Generics1);
    c39 = `is.object`(_knownS3Generics1);
    if c39 then L236() else L237(_knownS3Generics1);
  L241():
    asNamespace = ldf asNamespace;
    check L242() else D81();
  L334():
    p68 = prom<V +>{
      possible_generics = ld `possible.generics`;
      possible_generics1 = force? possible_generics;
      checkMissing(possible_generics1);
      return possible_generics1;
    };
    p69 = prom<V +>{
      r243 = clos inner3369547807;
      return r243;
    };
    p70 = prom<V +>{
      logical1 = ldf logical;
      r245 = dyn logical1(1.0);
      return r245;
    };
    r247 = dyn vapply1(p68, p69, p70);
    check L335() else D131();
  L344():
    S3reg10 = ld S3reg;
    check L346() else D136();
  L345():
    r256 = dyn base22(<sym S3reg>);
    goto L76(r256);
  D81():
    deopt 309 [];
  D83():
    deopt 313 [];
  D131():
    deopt 494 [r247];
  D136():
    deopt 513 [S3reg10];
  L46(dx15):
    st w = dx15;
    is_na = ldf `is.na` in base;
    r148 = dyn is_na(dx15);
    check L240() else D80();
  L53(r172):
    st S3reg = r172;
    S3reg = ld S3reg;
    check L267() else D97();
  L77():
    goto L79();
  L79():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L356() else L357();
  L236():
    dr12 = tryDispatchBuiltin.1("[", _knownS3Generics1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L238() else L237(dr12);
  L237(_knownS3Generics3):
    generic_function24 = ld `generic.function`;
    check L239() else D79();
  L242():
    p39 = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    r151 = dyn asNamespace(p39);
    check L243() else D82();
  L245():
    p40 = prom<V +>{
      generic_function26 = ld `generic.function`;
      generic_function27 = force? generic_function26;
      checkMissing(generic_function27);
      return generic_function27;
    };
    p41 = prom<V +>{
      envir7 = ld envir;
      envir8 = force? envir7;
      checkMissing(envir8);
      return envir8;
    };
    r155 = dyn get[, mode, envir](p40, "function", p41);
    check L246() else D84();
  L262():
    get1 = ldf get;
    check L264() else D94();
  L263():
    r171 = dyn base16(<lang get(".__S3MethodsTable__.", envir=defenv)>);
    goto L53(r171);
  L335():
    st keep = r247;
    info46 = ld info;
    check L336() else D132();
  L346():
    S3reg11 = force? S3reg10;
    checkMissing(S3reg11);
    length4 = ldf length in base;
    r258 = dyn length4(S3reg11);
    check L347() else D137();
  L348():
    S3reg12 = ld S3reg;
    check L349() else D138();
  D79():
    deopt 301 [_knownS3Generics3, generic_function24];
  D80():
    deopt 306 [r148];
  D82():
    deopt 311 [r151];
  D84():
    deopt 319 [r155];
  D94():
    deopt 354 [];
  D97():
    deopt 362 [S3reg];
  D132():
    deopt 496 [info46];
  D137():
    deopt 516 [r258];
  D138():
    deopt 517 [S3reg12];
  L80(r267):
    c63 = `as.logical`(r267);
    if c63 then L360() else L81();
  L238():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L46(dx14);
  L239():
    generic_function25 = force? generic_function24;
    __7 = ldf `[` in base;
    r147 = dyn __7(_knownS3Generics3, generic_function25);
    goto L46(r147);
  L240():
    goto L45(r148);
  L243():
    goto L48(r151);
  L246():
    st genfun = r155;
    sym15 = ldf `.isMethodsDispatchOn`;
    base15 = ldf `.isMethodsDispatchOn` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L247() else L248();
  L264():
    p45 = prom<V +>{
      defenv = ld defenv;
      defenv1 = force? defenv;
      checkMissing(defenv1);
      return defenv1;
    };
    r174 = dyn get1[, envir](".__S3MethodsTable__.", p45);
    check L265() else D95();
  L267():
    S3reg1 = force? S3reg;
    checkMissing(S3reg1);
    c48 = `is.object`(S3reg1);
    if c48 then L268() else L269(S3reg1);
  L336():
    info47 = force? info46;
    checkMissing(info47);
    c60 = `is.object`(info47);
    if c60 then L337() else L338(info47);
  L347():
    goto L76(r258);
  L349():
    S3reg13 = force? S3reg12;
    checkMissing(S3reg13);
    c62 = `is.object`(S3reg13);
    if c62 then L350() else L351(S3reg13);
  L356():
    S3reg18 = ld S3reg;
    check L358() else D141();
  L357():
    r266 = dyn base23(<sym S3reg>);
    goto L80(r266);
  D95():
    deopt 358 [r174];
  D141():
    deopt 531 [S3reg18];
  L49(r157):
    c41 = `as.logical`(r157);
    if c41 then L250() else L50(c41);
  L54(dx17):
    st S3reg = dx17;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L273() else L274();
  L74(dx30):
    st info = dx30;
    goto L75();
  L78(dx33):
    st S3reg = dx33;
    goto L79();
  L81():
    goto L82(NULL);
  L82(r272):
    goto L61();
  L247():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r158 = dyn _isMethodsDispatchOn();
    check L249() else D85();
  L248():
    r156 = dyn base15();
    goto L49(r156);
  L265():
    names1 = ldf names in base;
    r175 = dyn names1(r174);
    check L266() else D96();
  L268():
    dr14 = tryDispatchBuiltin.1("[", S3reg1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L270() else L269(dr14);
  L269(S3reg3):
    startsWith1 = ldf startsWith;
    check L271() else D98();
  L337():
    dr24 = tryDispatchBuiltin.1("[", info47);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L339() else L338(dr24);
  L338(info49):
    keep2 = ld keep;
    check L340() else D133();
  L350():
    dr26 = tryDispatchBuiltin.1("[", S3reg13);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L352() else L351(dr26);
  L351(S3reg15):
    vapply2 = ldf vapply;
    check L353() else D139();
  L358():
    S3reg19 = force? S3reg18;
    checkMissing(S3reg19);
    length5 = ldf length in base;
    r268 = dyn length5(S3reg19);
    check L359() else D142();
  L360():
    rbindSome1 = ldf rbindSome;
    check L361() else D143();
  D85():
    deopt 324 [r158];
  D96():
    deopt 360 [r175];
  D98():
    deopt 365 [S3reg3];
  D133():
    deopt 498 [info49, keep2];
  D139():
    deopt 520 [S3reg15];
  D142():
    deopt 534 [r268];
  D143():
    deopt 536 [];
  L50(c43):
    c47 = `as.logical`(c43);
    if c47 then L255() else L51();
  L55(r183):
    c49 = `as.logical`(r183);
    if c49 then L277() else L56();
  L249():
    goto L49(r158);
  L250():
    __8 = ldf `::`;
    check L251() else D86();
  L266():
    goto L53(r175);
  L270():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L54(dx16);
  L271():
    p46 = prom<V +>{
      S3reg4 = ld S3reg;
      S3reg5 = force? S3reg4;
      checkMissing(S3reg5);
      return S3reg5;
    };
    p48 = prom<V +>{
      paste1 = ldf paste0;
      p47 = prom<V +>{
        generic_function28 = ld `generic.function`;
        generic_function29 = force? generic_function28;
        checkMissing(generic_function29);
        return generic_function29;
      };
      r178 = dyn paste1(p47, ".");
      return r178;
    };
    r180 = dyn startsWith1(p46, p48);
    check L272() else D99();
  L273():
    S3reg6 = ld S3reg;
    check L275() else D100();
  L274():
    r182 = dyn base17(<sym S3reg>);
    goto L55(r182);
  L339():
    dx29 = getTryDispatchBuiltinValue(dr24);
    goto L74(dx29);
  L340():
    keep3 = force? keep2;
    __16 = ldf `[` in base;
    r248 = dyn __16(info47, keep3, <missing>);
    goto L74(r248);
  L352():
    dx32 = getTryDispatchBuiltinValue(dr26);
    goto L78(dx32);
  L353():
    p76 = prom<V +>{
      gsub2 = ldf gsub;
      p74 = prom<V +>{
        name6 = ld name;
        name7 = force? name6;
        checkMissing(name7);
        return name7;
      };
      p75 = prom<V +>{
        S3reg16 = ld S3reg;
        S3reg17 = force? S3reg16;
        checkMissing(S3reg17);
        return S3reg17;
      };
      r261 = dyn gsub2(p74, "", p75);
      return r261;
    };
    p77 = prom<V +>{
      exists3 = ld exists;
      exists4 = force? exists3;
      checkMissing(exists4);
      return exists4;
    };
    r264 = dyn vapply2(p76, p77, NA_LGL);
    check L354() else D140();
  L359():
    goto L80(r268);
  L361():
    p78 = prom<V +>{
      info50 = ld info;
      info51 = force? info50;
      checkMissing(info51);
      return info51;
    };
    p79 = prom<V +>{
      S3reg20 = ld S3reg;
      S3reg21 = force? S3reg20;
      checkMissing(S3reg21);
      return S3reg21;
    };
    r271 = dyn rbindSome1[, , msg](p78, p79, "registered S3method");
    check L362() else D144();
  D86():
    deopt 326 [c41];
  D99():
    deopt 368 [S3reg3, r180];
  D100():
    deopt 373 [S3reg6];
  D140():
    deopt 524 [S3reg15, r264];
  D144():
    deopt 541 [r271];
  L51():
    goto L52();
  L52():
    _defenv_for_S3_registry = ldf `.defenv_for_S3_registry`;
    check L260() else D92();
  L56():
    goto L57();
  L57():
    generic_function32 = ld `generic.function`;
    check L281() else D104();
  L251():
    r159 = dyn __8("methods", "is");
    check L252() else D87();
  L255():
    __9 = ldf `::`;
    check L256() else D89();
  L272():
    __11 = ldf `[` in base;
    r181 = dyn __11(S3reg3, r180);
    goto L54(r181);
  L275():
    S3reg7 = force? S3reg6;
    checkMissing(S3reg7);
    length2 = ldf length in base;
    r184 = dyn length2(S3reg7);
    check L276() else D101();
  L277():
    rbindSome = ldf rbindSome;
    check L278() else D102();
  L354():
    __17 = ldf `[` in base;
    r265 = dyn __17(S3reg15, r264);
    goto L78(r265);
  L362():
    st info = r271;
    goto L82(r271);
  D87():
    deopt 329 [c41, r159];
  D89():
    deopt 336 [];
  D92():
    deopt 347 [];
  D101():
    deopt 376 [r184];
  D102():
    deopt 378 [];
  D104():
    deopt 387 [generic_function32];
  L252():
    checkFun.0(r159);
    r160 = r159 as cls;
    p42 = prom<V +>{
      genfun = ld genfun;
      genfun1 = force? genfun;
      checkMissing(genfun1);
      return genfun1;
    };
    r162 = dyn r160(p42, "genericFunction");
    check L253() else D88();
  L256():
    r163 = dyn __9("methods", "finalDefaultMethod");
    check L257() else D90();
  L260():
    p44 = prom<V +>{
      genfun2 = ld genfun;
      genfun3 = force? genfun2;
      checkMissing(genfun3);
      return genfun3;
    };
    r170 = dyn _defenv_for_S3_registry(p44);
    check L261() else D93();
  L276():
    goto L55(r184);
  L278():
    p49 = prom<V +>{
      info22 = ld info;
      info23 = force? info22;
      checkMissing(info23);
      return info23;
    };
    p50 = prom<V +>{
      S3reg8 = ld S3reg;
      S3reg9 = force? S3reg8;
      checkMissing(S3reg9);
      return S3reg9;
    };
    p52 = prom<V +>{
      paste2 = ldf paste;
      p51 = prom<V +>{
        generic_function30 = ld `generic.function`;
        generic_function31 = force? generic_function30;
        checkMissing(generic_function31);
        return generic_function31;
      };
      r188 = dyn paste2("registered S3method for", p51);
      return r188;
    };
    r190 = dyn rbindSome[, , msg](p49, p50, p52);
    check L279() else D103();
  L281():
    generic_function33 = force? generic_function32;
    checkMissing(generic_function33);
    r192 = `==`(generic_function33, "all");
    c50 = `as.logical`(r192);
    if c50 then L282() else L58();
  D88():
    deopt 333 [c41, r162];
  D90():
    deopt 339 [r163];
  D93():
    deopt 349 [r170];
  D103():
    deopt 383 [r190];
  L58():
    goto L60(NULL);
  L60(dx20):
    goto L61();
  L253():
    c44 = `as.logical`(r162);
    c45 = `&&`(c41, c44);
    goto L50(c45);
  L257():
    checkFun.0(r163);
    r164 = r163 as cls;
    p43 = prom<V +>{
      __10 = ldf `@` in base;
      r165 = dyn __10(<sym genfun>, <sym default>);
      return r165;
    };
    r167 = dyn r164(p43);
    check L258() else D91();
  L261():
    goto L48(r170);
  L279():
    st info = r190;
    goto L57();
  L282():
    info24 = ld info;
    check L283() else D105();
  D91():
    deopt 342 [r167];
  D105():
    deopt 391 [info24];
  L258():
    st genfun = r167;
    goto L52();
  L283():
    info25 = force? info24;
    checkMissing(info25);
    c51 = `is.object`(info25);
    if c51 then L284() else L285(info25);
  L59(dx19):
    st info = dx19;
    goto L60(dx19);
  L284():
    dr16 = tryDispatchBuiltin.1("[", info25);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L286() else L285(dr16);
  L285(info27):
    grep = ldf grep;
    check L287() else D106();
  D106():
    deopt 394 [info27];
  L286():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L59(dx18);
  L287():
    p54 = prom<V +>{
      row_names3 = ldf `row.names`;
      p53 = prom<V +>{
        info28 = ld info;
        info29 = force? info28;
        checkMissing(info29);
        return info29;
      };
      r194 = dyn row_names3(p53);
      return r194;
    };
    r196 = dyn grep("^all\\.equal", p54);
    check L288() else D107();
  D107():
    deopt 397 [info27, r196];
  L288():
    r197 = `-`(<missing>, r196);
    __12 = ldf `[` in base;
    r198 = dyn __12(info25, r197, <missing>);
    goto L59(r198);
  }
}
fun inner790807247(df, nms, msg) {
  (reg df:*, reg nms:*, reg msg:*) -+> V { var df:*, var nms:*, var msg:*, reg unique:cls, reg nms1:*, reg nms2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg nms3:*, reg nms4:V, reg length:cls, reg r4:V, reg data_frame:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg n2:*, reg n3:V, reg rep_int:cls, reg r7:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg msg1:*, reg msg2:V, reg n4:*, reg n5:V, reg rep_int1:cls, reg r11:V, reg p2:p(V +), reg nms5:*, reg nms6:V, reg p3:p(V +), reg r14:V, reg nrow:cls, reg df1:*, reg df2:V, reg p4:p(V +), reg r16:V, reg n6:*, reg n7:V, reg r17:V, reg c:L, reg dnew:*, reg dnew1:V, reg duplicated:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg rownames:cls, reg df3:*, reg df4:V, reg p5:p(V +), reg r23:V, reg rownames1:cls, reg dnew2:*, reg dnew3:V, reg p6:p(V +), reg r25:V, reg c1:cls, reg r26:V, reg p7:p(V +), reg r28:V, reg r29:V, reg rbind:cls, reg df5:*, reg df6:V, reg c2:L, reg df8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg keep:*, reg keep1:V, reg c3:L, reg df10:V, reg keep3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg n8:*, reg n9:V, reg r30:V, reg __:cls, reg r31:V, reg __1:cls, reg r32:V, reg p8:p(V +), reg dnew4:*, reg dnew5:V, reg c4:L, reg dnew7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg keep4:*, reg keep5:V, reg c5:L, reg dnew9:V, reg keep7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg n10:*, reg n11:V, reg r34:V, reg n12:*, reg n13:V, reg n14:*, reg n15:V, reg r35:V, reg r36:V, reg __2:cls, reg r37:V, reg __3:cls, reg r38:V, reg p9:p(V +), reg r40:V |
    mkenv;
    st df = df;
    st nms = nms;
    st msg = msg;
    unique = ldf unique;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      nms1 = ld nms;
      nms2 = force? nms1;
      checkMissing(nms2);
      return nms2;
    };
    r1 = dyn unique(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st nms = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    st n2 = r3;
    data_frame = ldf `data.frame`;
    check L9() else D4();
  L5():
    nms3 = ld nms;
    check L7() else D2();
  L6():
    r2 = dyn base(<sym nms>);
    goto L0(r2);
  D2():
    deopt 7 [nms3];
  D4():
    deopt 13 [];
  L7():
    nms4 = force? nms3;
    checkMissing(nms4);
    length = ldf length in base;
    r4 = dyn length(nms4);
    check L8() else D3();
  L9():
    p1 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      n2 = ld n2;
      n3 = force? n2;
      checkMissing(n3);
      rep_int = ldf `rep.int` in base;
      r7 = dyn rep_int(FALSE, n3);
      goto L0(r7);
    L2():
      r5 = dyn base1(FALSE, <sym n2>);
      goto L0(r5);
    };
    p2 = prom<V +>{
      sym2 = ldf `rep.int`;
      base2 = ldf `rep.int` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      msg1 = ld msg;
      msg2 = force? msg1;
      checkMissing(msg2);
      n4 = ld n2;
      n5 = force? n4;
      checkMissing(n5);
      rep_int1 = ldf `rep.int` in base;
      r11 = dyn rep_int1(msg2, n5);
      goto L0(r11);
    L2():
      r9 = dyn base2(<sym msg>, <sym n2>);
      goto L0(r9);
    };
    p3 = prom<V +>{
      nms5 = ld nms;
      nms6 = force? nms5;
      checkMissing(nms6);
      return nms6;
    };
    r14 = dyn data_frame[visible, from, `row.names`](p1, p2, p3);
    check L10() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 20 [r14];
  L8():
    goto L0(r4);
  L10():
    st dnew = r14;
    nrow = ldf nrow;
    check L11() else D6();
  D6():
    deopt 23 [];
  L11():
    p4 = prom<V +>{
      df1 = ld df;
      df2 = force? df1;
      checkMissing(df2);
      return df2;
    };
    r16 = dyn nrow(p4);
    check L12() else D7();
  D7():
    deopt 25 [r16];
  L12():
    st n = r16;
    n6 = ld n;
    check L13() else D8();
  D8():
    deopt 27 [n6];
  L13():
    n7 = force? n6;
    checkMissing(n7);
    r17 = `==`(n7, 0);
    c = `as.logical`(r17);
    if c then L14() else L1();
  L1():
    duplicated = ldf duplicated;
    check L18() else D10();
  L14():
    dnew = ld dnew;
    check L15() else D9();
  D9():
    deopt 31 [dnew];
  D10():
    deopt 37 [];
  L15():
    dnew1 = force? dnew;
    checkMissing(dnew1);
    popenv;
    return dnew1;
  L18():
    p7 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      rownames = ldf rownames;
      p5 = prom<V +>{
        df3 = ld df;
        df4 = force? df3;
        checkMissing(df4);
        return df4;
      };
      r23 = dyn rownames(p5);
      rownames1 = ldf rownames;
      p6 = prom<V +>{
        dnew2 = ld dnew;
        dnew3 = force? dnew2;
        checkMissing(dnew3);
        return dnew3;
      };
      r25 = dyn rownames1(p6);
      c1 = ldf c in base;
      r26 = dyn c1(r23, r25);
      goto L0(r26);
    L2():
      r20 = dyn base3(<lang rownames(df)>, <lang rownames(dnew)>);
      goto L0(r20);
    };
    r28 = dyn duplicated(p7);
    check L19() else D11();
  D11():
    deopt 39 [r28];
  L19():
    r29 = `!`(r28);
    st keep = r29;
    rbind = ldf rbind;
    check L20() else D12();
  D12():
    deopt 43 [];
  L20():
    p8 = prom<V +>{
      df5 = ld df;
      df6 = force? df5;
      checkMissing(df6);
      c2 = `is.object`(df6);
      if c2 then L2() else L3(df6);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", df6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(df8):
      keep = ld keep;
      keep1 = force? keep;
      checkMissing(keep1);
      c3 = `is.object`(keep1);
      if c3 then L5() else L6(df8, keep1);
    L1(dx3):
      __1 = ldf `[` in base;
      r32 = dyn __1(df6, dx3, <missing>);
      goto L0(r32);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", keep1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(df8, dr2);
    L6(df10, keep3):
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      r30 = `:`(1, n9);
      __ = ldf `[` in base;
      r31 = dyn __(keep3, r30);
      goto L1(r31);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    p9 = prom<V +>{
      dnew4 = ld dnew;
      dnew5 = force? dnew4;
      checkMissing(dnew5);
      c4 = `is.object`(dnew5);
      if c4 then L2() else L3(dnew5);
    L0(dx5):
      return dx5;
    L2():
      dr4 = tryDispatchBuiltin.1("[", dnew5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(dnew7):
      keep4 = ld keep;
      keep5 = force? keep4;
      checkMissing(keep5);
      c5 = `is.object`(keep5);
      if c5 then L5() else L6(dnew7, keep5);
    L1(dx7):
      __3 = ldf `[` in base;
      r38 = dyn __3(dnew5, dx7, <missing>);
      goto L0(r38);
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      dr6 = tryDispatchBuiltin.1("[", keep5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dnew7, dr6);
    L6(dnew9, keep7):
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      r34 = `+`(n11, 1);
      n12 = ld n;
      n13 = force? n12;
      checkMissing(n13);
      n14 = ld n2;
      n15 = force? n14;
      checkMissing(n15);
      r35 = `+`(n13, n15);
      r36 = `:`(r34, r35);
      __2 = ldf `[` in base;
      r37 = dyn __2(keep7, r36);
      goto L1(r37);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    };
    r40 = dyn rbind(p8, p9);
    check L21() else D13();
  D13():
    deopt 46 [r40];
  L21():
    popenv;
    return r40;
  }
}
fun inner3369547807(nm) {
  (reg nm:*) -+> V { var nm:*, reg _in_:cls, reg nm1:*, reg nm2:V, reg p:p(V +), reg knownGenerics:*, reg knownGenerics1:V, reg p1:p(V +), reg r2:V, reg c:L, reg find:cls, reg nm3:*, reg nm4:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg where:*, reg where1:V, reg length:cls, reg r9:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg vapply:cls, reg where2:*, reg where3:V, reg p3:p(V +), reg r13:cls, reg p4:p(V +), reg r15:V, reg any:cls, reg r16:V |
    mkenv;
    st nm = nm;
    _in_ = ldf `%in%`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      nm1 = ld nm;
      nm2 = force? nm1;
      checkMissing(nm2);
      return nm2;
    };
    p1 = prom<V +>{
      knownGenerics = ld knownGenerics;
      knownGenerics1 = force? knownGenerics;
      checkMissing(knownGenerics1);
      return knownGenerics1;
    };
    r2 = dyn _in_(p, p1);
    check L6() else D1();
  D1():
    deopt 4 [r2];
  L6():
    c = `as.logical`(r2);
    if c then L7() else L0();
  L0():
    find = ldf find;
    check L10() else D2();
  L7():
    popenv;
    return TRUE;
  D2():
    deopt 11 [];
  L10():
    p2 = prom<V +>{
      nm3 = ld nm;
      nm4 = force? nm3;
      checkMissing(nm4);
      return nm4;
    };
    r6 = dyn find[, mode](p2, "function");
    check L11() else D3();
  D3():
    deopt 15 [r6];
  L11():
    st where = r6;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(r8):
    c1 = `as.logical`(r8);
    if c1 then L16() else L3();
  L12():
    where = ld where;
    check L14() else D4();
  L13():
    r7 = dyn base(<sym where>);
    goto L2(r7);
  D4():
    deopt 19 [where];
  L3():
    popenv;
    return FALSE;
  L14():
    where1 = force? where;
    checkMissing(where1);
    length = ldf length in base;
    r9 = dyn length(where1);
    check L15() else D5();
  L16():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  D5():
    deopt 22 [r9];
  L4(r11):
    popenv;
    return r11;
  L15():
    goto L2(r9);
  L17():
    vapply = ldf vapply;
    check L19() else D6();
  L18():
    r10 = dyn base1(<lang vapply(where, function((w=), nzchar(findGeneric(nm, envir=as.environment(w))), NULL), NA_LGL)>);
    goto L4(r10);
  D6():
    deopt 26 [];
  L19():
    p3 = prom<V +>{
      where2 = ld where;
      where3 = force? where2;
      checkMissing(where3);
      return where3;
    };
    p4 = prom<V +>{
      r13 = clos inner530606259;
      return r13;
    };
    r15 = dyn vapply(p3, p4, NA_LGL);
    check L20() else D7();
  D7():
    deopt 30 [r15];
  L20():
    any = ldf any in base;
    r16 = dyn any(r15);
    check L21() else D8();
  D8():
    deopt 32 [r16];
  L21():
    goto L4(r16);
  }
}
fun inner530606259(w) {
  (reg w:*) -+> V { var w:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg findGeneric:cls, reg nm:*, reg nm1:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg w1:*, reg w2:V, reg as_environment:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg nzchar:cls, reg r8:V |
    mkenv;
    st w = w;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    findGeneric = ldf findGeneric;
    check L3() else D0();
  L2():
    r = dyn base(<lang findGeneric(nm, envir=as.environment(w))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    p1 = prom<V +>{
      sym1 = ldf `as.environment`;
      base1 = ldf `as.environment` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      w1 = ld w;
      w2 = force? w1;
      checkMissing(w2);
      as_environment = ldf `as.environment` in base;
      r5 = dyn as_environment(w2);
      goto L0(r5);
    L2():
      r3 = dyn base1(<sym w>);
      goto L0(r3);
    };
    r7 = dyn findGeneric[, envir](p, p1);
    check L4() else D1();
  D1():
    deopt 7 [r7];
  L4():
    nzchar = ldf nzchar in base;
    r8 = dyn nzchar(r7);
    check L5() else D2();
  D2():
    deopt 9 [r8];
  L5():
    goto L0(r8);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg ls:cls, reg getNamespace:cls, reg i1:*, reg i2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg p1:p(V +), reg name:*, reg name1:V, reg p2:p(V +), reg all_names:*, reg all_names1:V, reg p3:p(V +), reg r8:V |
    mkenv;
    st i = i;
    ls = ldf ls;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      getNamespace = ldf getNamespace;
      p = prom<V +>{
        i1 = ld i;
        i2 = force? i1;
        checkMissing(i2);
        return i2;
      };
      r1 = dyn getNamespace(p);
      c = `is.object`(r1);
      if c then L1() else L2(r1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r3):
      __ = ldf `[[` in base;
      r4 = dyn __(r3, ".__S3MethodsTable__.");
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    p3 = prom<V +>{
      all_names = ld `all.names`;
      all_names1 = force? all_names;
      checkMissing(all_names1);
      return all_names1;
    };
    r8 = dyn ls[, pattern, `all.names`](p1, p2, p3);
    check L1() else D1();
  D1():
    deopt 7 [r8];
  L1():
    popenv;
    return r8;
  }
}