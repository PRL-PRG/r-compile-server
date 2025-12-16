fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-575327741`;
    st namespaceImportFrom = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-575327741`(self, ns, vars, generics, packages, from, except) {
  (reg self:*, reg ns:*, reg vars:*, reg generics:*, reg packages:*, reg from:*, reg except:*) -+> V { var self:*, var ns:*, var vars:*, var generics:*, var packages:*, var from:*, reg from_isMissing:L, reg from_orDefault:*, var except:*, reg except_isMissing:L, reg except_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg r2:cls, reg r3:cls, reg r4:cls, reg r5:cls, reg r6:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg self1:*, reg self2:V, reg c:L, reg c1:L, reg getNamespace:cls, reg self3:*, reg self4:V, reg p1:p(V +), reg r10:V, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p2:p(V +), reg r13:V, reg getNamespaceName:cls, reg ns3:*, reg ns4:V, reg p3:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg missing:cls, reg r18:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg c3:cls, reg r21:V, reg getNamespaceExports:cls, reg ns5:*, reg ns6:V, reg p4:p(V +), reg r23:V, reg vars1:*, reg vars2:V, reg c4:L, reg vars4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg vars5:*, reg vars6:V, reg p5:p(V +), reg stoplist:*, reg stoplist1:V, reg p6:p(V +), reg r26:V, reg r27:V, reg __:cls, reg r28:V, reg dx2:V, reg vars7:*, reg vars8:V, reg impvars:*, reg impvars1:V, reg c5:L, reg impvars3:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg _in_1:cls, reg impvars4:*, reg impvars5:V, reg p7:p(V +), reg except1:*, reg except2:V, reg p8:p(V +), reg r31:V, reg r32:V, reg __1:cls, reg r33:V, reg makeImportExportNames:cls, reg impvars6:*, reg impvars7:V, reg p9:p(V +), reg r35:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg impvars8:*, reg impvars9:V, reg names:cls, reg r38:V, reg anyDuplicated:cls, reg impnames:*, reg impnames1:V, reg p10:p(V +), reg r40:V, reg c6:L, reg stop:cls, reg gettextf:cls, reg paste:cls, reg sQuote:cls, reg impnames2:*, reg impnames3:V, reg c7:L, reg impnames5:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg duplicated:cls, reg impnames6:*, reg impnames7:V, reg p11:p(V +), reg r42:V, reg __2:cls, reg r43:V, reg p12:p(V +), reg r45:V, reg p13:p(V +), reg r47:V, reg p14:p(V +), reg r49:V, reg p15:p(V +), reg r51:V, reg isNamespace:cls, reg self5:*, reg self6:V, reg p16:p(V +), reg r54:V, reg c8:L, reg isBaseNamespace:cls, reg self7:*, reg self8:V, reg p17:p(V +), reg r56:V, reg c9:L, reg self9:*, reg self10:V, reg gettext:cls, reg r57:V, reg r58:L, reg namespaceIsSealed:cls, reg self11:*, reg self12:V, reg p18:p(V +), reg r60:V, reg c10:L, reg stop1:cls, reg r61:V, reg parent_env:cls, reg self13:*, reg self14:V, reg p19:p(V +), reg r64:V, reg gettext1:cls, reg r65:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r67:V, reg r68:V, reg self15:*, reg self16:V, reg is_environment:cls, reg r69:V, reg c11:L, reg self17:*, reg self18:V, reg gettext2:cls, reg r70:V, reg stop2:cls, reg r71:V, reg whichMethodMetaNames:cls, reg impvars10:*, reg impvars11:V, reg p20:p(V +), reg r73:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r74:V, reg r75:V, reg which:*, reg which1:V, reg length:cls, reg r76:V, reg c12:L, reg integer:cls, reg r77:V, reg which2:*, reg which3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c13:L, reg x:V, reg _mergeImportMethods:cls, reg impenv:*, reg impenv1:V, reg p21:p(V +), reg ns7:*, reg ns8:V, reg p22:p(V +), reg impvars12:*, reg impvars13:V, reg c14:L, reg impvars15:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg i5:*, reg i6:V, reg __3:cls, reg r80:V, reg p23:p(V +), reg r82:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r83:V, reg i9:I, reg r84:V, reg methodsTable:*, reg methodsTable1:V, reg c15:V, reg c16:L, reg i12:I, reg sym7:cls, reg base7:cls, reg guard7:L, reg r86:V, reg i15:I, reg r87:V, reg delete:*, reg delete1:V, reg i16:*, reg i17:V, reg c17:cls, reg r88:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r89:V, reg i20:I, reg r90:V, reg missing1:cls, reg r91:V, reg r92:V, reg c18:L, reg generics1:*, reg generics2:V, reg c19:L, reg i24:I, reg generics4:V, reg dr8:V, reg dc4:L, reg dx9:V, reg i26:I, reg dx10:V, reg i27:*, reg i28:V, reg __4:cls, reg r93:V, reg __5:cls, reg r94:V, reg r95:cls, reg genName:*, reg genName1:V, reg p24:p(V +), reg impenv2:*, reg impenv3:V, reg p25:p(V +), reg packages1:*, reg packages2:V, reg c20:L, reg packages4:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg i29:*, reg i30:V, reg __6:cls, reg r98:V, reg p26:p(V +), reg r100:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r101:V, reg i33:I, reg r102:V, reg fdef:*, reg fdef1:V, reg c21:V, reg c22:L, reg warning:cls, reg gettextf1:cls, reg sQuote1:cls, reg genName2:*, reg genName3:V, reg p27:p(V +), reg r104:V, reg p28:p(V +), reg r106:V, reg p29:p(V +), reg r108:V, reg i36:I, reg r109:V, reg ___:cls, reg r110:V, reg r111:cls, reg fdef2:*, reg fdef3:V, reg p30:p(V +), reg ns9:*, reg ns10:V, reg p31:p(V +), reg r114:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r115:V, reg r116:V, reg delete2:*, reg delete3:V, reg length1:cls, reg r117:V, reg c23:L, reg impvars16:*, reg impvars17:V, reg c24:L, reg impvars19:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg delete4:*, reg delete5:V, reg r118:V, reg __7:cls, reg r119:V, reg impnames8:*, reg impnames9:V, reg c25:L, reg impnames11:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg delete6:*, reg delete7:V, reg r120:V, reg __8:cls, reg r121:V, reg dx17:V, reg impnames12:*, reg impnames13:V, reg s1:V, reg l1:I, reg i37:I, reg i38:I, reg i39:I, reg c26:L, reg x1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r122:V, reg i44:I, reg r123:V, reg impenv4:*, reg impenv5:V, reg c27:L, reg i46:I, reg impenv7:V, reg dr16:V, reg dc8:L, reg dx19:V, reg i48:I, reg dx20:V, reg n:*, reg n1:V, reg __9:cls, reg r124:V, reg c28:V, reg r125:V, reg c29:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r126:V, reg i53:I, reg r127:V, reg _isMethodsDispatchOn:cls, reg r128:V, reg c30:L, reg i55:I, reg c32:V, reg __10:cls, reg r129:V, reg r130:cls, reg n2:*, reg n3:V, reg p32:p(V +), reg ns11:*, reg ns12:V, reg p33:p(V +), reg r133:V, reg c33:L, reg c34:V, reg c36:L, reg genericPackage:cls, reg get:cls, reg n4:*, reg n5:V, reg p34:p(V +), reg ns13:*, reg ns14:V, reg p35:p(V +), reg r136:V, reg p36:p(V +), reg r138:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r139:V, reg i61:I, reg r140:V, reg genNs:*, reg genNs1:V, reg genericPackage1:cls, reg genImp:*, reg genImp1:V, reg p37:p(V +), reg r142:V, reg identical:cls, reg r143:V, reg c37:L, reg environmentName:cls, reg environment:cls, reg genImp2:*, reg genImp3:V, reg p38:p(V +), reg r146:V, reg p39:p(V +), reg r148:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r149:V, reg i68:I, reg r150:V, reg genNs2:*, reg genNs3:V, reg genImpenv:*, reg genImpenv1:V, reg identical1:cls, reg r151:V, reg r152:V, reg c38:L, reg i69:I, reg c39:V, reg __11:cls, reg r153:V, reg r154:cls, reg n6:*, reg n7:V, reg p40:p(V +), reg impenv8:*, reg impenv9:V, reg p41:p(V +), reg r157:V, reg c41:L, reg c42:V, reg c44:L, reg i75:I, reg sym15:cls, reg base15:cls, reg guard15:L, reg r160:V, reg i78:I, reg r161:V, reg genImp4:*, reg genImp5:V, reg get1:cls, reg n8:*, reg n9:V, reg p42:p(V +), reg ns15:*, reg ns16:V, reg p43:p(V +), reg r164:V, reg identical2:cls, reg r165:V, reg c45:L, reg isNamespace1:cls, reg self19:*, reg self20:V, reg p44:p(V +), reg r168:V, reg c46:L, reg i84:I, reg c48:V, reg isBaseNamespace1:cls, reg self21:*, reg self22:V, reg p45:p(V +), reg r170:V, reg r171:V, reg c49:L, reg c50:V, reg c52:L, reg getNamespaceInfo:cls, reg self23:*, reg self24:V, reg p46:p(V +), reg r173:V, reg lapply:cls, reg rev:cls, reg current:*, reg current1:V, reg p47:p(V +), reg r175:V, reg p48:p(V +), reg __12:*, reg __13:V, reg p49:p(V +), reg n10:*, reg n11:V, reg p50:p(V +), reg r179:V, reg poss:*, reg poss1:V, reg c53:L, reg i89:I, reg poss3:V, reg dr18:V, reg dc9:L, reg dx21:V, reg i91:I, reg dx22:V, reg sapply:cls, reg poss4:*, reg poss5:V, reg p51:p(V +), reg is_na:*, reg is_na1:V, reg p52:p(V +), reg r182:V, reg r183:V, reg __14:cls, reg r184:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r185:V, reg i94:I, reg r186:V, reg poss6:*, reg poss7:V, reg length2:cls, reg r187:V, reg r188:V, reg c54:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r189:V, reg i99:I, reg r190:V, reg poss8:*, reg poss9:V, reg names1:cls, reg r191:V, reg c55:L, reg i101:I, reg r193:V, reg dr20:V, reg dc10:L, reg dx23:V, reg i103:I, reg dx24:V, reg __15:cls, reg r194:V, reg warning1:cls, reg sprintf:cls, reg gettext3:cls, reg r195:V, reg p53:p(V +), reg sQuote2:cls, reg paste1:cls, reg prev:*, reg prev1:V, reg p54:p(V +), reg n12:*, reg n13:V, reg p55:p(V +), reg r199:V, reg p56:p(V +), reg r201:V, reg p57:p(V +), reg sQuote3:cls, reg paste2:cls, reg nsname:*, reg nsname1:V, reg p58:p(V +), reg n14:*, reg n15:V, reg p59:p(V +), reg r205:V, reg p60:p(V +), reg r207:V, reg p61:p(V +), reg sQuote4:cls, reg from1:*, reg from2:V, reg p62:p(V +), reg r210:V, reg p63:p(V +), reg r212:V, reg p64:p(V +), reg r214:V, reg i104:I, reg r215:V, reg warning2:cls, reg sprintf1:cls, reg msg:*, reg msg1:V, reg p65:p(V +), reg sQuote5:cls, reg paste3:cls, reg nsname2:*, reg nsname3:V, reg p66:p(V +), reg n16:*, reg n17:V, reg p67:p(V +), reg r219:V, reg p68:p(V +), reg r221:V, reg p69:p(V +), reg sQuote6:cls, reg from3:*, reg from4:V, reg p70:p(V +), reg r224:V, reg p71:p(V +), reg r226:V, reg p72:p(V +), reg r228:V, reg i105:I, reg r229:V, reg warning3:cls, reg sprintf2:cls, reg msg2:*, reg msg3:V, reg p73:p(V +), reg sQuote7:cls, reg paste4:cls, reg nsname4:*, reg nsname5:V, reg p74:p(V +), reg n18:*, reg n19:V, reg p75:p(V +), reg r233:V, reg p76:p(V +), reg r235:V, reg p77:p(V +), reg sQuote8:cls, reg from5:*, reg from6:V, reg p78:p(V +), reg r238:V, reg p79:p(V +), reg r240:V, reg p80:p(V +), reg r242:V, reg i106:I, reg importIntoEnv:cls, reg impenv10:*, reg impenv11:V, reg p81:p(V +), reg impnames14:*, reg impnames15:V, reg p82:p(V +), reg ns17:*, reg ns18:V, reg p83:p(V +), reg impvars20:*, reg impvars21:V, reg p84:p(V +), reg r248:V, reg register:*, reg register1:V, reg c56:L, reg addImports:cls, reg self25:*, reg self26:V, reg p85:p(V +), reg ns19:*, reg ns20:V, reg p86:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r251:V, reg r252:V, reg missing2:cls, reg r253:V, reg c57:L, reg impvars22:*, reg impvars23:V, reg p87:p(V +), reg r255:V |
    mkenv;
    st self = self;
    st ns = ns;
    st vars = vars;
    st generics = generics;
    st packages = packages;
    from_isMissing = missing.0(from);
    if from_isMissing then L0("non-package environment") else L0(from);
  L0(from_orDefault):
    st from = from_orDefault;
    except_isMissing = missing.0(except);
    if except_isMissing then L1() else L2(except);
  L1():
    p = prom<V +>{
      character = ldf character;
      r = dyn character(0);
      return r;
    };
    goto L2(p);
  L2(except_orDefault):
    st except = except_orDefault;
    r2 = clos inner1827219324;
    st addImports = r2;
    r3 = clos inner162799014;
    st namespaceIsSealed = r3;
    r4 = clos inner1392743580;
    st makeImportExportNames = r4;
    r5 = clos `inner-1309275147`;
    st whichMethodMetaNames = r5;
    r6 = clos `inner-763109789`;
    st genericPackage = r6;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L73() else L74();
  L3(r8):
    c1 = `as.logical`(r8);
    if c1 then L76() else L4();
  L73():
    self1 = ld self;
    check L75() else D0();
  L74():
    r7 = dyn base(<sym self>);
    goto L3(r7);
  D0():
    deopt 16 [self1];
  L4():
    goto L5();
  L5():
    asNamespace = ldf asNamespace;
    check L80() else D3();
  L75():
    self2 = force? self1;
    checkMissing(self2);
    c = `is.character`(self2);
    goto L3(c);
  L76():
    getNamespace = ldf getNamespace;
    check L77() else D1();
  D1():
    deopt 20 [];
  D3():
    deopt 27 [];
  L77():
    p1 = prom<V +>{
      self3 = ld self;
      self4 = force? self3;
      checkMissing(self4);
      return self4;
    };
    r10 = dyn getNamespace(p1);
    check L78() else D2();
  L80():
    p2 = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r13 = dyn asNamespace(p2);
    check L81() else D4();
  D2():
    deopt 22 [r10];
  D4():
    deopt 29 [r13];
  L78():
    st self = r10;
    goto L5();
  L81():
    st ns = r13;
    getNamespaceName = ldf getNamespaceName;
    check L82() else D5();
  D5():
    deopt 32 [];
  L82():
    p3 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r15 = dyn getNamespaceName(p3);
    check L83() else D6();
  D6():
    deopt 34 [r15];
  L83():
    st nsname = r15;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L84() else L85();
  L6(r17):
    c2 = `as.logical`(r17);
    if c2 then L86() else L7();
  L84():
    missing = ldf missing in base;
    r18 = dyn missing(<sym vars>);
    goto L6(r18);
  L85():
    r16 = dyn base1(<sym vars>);
    goto L6(r16);
  L7():
    vars7 = ld vars;
    check L99() else D13();
  L10(dx2):
    st impvars = dx2;
    impvars = ld impvars;
    check L100() else D14();
  L86():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L87() else L88();
  D13():
    deopt 69 [vars7];
  D14():
    deopt 72 [impvars];
  L8(r20):
    st stoplist = r20;
    getNamespaceExports = ldf getNamespaceExports;
    check L90() else D8();
  L87():
    c3 = ldf c in base;
    r21 = dyn c3(".__NAMESPACE__.", ".__S3MethodsTable__.", ".packageName", ".First.lib", ".Last.lib", ".onLoad", ".onAttach", ".onDetach", ".conflicts.OK", ".noGenerics");
    check L89() else D7();
  L88():
    r19 = dyn base2(".__NAMESPACE__.", ".__S3MethodsTable__.", ".packageName", ".First.lib", ".Last.lib", ".onLoad", ".onAttach", ".onDetach", ".conflicts.OK", ".noGenerics");
    goto L8(r19);
  L99():
    vars8 = force? vars7;
    checkMissing(vars8);
    goto L10(vars8);
  L100():
    impvars1 = force? impvars;
    checkMissing(impvars1);
    c5 = `is.object`(impvars1);
    if c5 then L101() else L102(impvars1);
  D7():
    deopt 52 [r21];
  D8():
    deopt 55 [];
  L11(dx4):
    st impvars = dx4;
    makeImportExportNames = ldf makeImportExportNames;
    check L106() else D17();
  L89():
    goto L8(r21);
  L90():
    p4 = prom<V +>{
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      return ns6;
    };
    r23 = dyn getNamespaceExports(p4);
    check L91() else D9();
  L101():
    dr2 = tryDispatchBuiltin.1("[", impvars1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L103() else L102(dr2);
  L102(impvars3):
    _in_1 = ldf `%in%`;
    check L104() else D15();
  D9():
    deopt 57 [r23];
  D15():
    deopt 75 [impvars3];
  D17():
    deopt 83 [];
  L91():
    st vars = r23;
    vars1 = ld vars;
    check L92() else D10();
  L103():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx3);
  L104():
    p7 = prom<V +>{
      impvars4 = ld impvars;
      impvars5 = force? impvars4;
      checkMissing(impvars5);
      return impvars5;
    };
    p8 = prom<V +>{
      except1 = ld except;
      except2 = force? except1;
      checkMissing(except2);
      return except2;
    };
    r31 = dyn _in_1(p7, p8);
    check L105() else D16();
  L106():
    p9 = prom<V +>{
      impvars6 = ld impvars;
      impvars7 = force? impvars6;
      checkMissing(impvars7);
      return impvars7;
    };
    r35 = dyn makeImportExportNames(p9);
    check L107() else D18();
  D10():
    deopt 59 [vars1];
  D16():
    deopt 78 [impvars3, r31];
  D18():
    deopt 85 [r35];
  L92():
    vars2 = force? vars1;
    checkMissing(vars2);
    c4 = `is.object`(vars2);
    if c4 then L93() else L94(vars2);
  L105():
    r32 = `!`(r31);
    __1 = ldf `[` in base;
    r33 = dyn __1(impvars3, r32);
    goto L11(r33);
  L107():
    st impvars = r35;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L108() else L109();
  L9(dx1):
    st vars = dx1;
    goto L10(dx1);
  L12(r37):
    st impnames = r37;
    anyDuplicated = ldf anyDuplicated;
    check L112() else D21();
  L93():
    dr = tryDispatchBuiltin.1("[", vars2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L95() else L94(dr);
  L94(vars4):
    _in_ = ldf `%in%`;
    check L96() else D11();
  L108():
    impvars8 = ld impvars;
    check L110() else D19();
  L109():
    r36 = dyn base3(<sym impvars>);
    goto L12(r36);
  D11():
    deopt 62 [vars4];
  D19():
    deopt 89 [impvars8];
  D21():
    deopt 95 [];
  L95():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L96():
    p5 = prom<V +>{
      vars5 = ld vars;
      vars6 = force? vars5;
      checkMissing(vars6);
      return vars6;
    };
    p6 = prom<V +>{
      stoplist = ld stoplist;
      stoplist1 = force? stoplist;
      checkMissing(stoplist1);
      return stoplist1;
    };
    r26 = dyn _in_(p5, p6);
    check L97() else D12();
  L110():
    impvars9 = force? impvars8;
    checkMissing(impvars9);
    names = ldf names in base;
    r38 = dyn names(impvars9);
    check L111() else D20();
  L112():
    p10 = prom<V +>{
      impnames = ld impnames;
      impnames1 = force? impnames;
      checkMissing(impnames1);
      return impnames1;
    };
    r40 = dyn anyDuplicated(p10);
    check L113() else D22();
  D12():
    deopt 65 [vars4, r26];
  D20():
    deopt 92 [r38];
  D22():
    deopt 97 [r40];
  L97():
    r27 = `!`(r26);
    __ = ldf `[` in base;
    r28 = dyn __(vars4, r27);
    goto L9(r28);
  L111():
    goto L12(r38);
  L113():
    c6 = `as.logical`(r40);
    if c6 then L114() else L13();
  L13():
    goto L14();
  L14():
    isNamespace = ldf isNamespace;
    check L118() else D25();
  L114():
    stop = ldf stop;
    check L115() else D23();
  D23():
    deopt 99 [];
  D25():
    deopt 107 [];
  L115():
    p15 = prom<V +>{
      gettextf = ldf gettextf;
      p14 = prom<V +>{
        paste = ldf paste;
        p13 = prom<V +>{
          sQuote = ldf sQuote;
          p12 = prom<V +>{
            impnames2 = ld impnames;
            impnames3 = force? impnames2;
            checkMissing(impnames3);
            c7 = `is.object`(impnames3);
            if c7 then L1() else L2(impnames3);
          L0(dx6):
            return dx6;
          L1():
            dr4 = tryDispatchBuiltin.1("[", impnames3);
            dc2 = getTryDispatchBuiltinDispatched(dr4);
            if dc2 then L3() else L2(dr4);
          L2(impnames5):
            duplicated = ldf duplicated;
            p11 = prom<V +>{
              impnames6 = ld impnames;
              impnames7 = force? impnames6;
              checkMissing(impnames7);
              return impnames7;
            };
            r42 = dyn duplicated(p11);
            __2 = ldf `[` in base;
            r43 = dyn __2(impnames5, r42);
            goto L0(r43);
          L3():
            dx5 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx5);
          };
          r45 = dyn sQuote(p12);
          return r45;
        };
        r47 = dyn paste[, collapse](p13, ", ");
        return r47;
      };
      r49 = dyn gettextf("duplicate import names %s", p14);
      return r49;
    };
    r51 = dyn stop[, domain](p15, NA_LGL);
    check L116() else D24();
  L118():
    p16 = prom<V +>{
      self5 = ld self;
      self6 = force? self5;
      checkMissing(self6);
      return self6;
    };
    r54 = dyn isNamespace(p16);
    check L119() else D26();
  D24():
    deopt 103 [r51];
  D26():
    deopt 109 [r54];
  L116():
    goto L14();
  L119():
    c8 = `as.logical`(r54);
    if c8 then L120() else L15();
  L15():
    sym4 = ldf `is.environment`;
    base4 = ldf `is.environment` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L139() else L140();
  L20():
    whichMethodMetaNames = ldf whichMethodMetaNames;
    check L150() else D47();
  L120():
    isBaseNamespace = ldf isBaseNamespace;
    check L121() else D27();
  D27():
    deopt 111 [];
  D47():
    deopt 170 [];
  L21(r68):
    c11 = `as.logical`(r68);
    if c11 then L143() else L22();
  L121():
    p17 = prom<V +>{
      self7 = ld self;
      self8 = force? self7;
      checkMissing(self8);
      return self8;
    };
    r56 = dyn isBaseNamespace(p17);
    check L122() else D28();
  L139():
    self15 = ld self;
    check L141() else D40();
  L140():
    r67 = dyn base4(<sym self>);
    goto L21(r67);
  L150():
    p20 = prom<V +>{
      impvars10 = ld impvars;
      impvars11 = force? impvars10;
      checkMissing(impvars11);
      return impvars11;
    };
    r73 = dyn whichMethodMetaNames(p20);
    check L151() else D48();
  D28():
    deopt 113 [r56];
  D40():
    deopt 150 [self15];
  D48():
    deopt 172 [r73];
  L22():
    stop2 = ldf stop;
    check L148() else D45();
  L122():
    c9 = `as.logical`(r56);
    if c9 then L123() else L16();
  L141():
    self16 = force? self15;
    checkMissing(self16);
    is_environment = ldf `is.environment` in base;
    r69 = dyn is_environment(self16);
    check L142() else D41();
  L143():
    self17 = ld self;
    check L144() else D42();
  L151():
    st which = r73;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L152() else L153();
  D41():
    deopt 153 [r69];
  D42():
    deopt 154 [self17];
  D45():
    deopt 166 [];
  L16():
    namespaceIsSealed = ldf namespaceIsSealed;
    check L128() else D32();
  L17(r58):
    goto L20();
  L23(r75):
    c12 = `as.logical`(r75);
    if c12 then L156() else L24();
  L123():
    self9 = ld self;
    check L124() else D29();
  L142():
    goto L21(r69);
  L144():
    self18 = force? self17;
    checkMissing(self18);
    st impenv = self18;
    gettext2 = ldf gettext;
    check L145() else D43();
  L148():
    r71 = dyn stop2("invalid import target");
    check L149() else D46();
  L152():
    which = ld which;
    check L154() else D49();
  L153():
    r74 = dyn base5(<sym which>);
    goto L23(r74);
  D29():
    deopt 114 [self9];
  D32():
    deopt 126 [];
  D43():
    deopt 158 [];
  D46():
    deopt 168 [r71];
  D49():
    deopt 176 [which];
  L24():
    goto L42();
  L42():
    impnames12 = ld impnames;
    check L212() else D77();
  L124():
    self10 = force? self9;
    checkMissing(self10);
    st impenv = self10;
    gettext = ldf gettext;
    check L125() else D30();
  L128():
    p18 = prom<V +>{
      self11 = ld self;
      self12 = force? self11;
      checkMissing(self12);
      return self12;
    };
    r60 = dyn namespaceIsSealed(p18);
    check L129() else D33();
  L145():
    r70 = dyn gettext2("replacing local value with import %s when loading %s");
    check L146() else D44();
  L149():
    goto L20();
  L154():
    which1 = force? which;
    checkMissing(which1);
    length = ldf length in base;
    r76 = dyn length(which1);
    check L155() else D50();
  L156():
    integer = ldf integer;
    check L157() else D51();
  D30():
    deopt 118 [];
  D33():
    deopt 128 [r60];
  D44():
    deopt 160 [r70];
  D50():
    deopt 179 [r76];
  D51():
    deopt 181 [];
  D77():
    deopt 282 [impnames12];
  L125():
    r57 = dyn gettext("replacing local value with import %s when loading %s");
    check L126() else D31();
  L129():
    c10 = `as.logical`(r60);
    if c10 then L130() else L18();
  L146():
    st msg = r70;
    st register = FALSE;
    goto L20();
  L155():
    goto L23(r76);
  L157():
    r77 = dyn integer();
    check L158() else D52();
  L212():
    impnames13 = force? impnames12;
    checkMissing(impnames13);
    s1 = toForSeq(impnames13);
    l1 = length(s1);
    i37 = 0;
    goto L43(i37);
  D31():
    deopt 120 [r57];
  D52():
    deopt 182 [r77];
  L18():
    goto L19();
  L19():
    parent_env = ldf `parent.env`;
    check L134() else D36();
  L43(i38):
    i39 = `+`.1(i38, 1);
    c26 = `<`.1(l1, i39);
    if c26 then L213() else L71();
  L126():
    st msg = r57;
    st register = FALSE;
    goto L17(FALSE);
  L130():
    stop1 = ldf stop;
    check L131() else D34();
  L158():
    st delete = r77;
    which2 = ld which;
    check L159() else D53();
  D34():
    deopt 130 [];
  D36():
    deopt 136 [];
  D53():
    deopt 184 [which2];
  L71():
    x1 = `[[`(s1, i39, NULL, TRUE);
    st n = x1;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L214() else L215();
  L131():
    r61 = dyn stop1("cannot import into a sealed namespace");
    check L132() else D35();
  L134():
    p19 = prom<V +>{
      self13 = ld self;
      self14 = force? self13;
      checkMissing(self14);
      return self14;
    };
    r64 = dyn parent_env(p19);
    check L135() else D37();
  L159():
    which3 = force? which2;
    checkMissing(which3);
    s = toForSeq(which3);
    l = length(s);
    i = 0;
    goto L25(i);
  L213():
    importIntoEnv = ldf importIntoEnv;
    check L305() else D123();
  D35():
    deopt 132 [r61];
  D37():
    deopt 138 [r64];
  D123():
    deopt 473 [];
  L25(i1):
    i2 = `+`.1(i1, 1);
    c13 = `<`.1(l, i2);
    if c13 then L160() else L36();
  L44(i44, r123):
    r125 = `!`(r123);
    c29 = `as.logical`(r125);
    if c29 then L221() else L46();
  L132():
    goto L19();
  L135():
    st impenv = r64;
    gettext1 = ldf gettext;
    check L136() else D38();
  L214():
    impenv4 = ld impenv;
    check L216() else D78();
  L215():
    r122 = dyn base11(<lang `<-`(genImp, `[[`(impenv, n))>);
    goto L44(i39, r122);
  L305():
    p81 = prom<V +>{
      impenv10 = ld impenv;
      impenv11 = force? impenv10;
      checkMissing(impenv11);
      return impenv11;
    };
    p82 = prom<V +>{
      impnames14 = ld impnames;
      impnames15 = force? impnames14;
      checkMissing(impnames15);
      return impnames15;
    };
    p83 = prom<V +>{
      ns17 = ld ns;
      ns18 = force? ns17;
      checkMissing(ns18);
      return ns18;
    };
    p84 = prom<V +>{
      impvars20 = ld impvars;
      impvars21 = force? impvars20;
      checkMissing(impvars21);
      return impvars21;
    };
    r248 = dyn importIntoEnv(p81, p82, p83, p84);
    check L306() else D124();
  D38():
    deopt 141 [];
  D78():
    deopt 285 [i39, impenv4];
  D124():
    deopt 478 [r248];
  L36():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    _mergeImportMethods = ldf `.mergeImportMethods`;
    check L161() else D54();
  L46():
    goto L70(i44);
  L70(i106):
    goto L43(i106);
  L136():
    r65 = dyn gettext1("replacing previous import by %s when loading %s");
    check L137() else D39();
  L160():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L195() else L196();
  L216():
    impenv5 = force? impenv4;
    checkMissing(impenv5);
    c27 = `is.object`(impenv5);
    if c27 then L217() else L218(i39, impenv5);
  L221():
    sym12 = ldf `.isMethodsDispatchOn`;
    base12 = ldf `.isMethodsDispatchOn` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L222() else L223();
  L306():
    register = ld register;
    check L307() else D125();
  D39():
    deopt 143 [r65];
  D54():
    deopt 187 [i2];
  D125():
    deopt 479 [register];
  L37(r116):
    c23 = `as.logical`(r116);
    if c23 then L199() else L38();
  L45(i48, dx20):
    st genImp = dx20;
    c28 = `==`(dx20, NULL);
    goto L44(i48, c28);
  L47(i53, r127):
    c30 = `as.logical`(r127);
    if c30 then L225() else L48(i53, c30);
  L137():
    st msg = r65;
    st register = TRUE;
    goto L17(TRUE);
  L161():
    p21 = prom<V +>{
      impenv = ld impenv;
      impenv1 = force? impenv;
      checkMissing(impenv1);
      return impenv1;
    };
    p22 = prom<V +>{
      ns7 = ld ns;
      ns8 = force? ns7;
      checkMissing(ns8);
      return ns8;
    };
    p23 = prom<V +>{
      impvars12 = ld impvars;
      impvars13 = force? impvars12;
      checkMissing(impvars13);
      c14 = `is.object`(impvars13);
      if c14 then L1() else L2(impvars13);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", impvars13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(impvars15):
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[[` in base;
      r80 = dyn __3(impvars15, i6);
      goto L0(r80);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    r82 = dyn _mergeImportMethods(p21, p22, p23);
    check L162() else D55();
  L195():
    delete2 = ld delete;
    check L197() else D71();
  L196():
    r115 = dyn base10(<sym delete>);
    goto L37(r115);
  L217():
    dr16 = tryDispatchBuiltin.1("[[", impenv5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L219() else L218(i39, dr16);
  L218(i46, impenv7):
    n = ld n;
    check L220() else D79();
  L222():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r128 = dyn _isMethodsDispatchOn();
    check L224() else D80();
  L223():
    r126 = dyn base12();
    goto L47(i44, r126);
  L307():
    register1 = force? register;
    checkMissing(register1);
    c56 = `as.logical`(register1);
    if c56 then L308() else L72();
  D55():
    deopt 191 [i2, r82];
  D71():
    deopt 260 [delete2];
  D79():
    deopt 287 [i46, impenv7, n];
  D80():
    deopt 296 [i44, r128];
  L38():
    goto L41(NULL);
  L41(dx17):
    goto L42();
  L48(i55, c32):
    c36 = `as.logical`(c32);
    if c36 then L230() else L49();
  L72():
    invisible.0();
    popenv;
    return NULL;
  L162():
    st methodsTable = r82;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L163() else L164();
  L197():
    delete3 = force? delete2;
    checkMissing(delete3);
    length1 = ldf length in base;
    r117 = dyn length1(delete3);
    check L198() else D72();
  L199():
    impvars16 = ld impvars;
    check L200() else D73();
  L219():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L45(i39, dx19);
  L220():
    n1 = force? n;
    __9 = ldf `[[` in base;
    r124 = dyn __9(impenv7, n1);
    goto L45(i46, r124);
  L224():
    goto L47(i44, r128);
  L225():
    __10 = ldf `::`;
    check L226() else D81();
  L308():
    addImports = ldf addImports;
    check L309() else D126();
  D72():
    deopt 263 [r117];
  D73():
    deopt 264 [impvars16];
  D81():
    deopt 298 [i53, c30];
  D126():
    deopt 482 [];
  L26(i9, r84):
    c16 = `as.logical`(r84);
    if c16 then L166() else L27();
  L49():
    goto L57(i55);
  L57(i75):
    sym15 = ldf identical;
    base15 = ldf identical in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L258() else L259();
  L163():
    methodsTable = ld methodsTable;
    check L165() else D56();
  L164():
    r83 = dyn base6(<sym methodsTable>);
    goto L26(i2, r83);
  L198():
    goto L37(r117);
  L200():
    impvars17 = force? impvars16;
    checkMissing(impvars17);
    c24 = `is.object`(impvars17);
    if c24 then L201() else L202(impvars17);
  L226():
    r129 = dyn __10("methods", "isGeneric");
    check L227() else D82();
  L230():
    genericPackage = ldf genericPackage;
    check L231() else D84();
  L309():
    p85 = prom<V +>{
      self25 = ld self;
      self26 = force? self25;
      checkMissing(self26);
      return self26;
    };
    p86 = prom<V +>{
      ns19 = ld ns;
      ns20 = force? ns19;
      checkMissing(ns20);
      return ns20;
    };
    p87 = prom<V +>{
      sym18 = ldf missing;
      base18 = ldf missing in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L2() else L3();
    L0(r252):
      c57 = `as.logical`(r252);
      if c57 then L4() else L1();
    L2():
      missing2 = ldf missing in base;
      r253 = dyn missing2(<sym vars>);
      goto L0(r253);
    L3():
      r251 = dyn base18(<sym vars>);
      goto L0(r251);
    L1():
      impvars22 = ld impvars;
      impvars23 = force? impvars22;
      checkMissing(impvars23);
      return impvars23;
    L4():
      return TRUE;
    };
    r255 = dyn addImports(p85, p86, p87);
    check L310() else D127();
  D56():
    deopt 194 [i2, methodsTable];
  D82():
    deopt 301 [i53, c30, r129];
  D84():
    deopt 308 [i55];
  D127():
    deopt 486 [r255];
  L27():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L168() else L169();
  L28(i12):
    goto L25(i12);
  L39(dx14):
    st impvars = dx14;
    impnames8 = ld impnames;
    check L205() else D75();
  L58(i78, r161):
    c45 = `as.logical`(r161);
    if c45 then L264() else L59();
  L165():
    methodsTable1 = force? methodsTable;
    checkMissing(methodsTable1);
    c15 = `==`(methodsTable1, NULL);
    goto L26(i2, c15);
  L166():
    goto L28(i9);
  L201():
    dr12 = tryDispatchBuiltin.1("[", impvars17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L203() else L202(dr12);
  L202(impvars19):
    delete4 = ld delete;
    check L204() else D74();
  L227():
    checkFun.0(r129);
    r130 = r129 as cls;
    p32 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    p33 = prom<V +>{
      ns11 = ld ns;
      ns12 = force? ns11;
      checkMissing(ns12);
      return ns12;
    };
    r133 = dyn r130(p32, p33);
    check L228() else D83();
  L231():
    p36 = prom<V +>{
      get = ldf get;
      p34 = prom<V +>{
        n4 = ld n;
        n5 = force? n4;
        checkMissing(n5);
        return n5;
      };
      p35 = prom<V +>{
        ns13 = ld ns;
        ns14 = force? ns13;
        checkMissing(ns14);
        return ns14;
      };
      r136 = dyn get[, envir](p34, p35);
      return r136;
    };
    r138 = dyn genericPackage(p36);
    check L232() else D85();
  L258():
    genImp4 = ld genImp;
    check L260() else D98();
  L259():
    r160 = dyn base15(<sym genImp>, <lang get(n, ns)>);
    goto L58(i75, r160);
  L310():
    popenv;
    return r255;
  D74():
    deopt 266 [impvars19, delete4];
  D75():
    deopt 271 [impnames8];
  D83():
    deopt 305 [i53, c30, r133];
  D85():
    deopt 310 [i55, r138];
  D98():
    deopt 372 [i75, genImp4];
  L29(i15, r87):
    st delete = r87;
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L173() else L174();
  L59():
    isNamespace1 = ldf isNamespace;
    check L267() else D102();
  L168():
    delete = ld delete;
    check L170() else D57();
  L169():
    r86 = dyn base7(<sym delete>, <sym i>);
    goto L29(i9, r86);
  L203():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L39(dx13);
  L204():
    delete5 = force? delete4;
    checkMissing(delete5);
    r118 = `-`(<missing>, delete5);
    __7 = ldf `[` in base;
    r119 = dyn __7(impvars19, r118);
    goto L39(r119);
  L205():
    impnames9 = force? impnames8;
    checkMissing(impnames9);
    c25 = `is.object`(impnames9);
    if c25 then L206() else L207(impnames9);
  L228():
    c33 = `as.logical`(r133);
    c34 = `&&`(c30, c33);
    goto L48(i53, c34);
  L232():
    st genNs = r138;
    sym13 = ldf identical;
    base13 = ldf identical in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L233() else L234();
  L260():
    genImp5 = force? genImp4;
    checkMissing(genImp5);
    get1 = ldf get;
    check L261() else D99();
  L264():
    goto L43(i78);
  D57():
    deopt 201 [i9, delete];
  D99():
    deopt 375 [i75];
  D102():
    deopt 393 [i78];
  L30(i20, r90):
    r92 = `!`(r90);
    c18 = `as.logical`(r92);
    if c18 then L175() else L31();
  L40(dx16):
    st impnames = dx16;
    goto L41(dx16);
  L50(i61, r140):
    c37 = `as.logical`(r140);
    if c37 then L239() else L51();
  L170():
    delete1 = force? delete;
    checkMissing(delete1);
    i16 = ld i;
    check L171() else D58();
  L173():
    missing1 = ldf missing in base;
    r91 = dyn missing1(<sym generics>);
    goto L30(i15, r91);
  L174():
    r89 = dyn base8(<sym generics>);
    goto L30(i15, r89);
  L206():
    dr14 = tryDispatchBuiltin.1("[", impnames9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L208() else L207(dr14);
  L207(impnames11):
    delete6 = ld delete;
    check L209() else D76();
  L233():
    genNs = ld genNs;
    check L235() else D86();
  L234():
    r139 = dyn base13(<sym genNs>, <lang genericPackage(genImp)>);
    goto L50(i55, r139);
  L261():
    p42 = prom<V +>{
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      return n9;
    };
    p43 = prom<V +>{
      ns15 = ld ns;
      ns16 = force? ns15;
      checkMissing(ns16);
      return ns16;
    };
    r164 = dyn get1(p42, p43);
    check L262() else D100();
  L267():
    p44 = prom<V +>{
      self19 = ld self;
      self20 = force? self19;
      checkMissing(self20);
      return self20;
    };
    r168 = dyn isNamespace1(p44);
    check L268() else D103();
  D58():
    deopt 203 [i9, i16];
  D76():
    deopt 273 [impnames11, delete6];
  D86():
    deopt 314 [i55, genNs];
  D100():
    deopt 378 [i75, r164];
  D103():
    deopt 395 [i78, r168];
  L31():
    goto L28(i20);
  L51():
    environmentName = ldf environmentName;
    check L242() else D90();
  L171():
    i17 = force? i16;
    checkMissing(i17);
    c17 = ldf c in base;
    r88 = dyn c17(delete1, i17);
    check L172() else D59();
  L175():
    generics1 = ld generics;
    check L176() else D60();
  L208():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L40(dx15);
  L209():
    delete7 = force? delete6;
    checkMissing(delete7);
    r120 = `-`(<missing>, delete7);
    __8 = ldf `[` in base;
    r121 = dyn __8(impnames11, r120);
    goto L40(r121);
  L235():
    genNs1 = force? genNs;
    checkMissing(genNs1);
    genericPackage1 = ldf genericPackage;
    check L236() else D87();
  L239():
    goto L43(i61);
  L262():
    identical2 = ldf identical in base;
    r165 = dyn identical2(genImp5, r164, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L263() else D101();
  L268():
    c46 = `as.logical`(r168);
    if c46 then L269() else L61(i78, c46);
  D59():
    deopt 206 [i9, r88];
  D60():
    deopt 212 [i20, generics1];
  D87():
    deopt 317 [i55];
  D90():
    deopt 334 [i61];
  D101():
    deopt 387 [i75, r165];
  L61(i84, c48):
    c52 = `as.logical`(c48);
    if c52 then L273() else L62();
  L172():
    goto L29(i9, r88);
  L176():
    generics2 = force? generics1;
    checkMissing(generics2);
    c19 = `is.object`(generics2);
    if c19 then L177() else L178(i20, generics2);
  L236():
    p37 = prom<V +>{
      genImp = ld genImp;
      genImp1 = force? genImp;
      checkMissing(genImp1);
      return genImp1;
    };
    r142 = dyn genericPackage1(p37);
    check L237() else D88();
  L242():
    p39 = prom<V +>{
      environment = ldf environment;
      p38 = prom<V +>{
        genImp2 = ld genImp;
        genImp3 = force? genImp2;
        checkMissing(genImp3);
        return genImp3;
      };
      r146 = dyn environment(p38);
      return r146;
    };
    r148 = dyn environmentName(p39);
    check L243() else D91();
  L263():
    goto L58(i75, r165);
  L269():
    isBaseNamespace1 = ldf isBaseNamespace;
    check L270() else D104();
  D88():
    deopt 319 [i55, r142];
  D91():
    deopt 336 [i61, r148];
  D104():
    deopt 397 [i78, c46];
  L32(i26, dx10):
    st genName = dx10;
    __5 = ldf `::`;
    check L181() else D62();
  L62():
    warning3 = ldf warning;
    check L302() else D121();
  L69(i105, r229):
    goto L70(i105);
  L177():
    dr8 = tryDispatchBuiltin.1("[[", generics2);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L179() else L178(i20, dr8);
  L178(i24, generics4):
    i27 = ld i;
    check L180() else D61();
  L237():
    identical = ldf identical in base;
    r143 = dyn identical(genNs1, r142, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L238() else D89();
  L243():
    st genImpenv = r148;
    sym14 = ldf identical;
    base14 = ldf identical in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L244() else L245();
  L270():
    p45 = prom<V +>{
      self21 = ld self;
      self22 = force? self21;
      checkMissing(self22);
      return self22;
    };
    r170 = dyn isBaseNamespace1(p45);
    check L271() else D105();
  L273():
    getNamespaceInfo = ldf getNamespaceInfo;
    check L274() else D106();
  D61():
    deopt 214 [i24, generics4, i27];
  D62():
    deopt 219 [i26];
  D89():
    deopt 328 [i55, r143];
  D105():
    deopt 399 [i78, c46, r170];
  D106():
    deopt 403 [i84];
  D121():
    deopt 460 [i84];
  L53(i68, r150):
    r152 = `!`(r150);
    c38 = `as.logical`(r152);
    if c38 then L54(i68, c38) else L249();
  L179():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L32(i20, dx9);
  L180():
    i28 = force? i27;
    __4 = ldf `[[` in base;
    r93 = dyn __4(generics4, i28);
    goto L32(i24, r93);
  L181():
    r94 = dyn __5("methods", "getGeneric");
    check L182() else D63();
  L238():
    goto L50(i55, r143);
  L244():
    genNs2 = ld genNs;
    check L246() else D92();
  L245():
    r149 = dyn base14(<sym genNs>, <sym genImpenv>);
    goto L53(i61, r149);
  L271():
    r171 = `!`(r170);
    c49 = `as.logical`(r171);
    c50 = `&&`(c46, c49);
    goto L61(i78, c50);
  L274():
    p46 = prom<V +>{
      self23 = ld self;
      self24 = force? self23;
      checkMissing(self24);
      return self24;
    };
    r173 = dyn getNamespaceInfo(p46, "imports");
    check L275() else D107();
  L302():
    p80 = prom<V +>{
      sprintf2 = ldf sprintf;
      p73 = prom<V +>{
        msg2 = ld msg;
        msg3 = force? msg2;
        checkMissing(msg3);
        return msg3;
      };
      p77 = prom<V +>{
        sQuote7 = ldf sQuote;
        p76 = prom<V +>{
          paste4 = ldf paste;
          p74 = prom<V +>{
            nsname4 = ld nsname;
            nsname5 = force? nsname4;
            checkMissing(nsname5);
            return nsname5;
          };
          p75 = prom<V +>{
            n18 = ld n;
            n19 = force? n18;
            checkMissing(n19);
            return n19;
          };
          r233 = dyn paste4[, , sep](p74, p75, "::");
          return r233;
        };
        r235 = dyn sQuote7(p76);
        return r235;
      };
      p79 = prom<V +>{
        sQuote8 = ldf sQuote;
        p78 = prom<V +>{
          from5 = ld from;
          from6 = force? from5;
          checkMissing(from6);
          return from6;
        };
        r238 = dyn sQuote8(p78);
        return r238;
      };
      r240 = dyn sprintf2(p73, p77, p79);
      return r240;
    };
    r242 = dyn warning3[, `call.`, domain](p80, FALSE, NA_LGL);
    check L303() else D122();
  D63():
    deopt 222 [i26, r94];
  D92():
    deopt 340 [i61, genNs2];
  D107():
    deopt 406 [i84, r173];
  D122():
    deopt 466 [i84, r242];
  L54(i69, c39):
    c44 = `as.logical`(c39);
    if c44 then L254() else L55();
  L182():
    checkFun.0(r94);
    r95 = r94 as cls;
    p24 = prom<V +>{
      genName = ld genName;
      genName1 = force? genName;
      checkMissing(genName1);
      return genName1;
    };
    p25 = prom<V +>{
      impenv2 = ld impenv;
      impenv3 = force? impenv2;
      checkMissing(impenv3);
      return impenv3;
    };
    p26 = prom<V +>{
      packages1 = ld packages;
      packages2 = force? packages1;
      checkMissing(packages2);
      c20 = `is.object`(packages2);
      if c20 then L1() else L2(packages2);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", packages2);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(packages4):
      i29 = ld i;
      i30 = force? i29;
      __6 = ldf `[[` in base;
      r98 = dyn __6(packages4, i30);
      goto L0(r98);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    r100 = dyn r95[, where, package](p24, p25, p26);
    check L183() else D64();
  L246():
    genNs3 = force? genNs2;
    checkMissing(genNs3);
    genImpenv = ld genImpenv;
    check L247() else D93();
  L249():
    __11 = ldf `::`;
    check L250() else D95();
  L275():
    st current = r173;
    lapply = ldf lapply;
    check L276() else D108();
  L303():
    goto L69(i84, r242);
  D64():
    deopt 229 [i26, r100];
  D93():
    deopt 342 [i61, genImpenv];
  D95():
    deopt 355 [i68, c38];
  D108():
    deopt 409 [i84];
  L55():
    goto L43(i69);
  L183():
    st fdef = r100;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L184() else L185();
  L247():
    genImpenv1 = force? genImpenv;
    checkMissing(genImpenv1);
    identical1 = ldf identical in base;
    r151 = dyn identical1(genNs3, genImpenv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L248() else D94();
  L250():
    r153 = dyn __11("methods", "isGeneric");
    check L251() else D96();
  L254():
    goto L57(i69);
  L276():
    p48 = prom<V +>{
      rev = ldf rev;
      p47 = prom<V +>{
        current = ld current;
        current1 = force? current;
        checkMissing(current1);
        return current1;
      };
      r175 = dyn rev(p47);
      return r175;
    };
    p49 = prom<V +>{
      __12 = ld `[`;
      __13 = force? __12;
      checkMissing(__13);
      return __13;
    };
    p50 = prom<V +>{
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      return n11;
    };
    r179 = dyn lapply(p48, p49, p50);
    check L277() else D109();
  D94():
    deopt 352 [i61, r151];
  D96():
    deopt 358 [i68, c38, r153];
  D109():
    deopt 413 [i84, r179];
  L33(i33, r102):
    c22 = `as.logical`(r102);
    if c22 then L187() else L34();
  L184():
    fdef = ld fdef;
    check L186() else D65();
  L185():
    r101 = dyn base9(<sym fdef>);
    goto L33(i26, r101);
  L248():
    goto L53(i61, r151);
  L251():
    checkFun.0(r153);
    r154 = r153 as cls;
    p40 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      return n7;
    };
    p41 = prom<V +>{
      impenv8 = ld impenv;
      impenv9 = force? impenv8;
      checkMissing(impenv9);
      return impenv9;
    };
    r157 = dyn r154(p40, p41);
    check L252() else D97();
  L277():
    st poss = r179;
    poss = ld poss;
    check L278() else D110();
  D65():
    deopt 232 [i26, fdef];
  D97():
    deopt 362 [i68, c38, r157];
  D110():
    deopt 415 [i84, poss];
  L34():
    ___ = ldf `:::`;
    check L191() else D68();
  L35(i36, r109):
    goto L28(i36);
  L186():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c21 = `==`(fdef1, NULL);
    goto L33(i26, c21);
  L187():
    warning = ldf warning;
    check L188() else D66();
  L252():
    c41 = `as.logical`(r157);
    c42 = `||`(c38, c41);
    goto L54(i68, c42);
  L278():
    poss1 = force? poss;
    checkMissing(poss1);
    c53 = `is.object`(poss1);
    if c53 then L279() else L280(i84, poss1);
  D66():
    deopt 236 [i33];
  D68():
    deopt 244 [i33];
  L63(i91, dx22):
    st poss = dx22;
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L284() else L285();
  L188():
    p29 = prom<V +>{
      gettextf1 = ldf gettextf;
      p28 = prom<V +>{
        sQuote1 = ldf sQuote;
        p27 = prom<V +>{
          genName2 = ld genName;
          genName3 = force? genName2;
          checkMissing(genName3);
          return genName3;
        };
        r104 = dyn sQuote1(p27);
        return r104;
      };
      r106 = dyn gettextf1("found methods to import for function %s but not the generic itself", p28);
      return r106;
    };
    r108 = dyn warning[, `call.`, domain](p29, FALSE, NA_LGL);
    check L189() else D67();
  L191():
    r110 = dyn ___("methods", ".updateMethodsInTable");
    check L192() else D69();
  L279():
    dr18 = tryDispatchBuiltin.1("[", poss1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L281() else L280(i84, dr18);
  L280(i89, poss3):
    sapply = ldf sapply;
    check L282() else D111();
  D67():
    deopt 242 [i33, r108];
  D69():
    deopt 247 [i33, r110];
  D111():
    deopt 418 [i89, poss3];
  L64(i94, r186):
    r188 = `>=`(r186, 1);
    c54 = `as.logical`(r188);
    if c54 then L288() else L65();
  L189():
    goto L35(i33, r108);
  L192():
    checkFun.0(r110);
    r111 = r110 as cls;
    p30 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    p31 = prom<V +>{
      ns9 = ld ns;
      ns10 = force? ns9;
      checkMissing(ns10);
      return ns10;
    };
    r114 = dyn r111(p30, p31, TRUE);
    check L193() else D70();
  L281():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L63(i84, dx21);
  L282():
    p51 = prom<V +>{
      poss4 = ld poss;
      poss5 = force? poss4;
      checkMissing(poss5);
      return poss5;
    };
    p52 = prom<V +>{
      is_na = ld `is.na`;
      is_na1 = force? is_na;
      checkMissing(is_na1);
      return is_na1;
    };
    r182 = dyn sapply(p51, p52);
    check L283() else D112();
  L284():
    poss6 = ld poss;
    check L286() else D113();
  L285():
    r185 = dyn base16(<sym poss>);
    goto L64(i91, r185);
  D70():
    deopt 252 [i33, r114];
  D112():
    deopt 421 [i89, poss3, r182];
  D113():
    deopt 427 [i91, poss6];
  L65():
    warning2 = ldf warning;
    check L299() else D119();
  L68(i104, r215):
    goto L69(i104, r215);
  L193():
    goto L35(i33, r114);
  L283():
    r183 = `!`(r182);
    __14 = ldf `[` in base;
    r184 = dyn __14(poss3, r183);
    goto L63(i89, r184);
  L286():
    poss7 = force? poss6;
    checkMissing(poss7);
    length2 = ldf length in base;
    r187 = dyn length2(poss7);
    check L287() else D114();
  L288():
    sym17 = ldf names;
    base17 = ldf names in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L289() else L290();
  D114():
    deopt 430 [i91, r187];
  D119():
    deopt 452 [i94];
  L66(i99, r190):
    c55 = `is.object`(r190);
    if c55 then L293() else L294(i99, r190);
  L287():
    goto L64(i91, r187);
  L289():
    poss8 = ld poss;
    check L291() else D115();
  L290():
    r189 = dyn base17(<sym poss>);
    goto L66(i94, r189);
  L299():
    p72 = prom<V +>{
      sprintf1 = ldf sprintf;
      p65 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      p69 = prom<V +>{
        sQuote5 = ldf sQuote;
        p68 = prom<V +>{
          paste3 = ldf paste;
          p66 = prom<V +>{
            nsname2 = ld nsname;
            nsname3 = force? nsname2;
            checkMissing(nsname3);
            return nsname3;
          };
          p67 = prom<V +>{
            n16 = ld n;
            n17 = force? n16;
            checkMissing(n17);
            return n17;
          };
          r219 = dyn paste3[, , sep](p66, p67, "::");
          return r219;
        };
        r221 = dyn sQuote5(p68);
        return r221;
      };
      p71 = prom<V +>{
        sQuote6 = ldf sQuote;
        p70 = prom<V +>{
          from3 = ld from;
          from4 = force? from3;
          checkMissing(from4);
          return from4;
        };
        r224 = dyn sQuote6(p70);
        return r224;
      };
      r226 = dyn sprintf1(p65, p69, p71);
      return r226;
    };
    r228 = dyn warning2[, `call.`, domain](p72, FALSE, NA_LGL);
    check L300() else D120();
  D115():
    deopt 435 [i94, poss8];
  D120():
    deopt 458 [i94, r228];
  L67(i103, dx24):
    st prev = dx24;
    warning1 = ldf warning;
    check L296() else D117();
  L291():
    poss9 = force? poss8;
    checkMissing(poss9);
    names1 = ldf names in base;
    r191 = dyn names1(poss9);
    check L292() else D116();
  L293():
    dr20 = tryDispatchBuiltin.1("[", r190);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L295() else L294(i99, dr20);
  L294(i101, r193):
    __15 = ldf `[` in base;
    r194 = dyn __15(r193, 1);
    goto L67(i101, r194);
  L300():
    goto L68(i94, r228);
  D116():
    deopt 438 [i94, r191];
  D117():
    deopt 444 [i103];
  L292():
    goto L66(i94, r191);
  L295():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L67(i99, dx23);
  L296():
    p64 = prom<V +>{
      sprintf = ldf sprintf;
      p53 = prom<V +>{
        gettext3 = ldf gettext;
        r195 = dyn gettext3("replacing previous import %s by %s when loading %s");
        return r195;
      };
      p57 = prom<V +>{
        sQuote2 = ldf sQuote;
        p56 = prom<V +>{
          paste1 = ldf paste;
          p54 = prom<V +>{
            prev = ld prev;
            prev1 = force? prev;
            checkMissing(prev1);
            return prev1;
          };
          p55 = prom<V +>{
            n12 = ld n;
            n13 = force? n12;
            checkMissing(n13);
            return n13;
          };
          r199 = dyn paste1[, , sep](p54, p55, "::");
          return r199;
        };
        r201 = dyn sQuote2(p56);
        return r201;
      };
      p61 = prom<V +>{
        sQuote3 = ldf sQuote;
        p60 = prom<V +>{
          paste2 = ldf paste;
          p58 = prom<V +>{
            nsname = ld nsname;
            nsname1 = force? nsname;
            checkMissing(nsname1);
            return nsname1;
          };
          p59 = prom<V +>{
            n14 = ld n;
            n15 = force? n14;
            checkMissing(n15);
            return n15;
          };
          r205 = dyn paste2[, , sep](p58, p59, "::");
          return r205;
        };
        r207 = dyn sQuote3(p60);
        return r207;
      };
      p63 = prom<V +>{
        sQuote4 = ldf sQuote;
        p62 = prom<V +>{
          from1 = ld from;
          from2 = force? from1;
          checkMissing(from2);
          return from2;
        };
        r210 = dyn sQuote4(p62);
        return r210;
      };
      r212 = dyn sprintf(p53, p57, p61, p63);
      return r212;
    };
    r214 = dyn warning1[, `call.`, domain](p64, FALSE, NA_LGL);
    check L297() else D118();
  D118():
    deopt 450 [i103, r214];
  L297():
    goto L68(i103, r214);
  }
}
fun inner1827219324(ns, from, what) {
  (reg ns:*, reg from:*, reg what:*) -+> V { var ns:*, var from:*, var what:*, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg what1:*, reg what2:V, reg list:cls, reg r2:V, reg p:p(V +), reg getNamespaceName:cls, reg from1:*, reg from2:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg getNamespaceImports:cls, reg ns1:*, reg ns2:V, reg p3:p(V +), reg r9:V, reg setNamespaceInfo:cls, reg ns3:*, reg ns4:V, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg imports:*, reg imports1:V, reg imp:*, reg imp1:V, reg c:cls, reg r13:V, reg p5:p(V +), reg r15:V |
    mkenv;
    st ns = ns;
    st from = from;
    st what = what;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      list = ldf list in base;
      r2 = dyn list(what2);
      goto L0(r2);
    L2():
      r = dyn base(<sym what>);
      goto L0(r);
    };
    p2 = prom<V +>{
      getNamespaceName = ldf getNamespaceName;
      p1 = prom<V +>{
        from1 = ld from;
        from2 = force? from1;
        checkMissing(from2);
        return from2;
      };
      r5 = dyn getNamespaceName(p1);
      return r5;
    };
    r7 = dyn structure[, names](p, p2);
    check L1() else D1();
  D1():
    deopt 5 [r7];
  L1():
    st imp = r7;
    getNamespaceImports = ldf getNamespaceImports;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p3 = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r9 = dyn getNamespaceImports(p3);
    check L3() else D3();
  D3():
    deopt 10 [r9];
  L3():
    st imports = r9;
    setNamespaceInfo = ldf setNamespaceInfo;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p4 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      imports = ld imports;
      imports1 = force? imports;
      checkMissing(imports1);
      imp = ld imp;
      imp1 = force? imp;
      checkMissing(imp1);
      c = ldf c in base;
      r13 = dyn c(imports1, imp1);
      goto L0(r13);
    L2():
      r11 = dyn base1(<sym imports>, <sym imp>);
      goto L0(r11);
    };
    r15 = dyn setNamespaceInfo(p4, "imports", p5);
    check L5() else D5();
  D5():
    deopt 17 [r15];
  L5():
    popenv;
    return r15;
  }
}
fun inner162799014(ns) {
  (reg ns:*) -+> V { var ns:*, reg environmentIsLocked:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st ns = ns;
    environmentIsLocked = ldf environmentIsLocked;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r1 = dyn environmentIsLocked(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner1392743580(spec) {
  (reg spec:*) -+> V { var spec:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg spec1:*, reg spec2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg spec3:*, reg spec4:V, reg names:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg new:*, reg new1:V, reg c:V, reg c1:L, reg old:*, reg old1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg new2:*, reg new3:V, reg nzchar:cls, reg r10:V, reg r11:V, reg old3:*, reg old4:V, reg c2:L, reg old6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg change:*, reg change1:V, reg __:cls, reg r12:V, reg l:*, reg c3:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg change2:*, reg change3:V, reg ___:cls, reg r13:V, reg new4:*, reg new5:V, reg l3:*, reg names__:cls, reg r14:V, reg old7:*, reg old8:V |
    mkenv;
    st spec = spec;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st old = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L8():
    spec1 = ld spec;
    check L10() else D0();
  L9():
    r = dyn base(<sym spec>);
    goto L0(r);
  D0():
    deopt 2 [spec1];
  L1(r4):
    st new = r4;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L10():
    spec2 = force? spec1;
    checkMissing(spec2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(spec2);
    check L11() else D1();
  L12():
    spec3 = ld spec;
    check L14() else D2();
  L13():
    r3 = dyn base1(<sym spec>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [spec3];
  L2(r7):
    c1 = `as.logical`(r7);
    if c1 then L19() else L3();
  L11():
    goto L0(r2);
  L14():
    spec4 = force? spec3;
    checkMissing(spec4);
    names = ldf names in base;
    r5 = dyn names(spec4);
    check L15() else D3();
  L16():
    new = ld new;
    check L18() else D4();
  L17():
    r6 = dyn base2(<sym new>);
    goto L2(r6);
  D3():
    deopt 12 [r5];
  D4():
    deopt 15 [new];
  L3():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L4():
    new4 = ld new;
    check L35() else D11();
  L15():
    goto L1(r5);
  L18():
    new1 = force? new;
    checkMissing(new1);
    c = `==`(new1, NULL);
    goto L2(c);
  L19():
    old = ld old;
    check L20() else D5();
  D5():
    deopt 18 [old];
  D11():
    deopt 39 [new4];
  L5(r9):
    r11 = `!`(r9);
    st change = r11;
    old3 = ld old;
    check L26() else D8();
  L20():
    old1 = force? old;
    checkMissing(old1);
    st new = old1;
    goto L4();
  L22():
    new2 = ld new;
    check L24() else D6();
  L23():
    r8 = dyn base3(<sym new>);
    goto L5(r8);
  L35():
    new5 = force? new4;
    checkMissing(new5);
    l3 = ld old;
    names__ = ldf `names<-`;
    check L36() else D12();
  D6():
    deopt 23 [new2];
  D8():
    deopt 29 [old3];
  D12():
    deopt 42 [new5, l3, new5];
  L24():
    new3 = force? new2;
    checkMissing(new3);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(new3);
    check L25() else D7();
  L26():
    old4 = force? old3;
    checkMissing(old4);
    c2 = `is.object`(old4);
    if c2 then L27() else L28(old4);
  L36():
    r14 = dyn names__(l3, NULL, new5);
    check L37() else D13();
  D7():
    deopt 26 [r10];
  D13():
    deopt 44 [new5, r14];
  L6(dx1):
    l = ld new;
    c3 = `is.object`(l);
    if c3 then L31() else L32(dx1, l);
  L25():
    goto L5(r10);
  L27():
    dr = tryDispatchBuiltin.1("[", old4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(old6):
    change = ld change;
    check L30() else D9();
  L37():
    st old = r14;
    old7 = ld old;
    check L38() else D14();
  D9():
    deopt 31 [old6, change];
  D14():
    deopt 46 [old7];
  L7(dx6, dx7):
    st new = dx7;
    goto L4();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L30():
    change1 = force? change;
    __ = ldf `[` in base;
    r12 = dyn __(old6, change1);
    goto L6(r12);
  L31():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(dx1, dr2);
  L32(dx3, l2):
    change2 = ld change;
    check L34() else D10();
  L38():
    old8 = force? old7;
    checkMissing(old8);
    popenv;
    return old8;
  D10():
    deopt 35 [dx3, l2, dx1, change2];
  L33():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx1, dx5);
  L34():
    change3 = force? change2;
    ___ = ldf `[<-` in base;
    r13 = dyn ___(l2, dx1, change3);
    goto L7(dx3, r13);
  }
}
fun `inner-1309275147`(impvars) {
  (reg impvars:*) -+> V { var impvars:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _isMethodsDispatchOn:cls, reg r2:V, reg r3:V, reg c:L, reg numeric:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg impvars1:*, reg impvars2:V, reg r9:I, reg c1:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg startsWith:cls, reg impvars3:*, reg impvars4:V, reg p:p(V +), reg r13:V, reg __:cls, reg r14:V |
    mkenv;
    st impvars = impvars;
    sym = ldf `.isMethodsDispatchOn`;
    base = ldf `.isMethodsDispatchOn` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  L5():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r2 = dyn _isMethodsDispatchOn();
    check L7() else D0();
  L6():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1():
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L7():
    goto L0(r2);
  L8():
    numeric = ldf numeric;
    check L9() else D1();
  D1():
    deopt 6 [];
  L3(r8):
    c1 = `is.object`(r8);
    if c1 then L16() else L17(r8);
  L9():
    r4 = dyn numeric();
    check L10() else D2();
  L13():
    impvars1 = ld impvars;
    check L15() else D3();
  L14():
    r7 = dyn base1(<sym impvars>);
    goto L3(r7);
  D2():
    deopt 7 [r4];
  D3():
    deopt 12 [impvars1];
  L4(dx1):
    popenv;
    return dx1;
  L10():
    popenv;
    return r4;
  L15():
    impvars2 = force? impvars1;
    checkMissing(impvars2);
    r9 = seq_along(impvars2);
    goto L3(r9);
  L16():
    dr = tryDispatchBuiltin.1("[", r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(r11):
    startsWith = ldf startsWith;
    check L19() else D4();
  D4():
    deopt 16 [r11];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L19():
    p = prom<V +>{
      impvars3 = ld impvars;
      impvars4 = force? impvars3;
      checkMissing(impvars4);
      return impvars4;
    };
    r13 = dyn startsWith(p, ".__T__");
    check L20() else D5();
  D5():
    deopt 19 [r11, r13];
  L20():
    __ = ldf `[` in base;
    r14 = dyn __(r11, r13);
    goto L4(r14);
  }
}
fun `inner-763109789`(f) {
  (reg f:*) -+> V { var f:*, reg __:cls, reg r:V, reg r1:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r3:V, reg c:L, reg __1:cls, reg r4:V, reg is_primitive:cls, reg f3:*, reg f4:V, reg p1:p(V +), reg r6:V, reg c1:L |
    mkenv;
    st f = f;
    __ = ldf `::`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn __("methods", "is");
    check L3() else D1();
  D1():
    deopt 4 [r];
  L3():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r3 = dyn r1(p, "genericFunction");
    check L4() else D2();
  D2():
    deopt 8 [r3];
  L4():
    c = `as.logical`(r3);
    if c then L5() else L0();
  L0():
    is_primitive = ldf `is.primitive`;
    check L7() else D3();
  L5():
    __1 = ldf `@` in base;
    r4 = dyn __1(<sym f>, <sym package>);
    popenv;
    return r4;
  D3():
    deopt 12 [];
  L7():
    p1 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r6 = dyn is_primitive(p1);
    check L8() else D4();
  D4():
    deopt 14 [r6];
  L8():
    c1 = `as.logical`(r6);
    if c1 then L9() else L1();
  L1():
    popenv;
    return "<unknown>";
  L9():
    popenv;
    return "base";
  }
}