fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2203023022;
    st `smooth.spline` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2203023022(x, y, w, df, spar, lambda, cv, `all.knots`, nknots, `keep.data`, `df.offset`, penalty, `control.spar`, tol, `keep.stuff`) {
  (reg x:*, reg y:*, reg w:*, reg df:*, reg spar:*, reg lambda:*, reg cv:*, reg all_knots:*, reg nknots:*, reg keep_data:*, reg df_offset:*, reg penalty:*, reg control_spar:*, reg tol:*, reg keep_stuff:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var w:*, reg w_isMissing:L, reg w_orDefault:*, var df:*, var spar:*, reg spar_isMissing:L, reg spar_orDefault:*, var lambda:*, reg lambda_isMissing:L, reg lambda_orDefault:*, var cv:*, reg cv_isMissing:L, reg cv_orDefault:*, var `all.knots`:*, reg all_knots_isMissing:L, reg all_knots_orDefault:*, var nknots:*, reg nknots_isMissing:L, reg nknots_orDefault:*, reg _nknots_smspl:*, reg _nknots_smspl1:V, reg p:p(V +), var `keep.data`:*, reg keep_data_isMissing:L, reg keep_data_orDefault:*, var `df.offset`:*, reg df_offset_isMissing:L, reg df_offset_orDefault:*, var penalty:*, reg penalty_isMissing:L, reg penalty_orDefault:*, var `control.spar`:*, reg control_spar_isMissing:L, reg control_spar_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg r3:V, reg p1:p(V +), var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg IQR:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r6:V, reg r7:V, reg p3:p(V +), var `keep.stuff`:*, reg keep_stuff_isMissing:L, reg keep_stuff_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg getOption:cls, reg r11:V, reg list1:cls, reg r12:V, reg control_spar1:*, reg control_spar2:V, reg l:*, reg c:L, reg control_spar4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg control_spar11:V, reg l5:*, reg control_spar12:V, reg r14:V, reg control_spar13:*, reg control_spar14:V, reg names:cls, reg r15:V, reg ___:cls, reg r16:V, reg contr_sp:*, reg contr_sp1:V, reg c1:L, reg contr_sp3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg vapply:cls, reg ctrl_Num:*, reg ctrl_Num1:V, reg p4:p(V +), reg is_numeric:*, reg is_numeric1:V, reg p5:p(V +), reg r22:V, reg all:cls, reg r23:V, reg r24:V, reg c2:L, reg c3:V, reg contr_sp4:*, reg contr_sp5:V, reg c5:L, reg c7:L, reg contr_sp7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c9:L, reg dx5:V, reg r25:V, reg r26:V, reg c10:L, reg c11:V, reg c13:L, reg c14:V, reg contr_sp8:*, reg contr_sp9:V, reg c16:L, reg c18:L, reg contr_sp11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c20:L, reg dx7:V, reg r27:V, reg r28:V, reg c21:L, reg c22:V, reg c24:L, reg c25:V, reg contr_sp12:*, reg contr_sp13:V, reg c27:L, reg c29:L, reg contr_sp15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c31:L, reg dx9:V, reg r29:V, reg r30:V, reg c32:L, reg c33:V, reg c35:L, reg stop:cls, reg r31:V, reg xy_coords:cls, reg x3:*, reg x4:V, reg p6:p(V +), reg y1:*, reg y2:V, reg p7:p(V +), reg r35:V, reg xy:*, reg xy1:V, reg c36:L, reg xy3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r36:V, reg xy4:*, reg xy5:V, reg c37:L, reg xy7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg x5:*, reg x6:V, reg y3:*, reg y4:V, reg c38:cls, reg r44:V, reg is_finite:cls, reg r45:V, reg all1:cls, reg r46:V, reg r47:V, reg c39:L, reg stop1:cls, reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg x7:*, reg x8:V, reg length:cls, reg r52:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg n:*, reg n1:V, reg is_na:cls, reg r55:V, reg c40:L, reg stop2:cls, reg r56:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg w1:*, reg w2:V, reg c41:V, reg no_wgts:*, reg no_wgts1:V, reg c42:L, reg r60:V, reg n2:*, reg n3:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg n6:V, reg r62:V, reg w3:*, reg w4:V, reg length1:cls, reg r63:V, reg r64:V, reg c43:L, reg stop3:cls, reg r65:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg w5:*, reg w6:V, reg r69:V, reg any:cls, reg r70:V, reg c44:L, reg stop4:cls, reg r71:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r73:V, reg r74:V, reg w7:*, reg w8:V, reg r75:V, reg all2:cls, reg r76:V, reg c45:L, reg stop5:cls, reg r77:V, reg w9:*, reg w10:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg w13:V, reg r80:V, reg w14:*, reg w15:V, reg r81:V, reg sum:cls, reg r82:V, reg r83:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r86:V, reg r87:V, reg r88:V, reg w16:*, reg w17:V, reg sum1:cls, reg r89:V, reg r90:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r91:V, reg r92:V, reg tol1:*, reg tol2:V, reg is_finite1:cls, reg r93:V, reg r94:V, reg c46:L, reg c47:V, reg tol3:*, reg tol4:V, reg r95:V, reg c49:L, reg c50:V, reg c52:L, reg stop6:cls, reg r96:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r98:V, reg r99:V, reg keep_stuff1:*, reg keep_stuff2:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r100:V, reg r101:V, reg c53:cls, reg r102:V, reg match:cls, reg r103:V, reg r104:V, reg c54:L, reg stop7:cls, reg r105:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r107:V, reg r108:V, reg round:cls, reg r109:V, reg is_unsorted:cls, reg x9:*, reg x10:V, reg p8:p(V +), reg r111:V, reg uns_x:*, reg uns_x1:V, reg c55:L, reg sort_list:cls, reg x11:*, reg x12:V, reg p9:p(V +), reg r113:V, reg r114:V, reg xx:*, reg xx1:V, reg c56:L, reg xx3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg iOx:*, reg iOx1:V, reg __1:cls, reg r115:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r116:V, reg r117:V, reg xxs:*, reg xxs1:V, reg c57:L, reg xxs3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg n7:*, reg n8:V, reg r118:V, reg __2:cls, reg r119:V, reg xxs4:*, reg xxs5:V, reg c58:L, reg dx19:V, reg xxs7:V, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg dx23:V, reg __3:cls, reg r120:V, reg r121:V, reg c59:cls, reg r122:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r123:V, reg r124:V, reg x13:*, reg x14:V, reg c60:L, reg x16:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg iOx2:*, reg iOx3:V, reg __4:cls, reg r125:V, reg c61:L, reg dx27:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg nd:*, reg nd1:V, reg __5:cls, reg r126:V, reg length2:cls, reg r127:V, reg nx:*, reg nx1:V, reg r128:V, reg c62:L, reg stop8:cls, reg r129:V, reg nx2:*, reg nx3:V, reg n9:*, reg n10:V, reg r131:V, reg c63:L, reg uns_x2:*, reg uns_x3:V, reg c64:L, reg r132:cls, reg r133:cls, reg iOx4:*, reg iOx5:V, reg p10:p(V +), reg r135:V, reg r136:V, reg cbind:cls, reg w18:*, reg w19:V, reg p11:p(V +), reg w20:*, reg w21:V, reg y5:*, reg y6:V, reg r138:V, reg p12:p(V +), reg w22:*, reg w23:V, reg y7:*, reg y8:V, reg r140:V, reg r141:V, reg p13:p(V +), reg r143:V, reg c65:L, reg r145:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg iOx6:*, reg iOx7:V, reg __6:cls, reg r146:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r147:V, reg r148:V, reg xx4:*, reg xx5:V, reg xxs8:*, reg xxs9:V, reg c66:L, reg xxs11:V, reg dr26:V, reg dc13:L, reg dx33:V, reg dx34:V, reg nd2:*, reg nd3:V, reg __7:cls, reg r149:V, reg match1:cls, reg r150:V, reg r151:cls, reg matrix:cls, reg unlist:cls, reg tapply1:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r152:V, reg r153:V, reg n11:*, reg n12:V, reg r154:I, reg p14:p(V +), reg ox:*, reg ox1:V, reg p15:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r157:V, reg r158:V, reg w24:*, reg w25:V, reg length3:cls, reg r159:V, reg r160:V, reg c67:L, reg r161:cls, reg r162:cls, reg p16:p(V +), reg r164:V, reg p17:p(V +), reg r166:V, reg p18:p(V +), reg r168:V, reg tmp:*, reg tmp1:V, reg c68:L, reg dr28:V, reg dc14:L, reg dx35:V, reg dx36:V, reg __8:cls, reg r169:V, reg tmp4:*, reg tmp5:V, reg c69:L, reg dr30:V, reg dc15:L, reg dx37:V, reg dx38:V, reg __9:cls, reg r170:V, reg ifelse:cls, reg wbar:*, reg wbar1:V, reg r171:V, reg p19:p(V +), reg wbar2:*, reg wbar3:V, reg p20:p(V +), reg r174:V, reg r175:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r176:V, reg r177:V, reg tmp8:*, reg tmp9:V, reg c70:L, reg dr32:V, reg dc16:L, reg dx39:V, reg dx40:V, reg __10:cls, reg r178:V, reg wbar4:*, reg wbar5:V, reg ybar:*, reg ybar1:V, reg r179:V, reg r180:V, reg r181:V, reg sum2:cls, reg r182:V, reg rm:cls, reg iOx8:*, reg iOx9:V, reg p21:p(V +), reg xx6:*, reg xx7:V, reg p22:p(V +), reg xxs12:*, reg xxs13:V, reg p23:p(V +), reg nd4:*, reg nd5:V, reg p24:p(V +), reg tmp12:*, reg tmp13:V, reg p25:p(V +), reg r188:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r189:V, reg r190:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r191:V, reg r192:V, reg cv1:*, reg cv2:V, reg as_logical:cls, reg r193:V, reg is_na1:cls, reg r194:V, reg c71:L, reg c73:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r195:V, reg c76:L, reg r196:V, reg missing:cls, reg r197:V, reg r198:V, reg c77:L, reg c78:V, reg c80:L, reg stop9:cls, reg r199:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r201:V, reg r202:V, reg cv3:*, reg cv4:V, reg is_na2:cls, reg r203:V, reg r204:V, reg c81:L, reg c83:V, reg cv5:*, reg cv6:V, reg c84:L, reg c85:V, reg CV:*, reg CV1:V, reg c87:L, reg c89:V, reg nx4:*, reg nx5:V, reg n13:*, reg n14:V, reg r205:V, reg c90:L, reg c91:V, reg c93:L, reg warning:cls, reg r206:V, reg ux:*, reg ux1:V, reg c94:L, reg ux3:V, reg dr34:V, reg dc17:L, reg dx41:V, reg dx42:V, reg nx6:*, reg nx7:V, reg __11:cls, reg r208:V, reg ux4:*, reg ux5:V, reg c95:L, reg dx44:V, reg ux7:V, reg dr36:V, reg dc18:L, reg dx46:V, reg dx47:V, reg dx48:V, reg __12:cls, reg r209:V, reg r210:V, reg ux8:*, reg ux9:V, reg ux10:*, reg ux11:V, reg c96:L, reg ux14:V, reg ux15:V, reg dr38:V, reg dc19:L, reg dx49:V, reg ux17:V, reg dx50:V, reg __13:cls, reg r211:V, reg r212:V, reg r_ux:*, reg r_ux1:V, reg r213:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r214:V, reg r215:V, reg all_knots1:*, reg all_knots2:V, reg is_numeric2:cls, reg r216:V, reg c97:L, reg is_unsorted1:cls, reg all_knots3:*, reg all_knots4:V, reg p26:p(V +), reg r218:V, reg c98:L, reg stop10:cls, reg r219:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r221:V, reg r222:V, reg missing1:cls, reg r223:V, reg r224:V, reg c99:L, reg c101:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r225:V, reg c104:L, reg r226:V, reg nknots1:*, reg nknots2:V, reg c105:V, reg r227:V, reg c106:L, reg c107:V, reg c109:L, reg warning1:cls, reg r228:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r230:V, reg r231:V, reg all_knots5:*, reg all_knots6:V, reg length4:cls, reg r232:V, reg all_knots7:*, reg all_knots8:V, reg c110:L, reg r234:R, reg all_knots10:V, reg dr40:V, reg dc20:L, reg dx51:V, reg r236:R, reg dx52:V, reg __14:cls, reg r237:V, reg r238:V, reg c111:L, reg c112:V, reg all_knots11:*, reg all_knots12:V, reg c114:L, reg c116:L, reg all_knots14:V, reg dr42:V, reg dc21:L, reg dx53:V, reg c118:L, reg dx54:V, reg nknots3:*, reg nknots4:V, reg __15:cls, reg r239:V, reg r240:V, reg c119:L, reg c120:V, reg c122:L, reg stop11:cls, reg r241:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r243:V, reg r244:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r245:V, reg r246:V, reg rep:cls, reg r247:V, reg all_knots15:*, reg all_knots16:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r248:V, reg r249:V, reg rep1:cls, reg r250:V, reg c123:cls, reg r251:V, reg all_knots17:*, reg all_knots18:V, reg c124:L, reg sym36:cls, reg base36:cls, reg guard36:L, reg r253:V, reg r254:V, reg missing2:cls, reg r255:V, reg r256:V, reg c125:L, reg c127:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r257:V, reg c130:L, reg r258:V, reg nknots5:*, reg nknots6:V, reg c131:V, reg r259:V, reg c132:L, reg c133:V, reg c135:L, reg warning2:cls, reg r260:V, reg nx8:*, reg nx9:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r262:V, reg r263:V, reg nknots7:*, reg nknots8:V, reg c136:V, reg c137:L, reg _nknots_smspl2:cls, reg nx11:*, reg nx12:V, reg p27:p(V +), reg r265:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r266:V, reg r267:V, reg nknots9:*, reg nknots10:V, reg is_function:cls, reg r268:V, reg c138:L, reg nknots11:cls, reg nx13:*, reg nx14:V, reg p28:p(V +), reg r270:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r272:V, reg r273:V, reg nknots12:*, reg nknots13:V, reg is_numeric3:cls, reg r274:V, reg r275:V, reg c139:L, reg stop12:cls, reg r276:V, reg nknots14:*, reg nknots15:V, reg r277:V, reg c140:L, reg stop13:cls, reg r278:V, reg nknots16:*, reg nknots17:V, reg nx15:*, reg nx16:V, reg r279:V, reg c141:L, reg stop14:cls, reg r280:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r281:V, reg r282:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r283:V, reg r284:V, reg rep2:cls, reg r285:V, reg all_knots19:*, reg all_knots20:V, reg c142:L, reg xbar:*, reg xbar1:V, reg xbar2:V, reg xbar3:*, reg xbar4:V, reg c143:L, reg xbar6:V, reg dr44:V, reg dc22:L, reg dx55:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r286:V, reg xbar9:V, reg r287:V, reg nx17:*, reg nx18:V, reg nknots18:*, reg nknots19:V, reg seq_int:cls, reg r288:V, reg __16:cls, reg r289:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r290:V, reg r291:V, reg rep3:cls, reg r292:V, reg c144:cls, reg r293:V, reg nknots20:*, reg nknots21:V, reg r294:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r295:V, reg r296:V, reg missing3:cls, reg r297:V, reg r298:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r299:V, reg r300:V, reg missing4:cls, reg r301:V, reg r302:V, reg c145:L, reg sym47:cls, reg base47:cls, reg guard47:L, reg r303:V, reg r304:V, reg missing5:cls, reg r305:V, reg r306:V, reg c146:L, reg stop15:cls, reg r307:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r310:V, reg r311:V, reg spar1:*, reg spar2:V, reg c147:V, reg c148:L, reg c149:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r312:V, reg c153:L, reg r313:V, reg missing6:cls, reg r314:V, reg c154:L, reg c155:V, reg c157:L, reg contr_sp16:*, reg contr_sp17:V, reg c158:L, reg contr_sp19:V, reg dr46:V, reg dc23:L, reg dx56:V, reg dx57:V, reg r315:V, reg c159:L, reg r316:I, reg r317:I, reg spar_is_lambda:*, reg spar_is_lambda1:V, reg c160:L, reg sym50:cls, reg base50:cls, reg guard50:L, reg r318:V, reg r319:V, reg lambda1:*, reg lambda2:V, reg as_double:cls, reg r320:V, reg r321:V, reg ispar:*, reg ispar1:V, reg r322:V, reg c161:L, reg sym51:cls, reg base51:cls, reg guard51:L, reg r323:V, reg r324:V, reg spar3:*, reg spar4:V, reg as_double1:cls, reg r325:V, reg double:cls, reg r326:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r327:V, reg r328:V, reg spar5:*, reg spar6:V, reg length5:cls, reg r329:V, reg r330:V, reg c162:L, reg stop16:cls, reg r331:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r333:V, reg r334:V, reg cv7:*, reg cv8:V, reg is_na3:cls, reg r335:V, reg c163:L, reg r336:I, reg cv9:*, reg cv10:V, reg c164:L, reg df_offset1:*, reg df_offset2:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r337:V, reg r338:V, reg missing7:cls, reg r339:V, reg r340:V, reg c165:L, reg df1:*, reg df2:V, reg r341:V, reg c166:L, reg c168:V, reg df3:*, reg df4:V, reg nx19:*, reg nx20:V, reg r342:V, reg c169:L, reg c170:V, reg c172:L, reg df5:*, reg df6:V, reg df7:V, reg warning3:cls, reg nx21:*, reg nx22:V, reg p29:p(V +), reg r344:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r345:V, reg r346:V, reg icrit:*, reg icrit1:V, reg ispar2:*, reg ispar3:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r347:V, reg r348:V, reg contr_sp20:*, reg contr_sp21:V, reg c173:L, reg contr_sp23:V, reg dr48:V, reg dc24:L, reg dx58:V, reg dx59:V, reg r349:V, reg as_integer:cls, reg r350:V, reg spar_is_lambda2:*, reg spar_is_lambda3:V, reg c174:cls, reg r351:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r352:V, reg r353:V, reg keep_stuff3:*, reg keep_stuff4:V, reg c175:L, reg r354:V, reg c176:cls, reg r355:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r356:V, reg r357:V, reg C_rbart:*, reg C_rbart1:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r358:V, reg r359:V, reg penalty1:*, reg penalty2:V, reg as_double2:cls, reg r360:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r361:V, reg r362:V, reg dofoff:*, reg dofoff1:V, reg as_double3:cls, reg r363:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r364:V, reg r365:V, reg xbar10:*, reg xbar11:V, reg as_double4:cls, reg r366:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r367:V, reg r368:V, reg ybar2:*, reg ybar3:V, reg as_double5:cls, reg r369:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r370:V, reg r371:V, reg wbar6:*, reg wbar7:V, reg as_double6:cls, reg r372:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r373:V, reg r374:V, reg yssw:*, reg yssw1:V, reg as_double7:cls, reg r375:V, reg sym65:cls, reg base65:cls, reg guard65:L, reg r376:V, reg r377:V, reg nx23:*, reg nx24:V, reg as_integer1:cls, reg r378:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r379:V, reg r380:V, reg knot:*, reg knot1:V, reg as_double8:cls, reg r381:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r382:V, reg r383:V, reg nk:*, reg nk1:V, reg as_integer2:cls, reg r384:V, reg double1:cls, reg nk2:*, reg nk3:V, reg p30:p(V +), reg r386:V, reg double2:cls, reg nx25:*, reg nx26:V, reg p31:p(V +), reg r388:V, reg double3:cls, reg sym68:cls, reg base68:cls, reg guard68:L, reg r389:V, reg r390:V, reg cv11:*, reg cv12:V, reg is_na4:cls, reg r391:V, reg c177:L, reg nx27:*, reg nx28:V, reg p32:p(V +), reg r393:V, reg double4:cls, reg r394:V, reg iparms:*, reg iparms1:V, reg spar7:*, reg spar8:V, reg sym69:cls, reg base69:cls, reg guard69:L, reg r395:V, reg r396:V, reg unlist1:cls, reg ctrl_Num2:*, reg ctrl_Num3:V, reg p33:p(V +), reg r398:V, reg c178:cls, reg r399:V, reg double5:cls, reg nk4:*, reg nk5:V, reg r400:V, reg r401:V, reg p34:p(V +), reg r403:V, reg integer:cls, reg r404:V, reg _Fortran:cls, reg r405:V, reg c179:L, reg r407:V, reg dr50:V, reg dc25:L, reg dx60:V, reg dx61:V, reg ans_names:*, reg ans_names1:V, reg __17:cls, reg r408:V, reg sym70:cls, reg base70:cls, reg guard70:L, reg r409:V, reg r410:V, reg cv13:*, reg cv14:V, reg is_na5:cls, reg r411:V, reg c180:L, reg fit:*, reg fit1:V, reg c181:L, reg fit3:V, reg dr52:V, reg dc26:L, reg dx62:V, reg dx63:V, reg r413:V, reg sym71:cls, reg base71:cls, reg guard71:L, reg r414:V, reg r415:V, reg lev:*, reg lev1:V, reg sum3:cls, reg r416:V, reg sym72:cls, reg base72:cls, reg guard72:L, reg r417:V, reg r418:V, reg df9:*, reg df10:V, reg is_na6:cls, reg r419:V, reg c182:L, reg stop17:cls, reg r420:V, reg fit4:*, reg fit5:V, reg c183:L, reg fit7:V, reg dr54:V, reg dc27:L, reg dx64:V, reg dx65:V, reg r421:V, reg r422:V, reg c184:L, reg spar_is_lambda4:*, reg spar_is_lambda5:V, reg c185:L, reg r423:S, reg fit8:*, reg fit9:V, reg c186:L, reg fit11:V, reg dr56:V, reg dc28:L, reg dx66:V, reg dx67:V, reg r424:V, reg r425:V, reg c187:L, reg paste:cls, reg offKind:*, reg offKind1:V, reg p35:p(V +), reg r427:V, reg spar_is_lambda6:*, reg spar_is_lambda7:V, reg c188:L, reg c189:V, reg sml:*, reg sml1:V, reg c191:L, reg c192:V, reg c194:L, reg stop18:cls, reg wtxt:*, reg wtxt1:V, reg p36:p(V +), reg r429:V, reg r430:V, reg sym73:cls, reg base73:cls, reg guard73:L, reg r431:V, reg r432:V, reg rep4:cls, reg r433:V, reg l6:*, reg c195:L, reg r435:V, reg l8:*, reg dr58:V, reg dc29:L, reg dx68:V, reg dx69:V, reg r438:V, reg warning4:cls, reg wtxt2:*, reg wtxt3:V, reg p37:p(V +), reg r440:V, reg sym74:cls, reg base74:cls, reg guard74:L, reg r442:V, reg r443:V, reg cv15:*, reg cv16:V, reg is_na7:cls, reg r444:V, reg c196:L, reg r445:V, reg y9:*, reg y10:V, reg fit12:*, reg fit13:V, reg c197:L, reg y12:V, reg fit15:V, reg dr60:V, reg dc30:L, reg dx70:V, reg y14:V, reg dx71:V, reg r446:V, reg c198:L, reg y16:V, reg dx73:V, reg dr62:V, reg dc31:L, reg dx74:V, reg y18:V, reg dx75:V, reg ox2:*, reg ox3:V, reg __18:cls, reg r447:V, reg r448:V, reg cv17:*, reg cv18:V, reg c199:L, reg wbar8:*, reg wbar9:V, reg l9:*, reg c200:L, reg r450:R, reg l11:*, reg dr64:V, reg dc32:L, reg dx76:V, reg dx77:V, reg ww:*, reg ww1:V, reg r453:V, reg ___1:cls, reg r454:V, reg r455:*, reg r456:V, reg lev2:*, reg lev3:V, reg c201:L, reg r459:V, reg r460:R, reg lev5:V, reg dr66:V, reg dc33:L, reg dx78:V, reg r463:V, reg r464:R, reg dx79:V, reg ox4:*, reg ox5:V, reg __19:cls, reg r465:V, reg w26:*, reg w27:V, reg r466:V, reg ww2:*, reg ww3:V, reg c202:L, reg r470:V, reg r471:R, reg r472:V, reg ww5:V, reg dr68:V, reg dc34:L, reg dx80:V, reg r476:V, reg r477:R, reg r478:V, reg dx81:V, reg ox6:*, reg ox7:V, reg __20:cls, reg r479:V, reg r480:V, reg r481:V, reg r482:V, reg no_wgts2:*, reg no_wgts3:V, reg c203:L, reg mean:cls, reg r483:*, reg r484:V, reg r485:V, reg p38:p(V +), reg r487:V, reg r488:V, reg weighted_mean:cls, reg r489:*, reg r490:V, reg r491:V, reg p39:p(V +), reg w28:*, reg w29:V, reg p40:p(V +), reg r494:V, reg no_wgts4:*, reg no_wgts5:V, reg c204:L, reg mean1:cls, reg r495:*, reg r496:V, reg r497:V, reg p41:p(V +), reg r499:V, reg r500:V, reg weighted_mean1:cls, reg r501:*, reg r502:V, reg r503:V, reg p42:p(V +), reg w30:*, reg w31:V, reg p43:p(V +), reg r506:V, reg df_offset3:*, reg df_offset4:V, reg penalty3:*, reg penalty4:V, reg df11:*, reg df12:V, reg r507:V, reg r508:V, reg n15:*, reg n16:V, reg r509:V, reg r510:V, reg r511:V, reg r512:V, reg structure:cls, reg sym75:cls, reg base75:cls, reg guard75:L, reg r513:V, reg r514:V, reg ux18:*, reg ux19:V, reg fit16:*, reg fit17:V, reg c205:L, reg fit19:V, reg dr70:V, reg dc35:L, reg dx82:V, reg dx83:V, reg r515:V, reg wbar10:*, reg wbar11:V, reg ybar4:*, reg ybar5:V, reg tol5:*, reg tol6:V, reg keep_data1:*, reg keep_data2:V, reg c206:L, reg sym76:cls, reg base76:cls, reg guard76:L, reg r516:V, reg r517:V, reg x17:*, reg x18:V, reg y19:*, reg y20:V, reg w32:*, reg w33:V, reg list2:cls, reg r518:V, reg r519:V, reg no_wgts6:*, reg no_wgts7:V, reg n17:*, reg n18:V, reg lev6:*, reg lev7:V, reg cv19:*, reg cv20:V, reg cv_crit:*, reg cv_crit1:V, reg sym77:cls, reg base77:cls, reg guard77:L, reg r520:V, reg r521:V, reg wbar12:*, reg wbar13:V, reg ybar6:*, reg ybar7:V, reg fit20:*, reg fit21:V, reg c207:L, reg wbar15:V, reg ybar9:V, reg fit23:V, reg dr72:V, reg dc36:L, reg dx84:V, reg wbar17:V, reg ybar11:V, reg dx85:V, reg r522:V, reg r523:V, reg r524:V, reg r525:V, reg sum4:cls, reg r526:V, reg fit24:*, reg fit25:V, reg c208:L, reg fit27:V, reg dr74:V, reg dc37:L, reg dx86:V, reg dx87:V, reg r527:V, reg df13:*, reg df14:V, reg spar_is_lambda8:*, reg spar_is_lambda9:V, reg c209:L, reg r528:V, reg fit28:*, reg fit29:V, reg c210:L, reg fit31:V, reg dr76:V, reg dc38:L, reg dx88:V, reg dx89:V, reg r529:V, reg spar_is_lambda10:*, reg spar_is_lambda11:V, reg c211:L, reg r530:V, reg fit32:*, reg fit33:V, reg c212:L, reg fit35:V, reg dr78:V, reg dc39:L, reg dx90:V, reg dx91:V, reg r531:V, reg c213:L, reg dx93:V, reg dr80:V, reg dc40:L, reg dx94:V, reg __21:cls, reg r532:V, reg fit36:*, reg fit37:V, reg c214:L, reg fit39:V, reg dr82:V, reg dc41:L, reg dx95:V, reg dx96:V, reg r533:V, reg c215:L, reg dx98:V, reg dr84:V, reg dc42:L, reg dx99:V, reg dx100:V, reg __22:cls, reg r534:V, reg sym78:cls, reg base78:cls, reg guard78:L, reg r535:V, reg r536:V, reg fit40:*, reg fit41:V, reg c216:L, reg fit43:V, reg dr86:V, reg dc43:L, reg dx101:V, reg dx102:V, reg r537:V, reg fit44:*, reg fit45:V, reg c217:L, reg fit47:V, reg dr88:V, reg dc44:L, reg dx103:V, reg dx104:V, reg r538:V, reg c218:L, reg fit48:*, reg fit49:V, reg c219:L, reg fit51:V, reg dr90:V, reg dc45:L, reg dx105:V, reg dx106:V, reg r539:V, reg dx107:V, reg c220:cls, reg r540:V, reg keep_stuff5:*, reg keep_stuff6:V, reg c221:L, reg sym79:cls, reg base79:cls, reg guard79:L, reg r541:V, reg r542:V, reg fit52:*, reg fit53:V, reg c222:L, reg fit55:V, reg dr92:V, reg dc46:L, reg dx108:V, reg dx109:V, reg r543:V, reg c223:L, reg dx111:V, reg dr94:V, reg dc47:L, reg dx112:V, reg dx113:V, reg sym80:cls, reg base80:cls, reg guard80:L, reg r544:V, reg dx116:V, reg r545:V, reg nk6:*, reg nk7:V, reg r546:I, reg __23:cls, reg r547:V, reg fit56:*, reg fit57:V, reg c224:L, reg fit59:V, reg dr96:V, reg dc48:L, reg dx117:V, reg dx118:V, reg r548:V, reg c225:L, reg dx120:V, reg dr98:V, reg dc49:L, reg dx121:V, reg dx122:V, reg nk8:*, reg nk9:V, reg sym81:cls, reg base81:cls, reg guard81:L, reg r549:V, reg dx125:V, reg nk12:V, reg r550:V, reg nk13:*, reg nk14:V, reg r551:V, reg r552:I, reg r553:V, reg __24:cls, reg r554:V, reg fit60:*, reg fit61:V, reg c226:L, reg fit63:V, reg dr100:V, reg dc50:L, reg dx126:V, reg dx127:V, reg r555:V, reg c227:L, reg dx129:V, reg dr102:V, reg dc51:L, reg dx130:V, reg dx131:V, reg nk15:*, reg nk16:V, reg r556:V, reg sym82:cls, reg base82:cls, reg guard82:L, reg r559:V, reg dx134:V, reg r560:V, reg r561:V, reg nk17:*, reg nk18:V, reg r562:V, reg r563:I, reg r564:V, reg __25:cls, reg r565:V, reg fit64:*, reg fit65:V, reg c228:L, reg fit67:V, reg dr104:V, reg dc52:L, reg dx135:V, reg dx136:V, reg r566:V, reg c229:L, reg dx138:V, reg dr106:V, reg dc53:L, reg dx139:V, reg dx140:V, reg nk19:*, reg nk20:V, reg r567:V, reg sym83:cls, reg base83:cls, reg guard83:L, reg r570:V, reg dx143:V, reg r571:V, reg r572:V, reg nk21:*, reg nk22:V, reg r573:V, reg r574:I, reg r575:V, reg __26:cls, reg r576:V, reg list3:cls, reg r577:V, reg r578:V, reg structure1:cls, reg sym84:cls, reg base84:cls, reg guard84:L, reg r579:V, reg r580:V, reg knot2:*, reg knot3:V, reg nk23:*, reg nk24:V, reg ux20:*, reg ux21:V, reg c230:L, reg ux23:V, reg dr108:V, reg dc54:L, reg dx144:V, reg dx145:V, reg __27:cls, reg r581:V, reg r_ux2:*, reg r_ux3:V, reg fit68:*, reg fit69:V, reg c231:L, reg fit71:V, reg dr110:V, reg dc55:L, reg dx146:V, reg dx147:V, reg r582:V, reg list4:cls, reg r583:V, reg p44:p(V +), reg r585:V, reg match_call:cls, reg r586:V, reg list5:cls, reg r587:V, reg p45:p(V +), reg r589:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    w_isMissing = missing.0(w);
    if w_isMissing then L1(NULL) else L1(w);
  L1(w_orDefault):
    st w = w_orDefault;
    st df = df;
    spar_isMissing = missing.0(spar);
    if spar_isMissing then L2(NULL) else L2(spar);
  L2(spar_orDefault):
    st spar = spar_orDefault;
    lambda_isMissing = missing.0(lambda);
    if lambda_isMissing then L3(NULL) else L3(lambda);
  L3(lambda_orDefault):
    st lambda = lambda_orDefault;
    cv_isMissing = missing.0(cv);
    if cv_isMissing then L4(FALSE) else L4(cv);
  L4(cv_orDefault):
    st cv = cv_orDefault;
    all_knots_isMissing = missing.0(all_knots);
    if all_knots_isMissing then L5(FALSE) else L5(all_knots);
  L5(all_knots_orDefault):
    st `all.knots` = all_knots_orDefault;
    nknots_isMissing = missing.0(nknots);
    if nknots_isMissing then L6() else L7(nknots);
  L6():
    p = prom<V +>{
      _nknots_smspl = ld `.nknots.smspl`;
      _nknots_smspl1 = force? _nknots_smspl;
      checkMissing(_nknots_smspl1);
      return _nknots_smspl1;
    };
    goto L7(p);
  L7(nknots_orDefault):
    st nknots = nknots_orDefault;
    keep_data_isMissing = missing.0(keep_data);
    if keep_data_isMissing then L8(TRUE) else L8(keep_data);
  L8(keep_data_orDefault):
    st `keep.data` = keep_data_orDefault;
    df_offset_isMissing = missing.0(df_offset);
    if df_offset_isMissing then L9(0.0) else L9(df_offset);
  L9(df_offset_orDefault):
    st `df.offset` = df_offset_orDefault;
    penalty_isMissing = missing.0(penalty);
    if penalty_isMissing then L10(1.0) else L10(penalty);
  L10(penalty_orDefault):
    st penalty = penalty_orDefault;
    control_spar_isMissing = missing.0(control_spar);
    if control_spar_isMissing then L11() else L12(control_spar);
  L11():
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
    goto L12(p1);
  L12(control_spar_orDefault):
    st `control.spar` = control_spar_orDefault;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L13() else L14(tol);
  L13():
    p3 = prom<V +>{
      IQR = ldf IQR;
      p2 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r6 = dyn IQR(p2);
      r7 = `*`(1.0E-6, r6);
      return r7;
    };
    goto L14(p3);
  L14(tol_orDefault):
    st tol = tol_orDefault;
    keep_stuff_isMissing = missing.0(keep_stuff);
    if keep_stuff_isMissing then L15(FALSE) else L15(keep_stuff);
  L15(keep_stuff_orDefault):
    st `keep.stuff` = keep_stuff_orDefault;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L211() else L212();
  L16(r10):
    st `contr.sp` = r10;
    control_spar1 = ld `control.spar`;
    check L216() else D3();
  L211():
    getOption = ldf getOption;
    check L213() else D0();
  L212():
    r9 = dyn base1[low, high, tol, eps, maxit, trace](<lang `-`(1.5)>, 1.5, 1.0E-4, 2.0E-8, 500.0, <lang getOption("verbose")>);
    goto L16(r9);
  D0():
    deopt 14 [];
  D3():
    deopt 21 [control_spar1];
  L213():
    r11 = dyn getOption("verbose");
    check L214() else D1();
  L216():
    control_spar2 = force? control_spar1;
    checkMissing(control_spar2);
    l = ld `contr.sp`;
    c = `is.object`(l);
    if c then L217() else L218(control_spar2, l);
  D1():
    deopt 16 [r11];
  L17(dx1):
    st `contr.sp` = dx1;
    contr_sp = ld `contr.sp`;
    check L224() else D6();
  L214():
    list1 = ldf list in base;
    r12 = dyn list1(-1.5, 1.5, 1.0E-4, 2.0E-8, 500.0, r11);
    check L215() else D2();
  L217():
    dr = tryDispatchBuiltin.0("[<-", l, control_spar2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L219() else L218(control_spar2, dr);
  L218(control_spar4, l2):
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L220() else L221();
  D2():
    deopt 19 [r12];
  D6():
    deopt 32 [contr_sp];
  L18(control_spar11, l5, control_spar12, r14):
    ___ = ldf `[<-` in base;
    r16 = dyn ___(l5, control_spar12, r14);
    goto L17(r16);
  L215():
    goto L16(r12);
  L219():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L220():
    control_spar13 = ld `control.spar`;
    check L222() else D4();
  L221():
    r13 = dyn base2(<sym control.spar>);
    goto L18(control_spar4, l2, control_spar2, r13);
  L224():
    contr_sp1 = force? contr_sp;
    checkMissing(contr_sp1);
    c1 = `is.object`(contr_sp1);
    if c1 then L225() else L226(contr_sp1);
  D4():
    deopt 26 [control_spar4, l2, control_spar2, control_spar13];
  L19(dx3):
    st `ctrl.Num` = dx3;
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L228() else L229();
  L222():
    control_spar14 = force? control_spar13;
    checkMissing(control_spar14);
    names = ldf names in base;
    r15 = dyn names(control_spar14);
    check L223() else D5();
  L225():
    dr2 = tryDispatchBuiltin.1("[", contr_sp1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L227() else L226(dr2);
  L226(contr_sp3):
    __ = ldf `[` in base;
    r17 = dyn __(contr_sp3, <int 1, 2, 3, 4>);
    goto L19(r17);
  D5():
    deopt 29 [control_spar4, l2, control_spar2, r15];
  L20(r19):
    r24 = `!`(r19);
    c2 = `as.logical`(r24);
    if c2 then L21(c2) else L233();
  L223():
    goto L18(control_spar4, l2, control_spar2, r15);
  L227():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx2);
  L228():
    vapply = ldf vapply;
    check L230() else D7();
  L229():
    r18 = dyn base3(<lang vapply(ctrl.Num, is.numeric, NA_LGL)>);
    goto L20(r18);
  D7():
    deopt 41 [];
  L21(c3):
    c13 = `as.logical`(c3);
    if c13 then L22(c13) else L240();
  L230():
    p4 = prom<V +>{
      ctrl_Num = ld `ctrl.Num`;
      ctrl_Num1 = force? ctrl_Num;
      checkMissing(ctrl_Num1);
      return ctrl_Num1;
    };
    p5 = prom<V +>{
      is_numeric = ld `is.numeric`;
      is_numeric1 = force? is_numeric;
      checkMissing(is_numeric1);
      return is_numeric1;
    };
    r22 = dyn vapply(p4, p5, NA_LGL);
    check L231() else D8();
  L233():
    contr_sp4 = ld `contr.sp`;
    check L234() else D10();
  D8():
    deopt 45 [r22];
  D10():
    deopt 49 [c2, contr_sp4];
  L22(c14):
    c24 = `as.logical`(c14);
    if c24 then L23(c24) else L247();
  L231():
    all = ldf all in base;
    r23 = dyn all(r22);
    check L232() else D9();
  L234():
    contr_sp5 = force? contr_sp4;
    checkMissing(contr_sp5);
    c5 = `is.object`(contr_sp5);
    if c5 then L236() else L237(c2, contr_sp5);
  L240():
    contr_sp8 = ld `contr.sp`;
    check L241() else D11();
  D9():
    deopt 47 [r23];
  D11():
    deopt 55 [c13, contr_sp8];
  L23(c25):
    c35 = `as.logical`(c25);
    if c35 then L254() else L24();
  L232():
    goto L20(r23);
  L235(c9, dx5):
    r26 = `<`(dx5, 0.0);
    c10 = `as.logical`(r26);
    c11 = `||`(c9, c10);
    goto L21(c11);
  L236():
    dr4 = tryDispatchBuiltin.1("$", contr_sp5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L238() else L237(c2, dr4);
  L237(c7, contr_sp7):
    r25 = `$`(contr_sp7, <sym tol>);
    goto L235(c7, r25);
  L241():
    contr_sp9 = force? contr_sp8;
    checkMissing(contr_sp9);
    c16 = `is.object`(contr_sp9);
    if c16 then L243() else L244(c13, contr_sp9);
  L247():
    contr_sp12 = ld `contr.sp`;
    check L248() else D12();
  D12():
    deopt 61 [c24, contr_sp12];
  L24():
    goto L25();
  L25():
    xy_coords = ldf `xy.coords`;
    check L258() else D15();
  L238():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L235(c2, dx4);
  L242(c20, dx7):
    r28 = `<=`(dx7, 0.0);
    c21 = `as.logical`(r28);
    c22 = `||`(c20, c21);
    goto L22(c22);
  L243():
    dr6 = tryDispatchBuiltin.1("$", contr_sp9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L245() else L244(c13, dr6);
  L244(c18, contr_sp11):
    r27 = `$`(contr_sp11, <sym eps>);
    goto L242(c18, r27);
  L248():
    contr_sp13 = force? contr_sp12;
    checkMissing(contr_sp13);
    c27 = `is.object`(contr_sp13);
    if c27 then L250() else L251(c24, contr_sp13);
  L254():
    stop = ldf stop;
    check L255() else D13();
  D13():
    deopt 68 [];
  D15():
    deopt 74 [];
  L245():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L242(c13, dx6);
  L249(c31, dx9):
    r30 = `<=`(dx9, 0.0);
    c32 = `as.logical`(r30);
    c33 = `||`(c31, c32);
    goto L23(c33);
  L250():
    dr8 = tryDispatchBuiltin.1("$", contr_sp13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L252() else L251(c24, dr8);
  L251(c29, contr_sp15):
    r29 = `$`(contr_sp15, <sym maxit>);
    goto L249(c29, r29);
  L255():
    r31 = dyn stop("invalid 'control.spar'");
    check L256() else D14();
  L258():
    p6 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p7 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r35 = dyn xy_coords[, , setLab](p6, p7, FALSE);
    check L259() else D16();
  D14():
    deopt 70 [r31];
  D16():
    deopt 79 [r35];
  L252():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L249(c24, dx8);
  L256():
    goto L25();
  L259():
    st xy = r35;
    xy = ld xy;
    check L260() else D17();
  D17():
    deopt 81 [xy];
  L260():
    xy1 = force? xy;
    checkMissing(xy1);
    c36 = `is.object`(xy1);
    if c36 then L262() else L263(xy1);
  L261(dx11):
    st y = dx11;
    xy4 = ld xy;
    check L265() else D18();
  L262():
    dr10 = tryDispatchBuiltin.1("$", xy1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L264() else L263(dr10);
  L263(xy3):
    r36 = `$`(xy3, <sym y>);
    goto L261(r36);
  D18():
    deopt 85 [xy4];
  L264():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L261(dx10);
  L265():
    xy5 = force? xy4;
    checkMissing(xy5);
    c37 = `is.object`(xy5);
    if c37 then L267() else L268(xy5);
  L266(dx13):
    st x = dx13;
    sym4 = ldf all;
    base4 = ldf all in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L270() else L271();
  L267():
    dr12 = tryDispatchBuiltin.1("$", xy5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L269() else L268(dr12);
  L268(xy7):
    r37 = `$`(xy7, <sym x>);
    goto L266(r37);
  L26(r39):
    r47 = `!`(r39);
    c39 = `as.logical`(r47);
    if c39 then L281() else L29();
  L269():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L266(dx12);
  L270():
    sym5 = ldf `is.finite`;
    base5 = ldf `is.finite` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L272() else L273();
  L271():
    r38 = dyn base4(<lang is.finite(c(x, y))>);
    goto L26(r38);
  L27(r41):
    all1 = ldf all in base;
    r46 = dyn all1(r41);
    check L280() else D23();
  L29():
    goto L30();
  L30():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L285() else L286();
  L272():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L274() else L275();
  L273():
    r40 = dyn base5(<lang c(x, y)>);
    goto L27(r40);
  L281():
    stop1 = ldf stop;
    check L282() else D24();
  D23():
    deopt 104 [r46];
  D24():
    deopt 107 [];
  L28(r43):
    is_finite = ldf `is.finite` in base;
    r45 = dyn is_finite(r43);
    check L279() else D22();
  L31(r51):
    st n = r51;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L289() else L290();
  L274():
    x5 = ld x;
    check L276() else D19();
  L275():
    r42 = dyn base6(<sym x>, <sym y>);
    goto L28(r42);
  L280():
    goto L26(r46);
  L282():
    r48 = dyn stop1("missing or infinite values in inputs are not allowed");
    check L283() else D25();
  L285():
    x7 = ld x;
    check L287() else D26();
  L286():
    r50 = dyn base7(<sym x>);
    goto L31(r50);
  D19():
    deopt 95 [x5];
  D22():
    deopt 102 [r45];
  D25():
    deopt 109 [r48];
  D26():
    deopt 114 [x7];
  L32(r54):
    c40 = `as.logical`(r54);
    if c40 then L293() else L33();
  L276():
    x6 = force? x5;
    checkMissing(x6);
    y3 = ld y;
    check L277() else D20();
  L279():
    goto L27(r45);
  L283():
    goto L30();
  L287():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r52 = dyn length(x8);
    check L288() else D27();
  L289():
    n = ld n;
    check L291() else D28();
  L290():
    r53 = dyn base8(<sym n>);
    goto L32(r53);
  D20():
    deopt 97 [y3];
  D27():
    deopt 117 [r52];
  D28():
    deopt 121 [n];
  L33():
    goto L34();
  L34():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L297() else L298();
  L277():
    y4 = force? y3;
    checkMissing(y4);
    c38 = ldf c in base;
    r44 = dyn c38(x6, y4);
    check L278() else D21();
  L288():
    goto L31(r52);
  L291():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r55 = dyn is_na(n1);
    check L292() else D29();
  L293():
    stop2 = ldf stop;
    check L294() else D30();
  D21():
    deopt 100 [r44];
  D29():
    deopt 124 [r55];
  D30():
    deopt 126 [];
  L35(r59):
    st `no.wgts` = r59;
    no_wgts = ld `no.wgts`;
    check L300() else D33();
  L278():
    goto L28(r44);
  L292():
    goto L32(r55);
  L294():
    r56 = dyn stop2("invalid number of points");
    check L295() else D31();
  L297():
    w1 = ld w;
    check L299() else D32();
  L298():
    r58 = dyn base9(<sym w>);
    goto L35(r58);
  D31():
    deopt 128 [r56];
  D32():
    deopt 132 [w1];
  D33():
    deopt 136 [no_wgts];
  L295():
    goto L34();
  L299():
    w2 = force? w1;
    checkMissing(w2);
    c41 = `==`(w2, NULL);
    goto L35(c41);
  L300():
    no_wgts1 = force? no_wgts;
    checkMissing(no_wgts1);
    c42 = `as.logical`(no_wgts1);
    if c42 then L301() else L36();
  L36():
    n2 = ld n;
    check L303() else D34();
  L37(r60):
    st w = r60;
    sym15 = ldf `is.finite`;
    base15 = ldf `is.finite` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L337() else L338();
  L301():
    goto L37(1.0);
  D34():
    deopt 140 [n2];
  L49(r92):
    r94 = `!`(r92);
    c46 = `as.logical`(r94);
    if c46 then L50(c46) else L341();
  L303():
    n3 = force? n2;
    checkMissing(n3);
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L304() else L305();
  L337():
    tol1 = ld tol;
    check L339() else D52();
  L338():
    r91 = dyn base15(<sym tol>);
    goto L49(r91);
  D52():
    deopt 201 [tol1];
  L38(n6, r62):
    r64 = `!=`(n6, r62);
    c43 = `as.logical`(r64);
    if c43 then L308() else L39();
  L50(c47):
    c52 = `as.logical`(c47);
    if c52 then L344() else L51();
  L304():
    w3 = ld w;
    check L306() else D35();
  L305():
    r61 = dyn base10(<sym w>);
    goto L38(n3, r61);
  L339():
    tol2 = force? tol1;
    checkMissing(tol2);
    is_finite1 = ldf `is.finite` in base;
    r93 = dyn is_finite1(tol2);
    check L340() else D53();
  L341():
    tol3 = ld tol;
    check L342() else D54();
  D35():
    deopt 143 [n3, w3];
  D53():
    deopt 204 [r93];
  D54():
    deopt 206 [c46, tol3];
  L39():
    goto L40();
  L40():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L312() else L313();
  L51():
    goto L52();
  L52():
    sym16 = ldf match;
    base16 = ldf match in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L348() else L349();
  L306():
    w4 = force? w3;
    checkMissing(w4);
    length1 = ldf length in base;
    r63 = dyn length1(w4);
    check L307() else D36();
  L308():
    stop3 = ldf stop;
    check L309() else D37();
  L340():
    goto L49(r93);
  L342():
    tol4 = force? tol3;
    checkMissing(tol4);
    r95 = `<=`(tol4, 0.0);
    c49 = `as.logical`(r95);
    c50 = `||`(c46, c49);
    goto L50(c50);
  L344():
    stop6 = ldf stop;
    check L345() else D55();
  D36():
    deopt 146 [n3, r63];
  D37():
    deopt 149 [];
  D55():
    deopt 212 [];
  L41(r68):
    c44 = `as.logical`(r68);
    if c44 then L316() else L42();
  L53(r99):
    r104 = `!`(r99);
    c54 = `as.logical`(r104);
    if c54 then L355() else L55();
  L307():
    goto L38(n3, r63);
  L309():
    r65 = dyn stop3("lengths of 'x' and 'w' must match");
    check L310() else D38();
  L312():
    w5 = ld w;
    check L314() else D39();
  L313():
    r67 = dyn base11(<lang `<`(w, 0.0)>);
    goto L41(r67);
  L345():
    r96 = dyn stop6("'tol' must be strictly positive and finite");
    check L346() else D56();
  L348():
    keep_stuff1 = ld `keep.stuff`;
    check L350() else D57();
  L349():
    r98 = dyn base16(<sym keep.stuff>, <lang c(FALSE, TRUE)>);
    goto L53(r98);
  D38():
    deopt 151 [r65];
  D39():
    deopt 156 [w5];
  D56():
    deopt 214 [r96];
  D57():
    deopt 219 [keep_stuff1];
  L42():
    goto L43();
  L43():
    sym12 = ldf all;
    base12 = ldf all in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L320() else L321();
  L55():
    goto L56();
  L56():
    sym18 = ldf round;
    base18 = ldf round in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L359() else L360();
  L310():
    goto L40();
  L314():
    w6 = force? w5;
    checkMissing(w6);
    r69 = `<`(w6, 0.0);
    any = ldf any in base;
    r70 = dyn any(r69);
    check L315() else D40();
  L316():
    stop4 = ldf stop;
    check L317() else D41();
  L346():
    goto L52();
  L350():
    keep_stuff2 = force? keep_stuff1;
    checkMissing(keep_stuff2);
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L351() else L352();
  L355():
    stop7 = ldf stop;
    check L356() else D60();
  D40():
    deopt 161 [r70];
  D41():
    deopt 163 [];
  D60():
    deopt 233 [];
  L44(r74):
    c45 = `as.logical`(r74);
    if c45 then L324() else L45();
  L54(r101):
    match = ldf match in base;
    r103 = dyn match(keep_stuff2, r101, NA_INT, NULL);
    check L354() else D59();
  L57(r108):
    st xx = r108;
    is_unsorted = ldf `is.unsorted`;
    check L361() else D62();
  L315():
    goto L41(r70);
  L317():
    r71 = dyn stop4("all weights should be non-negative");
    check L318() else D42();
  L320():
    w7 = ld w;
    check L322() else D43();
  L321():
    r73 = dyn base12(<lang `==`(w, 0.0)>);
    goto L44(r73);
  L351():
    c53 = ldf c in base;
    r102 = dyn c53(FALSE, TRUE);
    check L353() else D58();
  L352():
    r100 = dyn base17(FALSE, TRUE);
    goto L54(r100);
  L356():
    r105 = dyn stop7("invalid 'keep.stuff'");
    check L357() else D61();
  L359():
    round = ldf round in base;
    r109 = dyn round(<lang `/`(`(`(`-`(x, mean(x))), tol)>);
    goto L57(r109);
  L360():
    r107 = dyn base18(<lang `/`(`(`(`-`(x, mean(x))), tol)>);
    goto L57(r107);
  D42():
    deopt 165 [r71];
  D43():
    deopt 170 [w7];
  D58():
    deopt 226 [r102];
  D59():
    deopt 230 [r103];
  D61():
    deopt 235 [r105];
  D62():
    deopt 243 [];
  L45():
    goto L46();
  L46():
    w9 = ld w;
    check L328() else D47();
  L318():
    goto L43();
  L322():
    w8 = force? w7;
    checkMissing(w8);
    r75 = `==`(w8, 0.0);
    all2 = ldf all in base;
    r76 = dyn all2(r75);
    check L323() else D44();
  L324():
    stop5 = ldf stop;
    check L325() else D45();
  L353():
    goto L54(r102);
  L354():
    goto L53(r103);
  L357():
    goto L56();
  L361():
    p8 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r111 = dyn is_unsorted(p8);
    check L362() else D63();
  D44():
    deopt 175 [r76];
  D45():
    deopt 177 [];
  D47():
    deopt 182 [w9];
  D63():
    deopt 245 [r111];
  L323():
    goto L44(r76);
  L325():
    r77 = dyn stop5("some weights should be positive");
    check L326() else D46();
  L328():
    w10 = force? w9;
    checkMissing(w10);
    sym13 = ldf sum;
    base13 = ldf sum in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L329() else L330();
  L362():
    st `uns.x` = r111;
    uns_x = ld `uns.x`;
    check L363() else D64();
  D46():
    deopt 179 [r77];
  D64():
    deopt 247 [uns_x];
  L47(w13, r80):
    r83 = `*`(w13, r80);
    sym14 = ldf sum;
    base14 = ldf sum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L333() else L334();
  L326():
    goto L46();
  L329():
    w14 = ld w;
    check L331() else D48();
  L330():
    r79 = dyn base13(<lang `>`(w, 0.0)>);
    goto L47(w10, r79);
  L363():
    uns_x1 = force? uns_x;
    checkMissing(uns_x1);
    c55 = `as.logical`(uns_x1);
    if c55 then L364() else L58();
  D48():
    deopt 185 [w10, w14];
  L48(r87, r88):
    r90 = `/`(r87, r88);
    goto L37(r90);
  L58():
    goto L59(TRUE);
  L59(r114):
    st iOx = r114;
    xx = ld xx;
    check L368() else D67();
  L331():
    w15 = force? w14;
    checkMissing(w15);
    r81 = `>`(w15, 0.0);
    sum = ldf sum in base;
    r82 = dyn sum(r81);
    check L332() else D49();
  L333():
    w16 = ld w;
    check L335() else D50();
  L334():
    r86 = dyn base14(<sym w>);
    goto L48(r83, r86);
  L364():
    sort_list = ldf `sort.list`;
    check L365() else D65();
  D49():
    deopt 190 [w10, r82];
  D50():
    deopt 193 [r83, w16];
  D65():
    deopt 250 [];
  D67():
    deopt 256 [xx];
  L332():
    goto L47(w10, r82);
  L335():
    w17 = force? w16;
    checkMissing(w17);
    sum1 = ldf sum in base;
    r89 = dyn sum1(w17);
    check L336() else D51();
  L365():
    p9 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r113 = dyn sort_list(p9);
    check L366() else D66();
  L368():
    xx1 = force? xx;
    checkMissing(xx1);
    c56 = `is.object`(xx1);
    if c56 then L369() else L370(xx1);
  D51():
    deopt 196 [r83, r89];
  D66():
    deopt 252 [r113];
  L60(dx15):
    st xxs = dx15;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L373() else L374();
  L336():
    goto L48(r83, r89);
  L366():
    goto L59(r113);
  L369():
    dr14 = tryDispatchBuiltin.1("[", xx1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L371() else L370(dr14);
  L370(xx3):
    iOx = ld iOx;
    check L372() else D68();
  D68():
    deopt 258 [xx3, iOx];
  L61(r117):
    st nd = r117;
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L385() else L386();
  L371():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L60(dx14);
  L372():
    iOx1 = force? iOx;
    __1 = ldf `[` in base;
    r115 = dyn __1(xx3, iOx1);
    goto L60(r115);
  L373():
    xxs = ld xxs;
    check L375() else D69();
  L374():
    r116 = dyn base19(TRUE, <lang `<`(`[`(xxs, `-`(n)), `[`(xxs, `-`(1)))>);
    goto L61(r116);
  D69():
    deopt 265 [xxs];
  L64(r124):
    st nx = r124;
    nx = ld nx;
    check L397() else D77();
  L375():
    xxs1 = force? xxs;
    checkMissing(xxs1);
    c57 = `is.object`(xxs1);
    if c57 then L376() else L377(xxs1);
  L385():
    x13 = ld x;
    check L387() else D73();
  L386():
    r123 = dyn base20(<lang `<-`(ux, `[`(`[`(x, iOx), nd))>);
    goto L64(r123);
  D73():
    deopt 281 [x13];
  D77():
    deopt 293 [nx];
  L62(dx17):
    xxs4 = ld xxs;
    check L380() else D71();
  L376():
    dr16 = tryDispatchBuiltin.1("[", xxs1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L378() else L377(dr16);
  L377(xxs3):
    n7 = ld n;
    check L379() else D70();
  L387():
    x14 = force? x13;
    checkMissing(x14);
    c60 = `is.object`(x14);
    if c60 then L388() else L389(x14);
  L397():
    nx1 = force? nx;
    checkMissing(nx1);
    r128 = `<=`(nx1, 3);
    c62 = `as.logical`(r128);
    if c62 then L398() else L67();
  D70():
    deopt 267 [xxs3, n7];
  D71():
    deopt 270 [dx17, xxs4];
  L65(dx25):
    c61 = `is.object`(dx25);
    if c61 then L392() else L393(dx25);
  L67():
    goto L68();
  L68():
    nx2 = ld nx;
    check L402() else D80();
  L378():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L62(dx16);
  L379():
    n8 = force? n7;
    checkMissing(n8);
    r118 = `-`(<missing>, n8);
    __2 = ldf `[` in base;
    r119 = dyn __2(xxs3, r118);
    goto L62(r119);
  L380():
    xxs5 = force? xxs4;
    checkMissing(xxs5);
    c58 = `is.object`(xxs5);
    if c58 then L381() else L382(dx17, xxs5);
  L388():
    dr20 = tryDispatchBuiltin.1("[", x14);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L390() else L389(dr20);
  L389(x16):
    iOx2 = ld iOx;
    check L391() else D74();
  L398():
    stop8 = ldf stop;
    check L399() else D78();
  D74():
    deopt 283 [x16, iOx2];
  D78():
    deopt 298 [];
  D80():
    deopt 303 [nx2];
  L63(dx22, dx23):
    r121 = `<`(dx22, dx23);
    c59 = ldf c in base;
    r122 = dyn c59(TRUE, r121);
    check L384() else D72();
  L66(dx29):
    st ux = dx29;
    length2 = ldf length in base;
    r127 = dyn length2(dx29);
    check L396() else D76();
  L381():
    dr18 = tryDispatchBuiltin.1("[", xxs5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L383() else L382(dx17, dr18);
  L382(dx19, xxs7):
    __3 = ldf `[` in base;
    r120 = dyn __3(xxs7, -1);
    goto L63(dx19, r120);
  L390():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L65(dx24);
  L391():
    iOx3 = force? iOx2;
    __4 = ldf `[` in base;
    r125 = dyn __4(x16, iOx3);
    goto L65(r125);
  L392():
    dr22 = tryDispatchBuiltin.1("[", dx25);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L394() else L393(dr22);
  L393(dx27):
    nd = ld nd;
    check L395() else D75();
  L399():
    r129 = dyn stop8("need at least four unique 'x' values");
    check L400() else D79();
  L402():
    nx3 = force? nx2;
    checkMissing(nx3);
    n9 = ld n;
    check L403() else D81();
  D72():
    deopt 277 [r122];
  D75():
    deopt 286 [dx27, nd];
  D76():
    deopt 291 [r127];
  D79():
    deopt 300 [r129];
  D81():
    deopt 304 [nx3, n9];
  L383():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L63(dx17, dx21);
  L384():
    goto L61(r122);
  L394():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L66(dx28);
  L395():
    nd1 = force? nd;
    __5 = ldf `[` in base;
    r126 = dyn __5(dx27, nd1);
    goto L66(r126);
  L396():
    goto L64(r127);
  L400():
    goto L68();
  L403():
    n10 = force? n9;
    checkMissing(n10);
    r131 = `==`(nx3, n10);
    c63 = `as.logical`(r131);
    if c63 then L404() else L69();
  L69():
    sym21 = ldf match;
    base21 = ldf match in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L416() else L417();
  L73():
    tmp = ld tmp;
    check L427() else D93();
  L404():
    uns_x2 = ld `uns.x`;
    check L405() else D82();
  D82():
    deopt 307 [uns_x2];
  D93():
    deopt 355 [tmp];
  L74(r148):
    st ox = r148;
    r151 = clos inner1928276915;
    st tapply1 = r151;
    matrix = ldf matrix;
    check L425() else D91();
  L405():
    uns_x3 = force? uns_x2;
    checkMissing(uns_x3);
    c64 = `as.logical`(uns_x3);
    if c64 then L406() else L70();
  L416():
    xx4 = ld xx;
    check L418() else D87();
  L417():
    r147 = dyn base21(<sym xx>, <lang `[`(xxs, nd)>);
    goto L74(r147);
  L427():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    c68 = `is.object`(tmp1);
    if c68 then L428() else L429();
  D87():
    deopt 331 [xx4];
  D91():
    deopt 347 [];
  L70():
    goto L71(TRUE);
  L71(r136):
    st ox = r136;
    cbind = ldf cbind;
    check L409() else D84();
  L76(dx36):
    st wbar = dx36;
    tmp4 = ld tmp;
    check L431() else D94();
  L406():
    r132 = clos inner3913899244;
    checkFun.0(r132);
    r133 = r132 as cls;
    p10 = prom<V +>{
      iOx4 = ld iOx;
      iOx5 = force? iOx4;
      checkMissing(iOx5);
      return iOx5;
    };
    r135 = dyn r133(p10);
    check L407() else D83();
  L418():
    xx5 = force? xx4;
    checkMissing(xx5);
    xxs8 = ld xxs;
    check L419() else D88();
  L425():
    p18 = prom<V +>{
      unlist = ldf unlist;
      p17 = prom<V +>{
        tapply1 = ldf tapply1;
        p14 = prom<V +>{
          sym22 = ldf seq_len;
          base22 = ldf seq_len in base;
          guard22 = `==`.4(sym22, base22);
          if guard22 then L1() else L2();
        L0(r153):
          return r153;
        L1():
          n11 = ld n;
          n12 = force? n11;
          checkMissing(n12);
          r154 = seq_len(n12);
          goto L0(r154);
        L2():
          r152 = dyn base22(<sym n>);
          goto L0(r152);
        };
        p15 = prom<V +>{
          ox = ld ox;
          ox1 = force? ox;
          checkMissing(ox1);
          return ox1;
        };
        p16 = prom<V +>{
          sym23 = ldf length;
          base23 = ldf length in base;
          guard23 = `==`.4(sym23, base23);
          if guard23 then L2() else L3();
        L0(r158):
          r160 = `==`(r158, 1);
          c67 = `as.logical`(r160);
          if c67 then L4() else L1();
        L2():
          w24 = ld w;
          w25 = force? w24;
          checkMissing(w25);
          length3 = ldf length in base;
          r159 = dyn length3(w25);
          goto L0(r159);
        L3():
          r157 = dyn base23(<sym w>);
          goto L0(r157);
        L1():
          r162 = clos inner3002224933;
          return r162;
        L4():
          r161 = clos inner3002224933;
          return r161;
        };
        r164 = dyn tapply1(p14, p15, p16);
        return r164;
      };
      r166 = dyn unlist[, `use.names`](p17, FALSE);
      return r166;
    };
    r168 = dyn matrix[, ncol, byrow](p18, 3.0, TRUE);
    check L426() else D92();
  L428():
    dr28 = tryDispatchBuiltin.1("[", tmp1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L430() else L429();
  L429():
    __8 = ldf `[` in base;
    r169 = dyn __8(tmp1, <missing>, 1);
    goto L76(r169);
  D83():
    deopt 313 [r135];
  D84():
    deopt 318 [];
  D88():
    deopt 333 [xxs8];
  D92():
    deopt 353 [r168];
  D94():
    deopt 362 [tmp4];
  L407():
    goto L71(r135);
  L409():
    p11 = prom<V +>{
      w18 = ld w;
      w19 = force? w18;
      checkMissing(w19);
      return w19;
    };
    p12 = prom<V +>{
      w20 = ld w;
      w21 = force? w20;
      checkMissing(w21);
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      r138 = `*`(w21, y6);
      return r138;
    };
    p13 = prom<V +>{
      w22 = ld w;
      w23 = force? w22;
      checkMissing(w23);
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      r140 = `^`(y8, 2.0);
      r141 = `*`(w23, r140);
      return r141;
    };
    r143 = dyn cbind(p11, p12, p13);
    check L410() else D85();
  L419():
    xxs9 = force? xxs8;
    checkMissing(xxs9);
    c66 = `is.object`(xxs9);
    if c66 then L420() else L421(xxs9);
  L426():
    st tmp = r168;
    goto L73();
  L430():
    dx35 = getTryDispatchBuiltinValue(dr28);
    goto L76(dx35);
  L431():
    tmp5 = force? tmp4;
    checkMissing(tmp5);
    c69 = `is.object`(tmp5);
    if c69 then L432() else L433();
  D85():
    deopt 322 [r143];
  L75(dx34):
    match1 = ldf match in base;
    r150 = dyn match1(xx5, dx34, NA_INT, NULL);
    check L424() else D90();
  L77(dx38):
    ifelse = ldf ifelse;
    check L435() else D95();
  L410():
    c65 = `is.object`(r143);
    if c65 then L411() else L412(r143);
  L420():
    dr26 = tryDispatchBuiltin.1("[", xxs9);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L422() else L421(dr26);
  L421(xxs11):
    nd2 = ld nd;
    check L423() else D89();
  L432():
    dr30 = tryDispatchBuiltin.1("[", tmp5);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L434() else L433();
  L433():
    __9 = ldf `[` in base;
    r170 = dyn __9(tmp5, <missing>, 2);
    goto L77(r170);
  D89():
    deopt 335 [xxs11, nd2];
  D90():
    deopt 341 [r150];
  D95():
    deopt 368 [dx38];
  L72(dx31):
    st tmp = dx31;
    goto L73();
  L411():
    dr24 = tryDispatchBuiltin.1("[", r143);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L413() else L412(dr24);
  L412(r145):
    iOx6 = ld iOx;
    check L414() else D86();
  L422():
    dx33 = getTryDispatchBuiltinValue(dr26);
    goto L75(dx33);
  L423():
    nd3 = force? nd2;
    __7 = ldf `[` in base;
    r149 = dyn __7(xxs11, nd3);
    goto L75(r149);
  L424():
    goto L74(r150);
  L434():
    dx37 = getTryDispatchBuiltinValue(dr30);
    goto L77(dx37);
  L435():
    p19 = prom<V +>{
      wbar = ld wbar;
      wbar1 = force? wbar;
      checkMissing(wbar1);
      r171 = `>`(wbar1, 0.0);
      return r171;
    };
    p20 = prom<V +>{
      wbar2 = ld wbar;
      wbar3 = force? wbar2;
      checkMissing(wbar3);
      return wbar3;
    };
    r174 = dyn ifelse(p19, p20, 1.0);
    check L436() else D96();
  D86():
    deopt 323 [r145, iOx6];
  D96():
    deopt 372 [dx38, r174];
  L413():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L72(dx30);
  L414():
    iOx7 = force? iOx6;
    __6 = ldf `[` in base;
    r146 = dyn __6(r143, iOx7, <missing>);
    goto L72(r146);
  L436():
    r175 = `/`(dx38, r174);
    st ybar = r175;
    sym24 = ldf sum;
    base24 = ldf sum in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L437() else L438();
  L78(r177):
    st yssw = r177;
    rm = ldf rm;
    check L446() else D101();
  L437():
    tmp8 = ld tmp;
    check L439() else D97();
  L438():
    r176 = dyn base24(<lang `-`(`[`(tmp, , 3), `*`(wbar, `^`(ybar, 2.0)))>);
    goto L78(r176);
  D97():
    deopt 377 [tmp8];
  D101():
    deopt 393 [];
  L439():
    tmp9 = force? tmp8;
    checkMissing(tmp9);
    c70 = `is.object`(tmp9);
    if c70 then L440() else L441();
  L446():
    p21 = prom<V +>{
      iOx8 = ld iOx;
      iOx9 = force? iOx8;
      checkMissing(iOx9);
      return iOx9;
    };
    p22 = prom<V +>{
      xx6 = ld xx;
      xx7 = force? xx6;
      checkMissing(xx7);
      return xx7;
    };
    p23 = prom<V +>{
      xxs12 = ld xxs;
      xxs13 = force? xxs12;
      checkMissing(xxs13);
      return xxs13;
    };
    p24 = prom<V +>{
      nd4 = ld nd;
      nd5 = force? nd4;
      checkMissing(nd5);
      return nd5;
    };
    p25 = prom<V +>{
      tmp12 = ld tmp;
      tmp13 = force? tmp12;
      checkMissing(tmp13);
      return tmp13;
    };
    r188 = dyn rm(p21, p22, p23, p24, p25);
    check L447() else D102();
  D102():
    deopt 399 [r188];
  L79(dx40):
    wbar4 = ld wbar;
    check L443() else D98();
  L440():
    dr32 = tryDispatchBuiltin.1("[", tmp9);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L442() else L441();
  L441():
    __10 = ldf `[` in base;
    r178 = dyn __10(tmp9, <missing>, 3);
    goto L79(r178);
  L447():
    sym25 = ldf `is.na`;
    base25 = ldf `is.na` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L448() else L449();
  D98():
    deopt 382 [dx40, wbar4];
  L80(r190):
    c71 = `as.logical`(r190);
    if c71 then L455() else L82(c71);
  L442():
    dx39 = getTryDispatchBuiltinValue(dr32);
    goto L79(dx39);
  L443():
    wbar5 = force? wbar4;
    checkMissing(wbar5);
    ybar = ld ybar;
    check L444() else D99();
  L448():
    sym26 = ldf `as.logical`;
    base26 = ldf `as.logical` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L450() else L451();
  L449():
    r189 = dyn base25(<lang `<-`(cv, as.logical(cv))>);
    goto L80(r189);
  D99():
    deopt 383 [dx40, wbar5, ybar];
  L81(r192):
    st cv = r192;
    is_na1 = ldf `is.na` in base;
    r194 = dyn is_na1(r192);
    check L454() else D105();
  L82(c73):
    c80 = `as.logical`(c73);
    if c80 then L459() else L84();
  L444():
    ybar1 = force? ybar;
    checkMissing(ybar1);
    r179 = `^`(ybar1, 2.0);
    r180 = `*`(wbar5, r179);
    r181 = `-`(dx40, r180);
    sum2 = ldf sum in base;
    r182 = dyn sum2(r181);
    check L445() else D100();
  L450():
    cv1 = ld cv;
    check L452() else D103();
  L451():
    r191 = dyn base26(<sym cv>);
    goto L81(r191);
  L455():
    sym27 = ldf missing;
    base27 = ldf missing in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L456() else L457();
  D100():
    deopt 390 [r182];
  D103():
    deopt 404 [cv1];
  D105():
    deopt 410 [r194];
  L83(c76, r196):
    r198 = `!`(r196);
    c77 = `as.logical`(r198);
    c78 = `&&`(c76, c77);
    goto L82(c78);
  L84():
    goto L85();
  L85():
    sym28 = ldf `is.na`;
    base28 = ldf `is.na` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L463() else L464();
  L445():
    goto L78(r182);
  L452():
    cv2 = force? cv1;
    checkMissing(cv2);
    as_logical = ldf `as.logical` in base;
    r193 = dyn as_logical(cv2);
    check L453() else D104();
  L454():
    goto L80(r194);
  L456():
    missing = ldf missing in base;
    r197 = dyn missing(<sym df>);
    goto L83(c71, r197);
  L457():
    r195 = dyn base27(<sym df>);
    goto L83(c71, r195);
  L459():
    stop9 = ldf stop;
    check L460() else D106();
  D104():
    deopt 407 [r193];
  D106():
    deopt 417 [];
  L86(r202):
    r204 = `!`(r202);
    c81 = `as.logical`(r204);
    if c81 then L467() else L87(c81);
  L453():
    goto L81(r193);
  L460():
    r199 = dyn stop9("'cv' must not be NA when 'df' is specified");
    check L461() else D107();
  L463():
    cv3 = ld cv;
    check L465() else D108();
  L464():
    r201 = dyn base28(<sym cv>);
    goto L86(r201);
  D107():
    deopt 419 [r199];
  D108():
    deopt 424 [cv3];
  L87(c83):
    st CV = c83;
    CV = ld CV;
    check L470() else D111();
  L461():
    goto L85();
  L465():
    cv4 = force? cv3;
    checkMissing(cv4);
    is_na2 = ldf `is.na` in base;
    r203 = dyn is_na2(cv4);
    check L466() else D109();
  L467():
    cv5 = ld cv;
    check L468() else D110();
  D109():
    deopt 427 [r203];
  D110():
    deopt 429 [c81, cv5];
  D111():
    deopt 433 [CV];
  L466():
    goto L86(r203);
  L468():
    cv6 = force? cv5;
    checkMissing(cv6);
    c84 = `as.logical`(cv6);
    c85 = `&&`(c81, c84);
    goto L87(c85);
  L470():
    CV1 = force? CV;
    checkMissing(CV1);
    c87 = `as.logical`(CV1);
    if c87 then L471() else L88(c87);
  L88(c89):
    c93 = `as.logical`(c89);
    if c93 then L475() else L89();
  L471():
    nx4 = ld nx;
    check L472() else D112();
  D112():
    deopt 435 [c87, nx4];
  L89():
    goto L90();
  L90():
    ux = ld ux;
    check L479() else D116();
  L472():
    nx5 = force? nx4;
    checkMissing(nx5);
    n13 = ld n;
    check L473() else D113();
  L475():
    warning = ldf warning;
    check L476() else D114();
  D113():
    deopt 436 [c87, nx5, n13];
  D114():
    deopt 441 [];
  D116():
    deopt 446 [ux];
  L473():
    n14 = force? n13;
    checkMissing(n14);
    r205 = `<`(nx5, n14);
    c90 = `as.logical`(r205);
    c91 = `&&`(c87, c90);
    goto L88(c91);
  L476():
    r206 = dyn warning("cross-validation with non-unique 'x' values seems doubtful");
    check L477() else D115();
  L479():
    ux1 = force? ux;
    checkMissing(ux1);
    c94 = `is.object`(ux1);
    if c94 then L480() else L481(ux1);
  D115():
    deopt 443 [r206];
  L91(dx42):
    ux4 = ld ux;
    check L484() else D118();
  L477():
    goto L90();
  L480():
    dr34 = tryDispatchBuiltin.1("[", ux1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L482() else L481(dr34);
  L481(ux3):
    nx6 = ld nx;
    check L483() else D117();
  D117():
    deopt 448 [ux3, nx6];
  D118():
    deopt 450 [dx42, ux4];
  L482():
    dx41 = getTryDispatchBuiltinValue(dr34);
    goto L91(dx41);
  L483():
    nx7 = force? nx6;
    __11 = ldf `[` in base;
    r208 = dyn __11(ux3, nx7);
    goto L91(r208);
  L484():
    ux5 = force? ux4;
    checkMissing(ux5);
    c95 = `is.object`(ux5);
    if c95 then L485() else L486(dx42, ux5);
  L92(dx47, dx48):
    r210 = `-`(dx47, dx48);
    st `r.ux` = r210;
    ux8 = ld ux;
    check L488() else D119();
  L485():
    dr36 = tryDispatchBuiltin.1("[", ux5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L487() else L486(dx42, dr36);
  L486(dx44, ux7):
    __12 = ldf `[` in base;
    r209 = dyn __12(ux7, 1);
    goto L92(dx44, r209);
  D119():
    deopt 457 [ux8];
  L487():
    dx46 = getTryDispatchBuiltinValue(dr36);
    goto L92(dx42, dx46);
  L488():
    ux9 = force? ux8;
    checkMissing(ux9);
    ux10 = ld ux;
    check L489() else D120();
  D120():
    deopt 458 [ux9, ux10];
  L489():
    ux11 = force? ux10;
    checkMissing(ux11);
    c96 = `is.object`(ux11);
    if c96 then L490() else L491(ux9, ux11);
  L93(ux17, dx50):
    r212 = `-`(ux17, dx50);
    r_ux = ld `r.ux`;
    check L493() else D121();
  L490():
    dr38 = tryDispatchBuiltin.1("[", ux11);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L492() else L491(ux9, dr38);
  L491(ux14, ux15):
    __13 = ldf `[` in base;
    r211 = dyn __13(ux15, 1);
    goto L93(ux14, r211);
  D121():
    deopt 463 [r212, r_ux];
  L492():
    dx49 = getTryDispatchBuiltinValue(dr38);
    goto L93(ux9, dx49);
  L493():
    r_ux1 = force? r_ux;
    checkMissing(r_ux1);
    r213 = `/`(r212, r_ux1);
    st xbar = r213;
    sym29 = ldf `is.numeric`;
    base29 = ldf `is.numeric` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L494() else L495();
  L94(r215):
    c97 = `as.logical`(r215);
    if c97 then L498() else L95();
  L494():
    all_knots1 = ld `all.knots`;
    check L496() else D122();
  L495():
    r214 = dyn base29(<sym all.knots>);
    goto L94(r214);
  D122():
    deopt 469 [all_knots1];
  L95():
    all_knots17 = ld `all.knots`;
    check L544() else D140();
  L112():
    nknots20 = ld nknots;
    check L613() else D170();
  L496():
    all_knots2 = force? all_knots1;
    checkMissing(all_knots2);
    is_numeric2 = ldf `is.numeric` in base;
    r216 = dyn is_numeric2(all_knots2);
    check L497() else D123();
  L498():
    is_unsorted1 = ldf `is.unsorted`;
    check L499() else D124();
  D123():
    deopt 472 [r216];
  D124():
    deopt 474 [];
  D140():
    deopt 542 [all_knots17];
  D170():
    deopt 642 [nknots20];
  L497():
    goto L94(r216);
  L499():
    p26 = prom<V +>{
      all_knots3 = ld `all.knots`;
      all_knots4 = force? all_knots3;
      checkMissing(all_knots4);
      return all_knots4;
    };
    r218 = dyn is_unsorted1[, strictly](p26, TRUE);
    check L500() else D125();
  L544():
    all_knots18 = force? all_knots17;
    checkMissing(all_knots18);
    c124 = `as.logical`(all_knots18);
    if c124 then L545() else L113();
  L613():
    nknots21 = force? nknots20;
    checkMissing(nknots21);
    r294 = `+`(nknots21, 2);
    st nk = r294;
    sym45 = ldf missing;
    base45 = ldf missing in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L614() else L615();
  D125():
    deopt 478 [r218];
  L113():
    sym38 = ldf `is.null`;
    base38 = ldf `is.null` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L559() else L560();
  L119():
    sym41 = ldf c;
    base41 = ldf c in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L593() else L594();
  L135(r296):
    r298 = `!`(r296);
    st `spar.is.lambda` = r298;
    sym46 = ldf missing;
    base46 = ldf missing in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L616() else L617();
  L500():
    c98 = `as.logical`(r218);
    if c98 then L501() else L96();
  L545():
    sym36 = ldf missing;
    base36 = ldf missing in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L546() else L547();
  L614():
    missing3 = ldf missing in base;
    r297 = dyn missing3(<sym lambda>);
    goto L135(r297);
  L615():
    r295 = dyn base45(<sym lambda>);
    goto L135(r295);
  L96():
    goto L97();
  L97():
    sym30 = ldf missing;
    base30 = ldf missing in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L505() else L506();
  L114(r254):
    r256 = `!`(r254);
    c125 = `as.logical`(r256);
    if c125 then L548() else L115(c125);
  L120(r263):
    c137 = `as.logical`(r263);
    if c137 then L562() else L121();
  L129(r282):
    st knot = r282;
    goto L112();
  L136(r300):
    r302 = `!`(r300);
    st `spar.is.lambda` = r302;
    c145 = `as.logical`(r302);
    if c145 then L618() else L137();
  L501():
    stop10 = ldf stop;
    check L502() else D126();
  L546():
    missing2 = ldf missing in base;
    r255 = dyn missing2(<sym nknots>);
    goto L114(r255);
  L547():
    r253 = dyn base36(<sym nknots>);
    goto L114(r253);
  L559():
    nknots7 = ld nknots;
    check L561() else D145();
  L560():
    r262 = dyn base38(<sym nknots>);
    goto L120(r262);
  L593():
    sym42 = ldf rep;
    base42 = ldf rep in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L595() else L596();
  L594():
    r281 = dyn base41(<lang rep(`[`(xbar, 1.0), 3.0)>, <lang if(all.knots, xbar, `[`(xbar, seq.int(1.0, nx, length.out=nknots)))>, <lang rep(`[`(xbar, nx), 3.0)>);
    goto L129(r281);
  L616():
    missing4 = ldf missing in base;
    r301 = dyn missing4(<sym lambda>);
    goto L136(r301);
  L617():
    r299 = dyn base46(<sym lambda>);
    goto L136(r299);
  D126():
    deopt 480 [];
  D145():
    deopt 564 [nknots7];
  L98(r222):
    r224 = `!`(r222);
    c99 = `as.logical`(r224);
    if c99 then L507() else L99(c99);
  L115(c127):
    c135 = `as.logical`(c127);
    if c135 then L553() else L117();
  L121():
    sym39 = ldf `is.function`;
    base39 = ldf `is.function` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L566() else L567();
  L130(r284):
    all_knots19 = ld `all.knots`;
    check L597() else D163();
  L137():
    sym48 = ldf `is.null`;
    base48 = ldf `is.null` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L626() else L627();
  L141():
    spar_is_lambda = ld `spar.is.lambda`;
    check L642() else D175();
  L502():
    r219 = dyn stop10("Numeric 'all.knots' must be strictly increasing");
    check L503() else D127();
  L505():
    missing1 = ldf missing in base;
    r223 = dyn missing1(<sym nknots>);
    goto L98(r223);
  L506():
    r221 = dyn base30(<sym nknots>);
    goto L98(r221);
  L548():
    sym37 = ldf `is.null`;
    base37 = ldf `is.null` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L549() else L550();
  L561():
    nknots8 = force? nknots7;
    checkMissing(nknots8);
    c136 = `==`(nknots8, NULL);
    goto L120(c136);
  L562():
    _nknots_smspl2 = ldf `.nknots.smspl`;
    check L563() else D146();
  L595():
    rep2 = ldf rep in base;
    r285 = dyn rep2(<lang `[`(xbar, 1.0)>, 3.0);
    goto L130(r285);
  L596():
    r283 = dyn base42(<lang `[`(xbar, 1.0)>, 3.0);
    goto L130(r283);
  L618():
    sym47 = ldf missing;
    base47 = ldf missing in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L619() else L620();
  D127():
    deopt 482 [r219];
  D146():
    deopt 568 [];
  D163():
    deopt 619 [all_knots19];
  D175():
    deopt 688 [spar_is_lambda];
  L99(c101):
    c109 = `as.logical`(c101);
    if c109 then L512() else L101();
  L116(c130, r258):
    r259 = `!`(r258);
    c132 = `as.logical`(r259);
    c133 = `&&`(c130, c132);
    goto L115(c133);
  L117():
    goto L118();
  L118():
    nx8 = ld nx;
    check L557() else D144();
  L122(r267):
    c138 = `as.logical`(r267);
    if c138 then L570() else L123();
  L138(r304):
    r306 = `!`(r304);
    c146 = `as.logical`(r306);
    if c146 then L621() else L139();
  L142(r311):
    c148 = `as.logical`(r311);
    if c148 then L143(c148) else L629();
  L503():
    goto L97();
  L507():
    sym31 = ldf `is.null`;
    base31 = ldf `is.null` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L508() else L509();
  L549():
    nknots5 = ld nknots;
    check L551() else D141();
  L550():
    r257 = dyn base37(<sym nknots>);
    goto L116(c125, r257);
  L553():
    warning2 = ldf warning;
    check L554() else D142();
  L563():
    p27 = prom<V +>{
      nx11 = ld nx;
      nx12 = force? nx11;
      checkMissing(nx12);
      return nx12;
    };
    r265 = dyn _nknots_smspl2(p27);
    check L564() else D147();
  L566():
    nknots9 = ld nknots;
    check L568() else D148();
  L567():
    r266 = dyn base39(<sym nknots>);
    goto L122(r266);
  L597():
    all_knots20 = force? all_knots19;
    checkMissing(all_knots20);
    c142 = `as.logical`(all_knots20);
    if c142 then L598() else L131();
  L619():
    missing5 = ldf missing in base;
    r305 = dyn missing5(<sym spar>);
    goto L138(r305);
  L620():
    r303 = dyn base47(<sym spar>);
    goto L138(r303);
  L626():
    spar1 = ld spar;
    check L628() else D173();
  L627():
    r310 = dyn base48(<sym spar>);
    goto L142(r310);
  L642():
    spar_is_lambda1 = force? spar_is_lambda;
    checkMissing(spar_is_lambda1);
    c160 = `as.logical`(spar_is_lambda1);
    if c160 then L643() else L149();
  D141():
    deopt 549 [c125, nknots5];
  D142():
    deopt 555 [];
  D144():
    deopt 560 [nx8];
  D147():
    deopt 570 [r265];
  D148():
    deopt 574 [nknots9];
  D173():
    deopt 671 [spar1];
  L100(c104, r226):
    r227 = `!`(r226);
    c106 = `as.logical`(r227);
    c107 = `&&`(c104, c106);
    goto L99(c107);
  L101():
    goto L102();
  L102():
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L516() else L517();
  L123():
    sym40 = ldf `is.numeric`;
    base40 = ldf `is.numeric` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L574() else L575();
  L124():
    nknots14 = ld nknots;
    check L582() else D156();
  L131():
    xbar3 = ld xbar;
    check L601() else D165();
  L132(xbar2):
    sym44 = ldf rep;
    base44 = ldf rep in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L610() else L611();
  L139():
    goto L140();
  L140():
    st ispar = 1;
    goto L141();
  L143(c149):
    c157 = `as.logical`(c149);
    if c157 then L633() else L145();
  L149():
    ispar = ld ispar;
    check L649() else D178();
  L151(r321):
    st spar = r321;
    sym52 = ldf length;
    base52 = ldf length in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L658() else L659();
  L508():
    nknots1 = ld nknots;
    check L510() else D128();
  L509():
    r225 = dyn base31(<sym nknots>);
    goto L100(c99, r225);
  L512():
    warning1 = ldf warning;
    check L513() else D129();
  L551():
    nknots6 = force? nknots5;
    checkMissing(nknots6);
    c131 = `==`(nknots6, NULL);
    goto L116(c125, c131);
  L554():
    r260 = dyn warning2("'all.knots' is TRUE; 'nknots' specification is disregarded");
    check L555() else D143();
  L557():
    nx9 = force? nx8;
    checkMissing(nx9);
    st nknots = nx9;
    goto L119();
  L564():
    st nknots = r265;
    goto L119();
  L568():
    nknots10 = force? nknots9;
    checkMissing(nknots10);
    is_function = ldf `is.function` in base;
    r268 = dyn is_function(nknots10);
    check L569() else D149();
  L570():
    nknots11 = ldf nknots;
    check L571() else D150();
  L598():
    xbar = ld xbar;
    check L599() else D164();
  L621():
    stop15 = ldf stop;
    check L622() else D171();
  L628():
    spar2 = force? spar1;
    checkMissing(spar2);
    c147 = `==`(spar2, NULL);
    goto L142(c147);
  L629():
    sym49 = ldf missing;
    base49 = ldf missing in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L630() else L631();
  L643():
    sym50 = ldf `as.double`;
    base50 = ldf `as.double` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L644() else L645();
  D128():
    deopt 490 [c99, nknots1];
  D129():
    deopt 496 [];
  D143():
    deopt 557 [r260];
  D149():
    deopt 577 [r268];
  D150():
    deopt 579 [];
  D156():
    deopt 596 [nknots14];
  D164():
    deopt 621 [xbar];
  D165():
    deopt 623 [xbar3];
  D171():
    deopt 662 [];
  D178():
    deopt 696 [ispar];
  L103(r231):
    st nknots = r231;
    all_knots7 = ld `all.knots`;
    check L520() else D133();
  L125(r273):
    r275 = `!`(r273);
    c139 = `as.logical`(r275);
    if c139 then L578() else L126();
  L134(r291):
    c144 = ldf c in base;
    r293 = dyn c144(r284, xbar2, r291);
    check L612() else D169();
  L144(c153, r313):
    c154 = `as.logical`(r313);
    c155 = `||`(c153, c154);
    goto L143(c155);
  L145():
    goto L148(1);
  L148(r317):
    st ispar = r317;
    goto L141();
  L150(r319):
    goto L151(r319);
  L154(r328):
    r330 = `!=`(r328, 1.0);
    c162 = `as.logical`(r330);
    if c162 then L662() else L155();
  L510():
    nknots2 = force? nknots1;
    checkMissing(nknots2);
    c105 = `==`(nknots2, NULL);
    goto L100(c99, c105);
  L513():
    r228 = dyn warning1("'all.knots' is vector of knots; 'nknots' specification is disregarded");
    check L514() else D130();
  L516():
    all_knots5 = ld `all.knots`;
    check L518() else D131();
  L517():
    r230 = dyn base32(<sym all.knots>);
    goto L103(r230);
  L555():
    goto L118();
  L569():
    goto L122(r268);
  L571():
    p28 = prom<V +>{
      nx13 = ld nx;
      nx14 = force? nx13;
      checkMissing(nx14);
      return nx14;
    };
    r270 = dyn nknots11(p28);
    check L572() else D151();
  L574():
    nknots12 = ld nknots;
    check L576() else D152();
  L575():
    r272 = dyn base40(<sym nknots>);
    goto L125(r272);
  L582():
    nknots15 = force? nknots14;
    checkMissing(nknots15);
    r277 = `<`(nknots15, 1.0);
    c140 = `as.logical`(r277);
    if c140 then L583() else L127();
  L599():
    xbar1 = force? xbar;
    checkMissing(xbar1);
    goto L132(xbar1);
  L601():
    xbar4 = force? xbar3;
    checkMissing(xbar4);
    c143 = `is.object`(xbar4);
    if c143 then L602() else L603(xbar4);
  L610():
    rep3 = ldf rep in base;
    r292 = dyn rep3(<lang `[`(xbar, nx)>, 3.0);
    goto L134(r292);
  L611():
    r290 = dyn base44(<lang `[`(xbar, nx)>, 3.0);
    goto L134(r290);
  L622():
    r307 = dyn stop15("must not specify both 'spar' and 'lambda'");
    check L623() else D172();
  L630():
    missing6 = ldf missing in base;
    r314 = dyn missing6(<sym spar>);
    goto L144(c148, r314);
  L631():
    r312 = dyn base49(<sym spar>);
    goto L144(c148, r312);
  L633():
    contr_sp16 = ld `contr.sp`;
    check L634() else D174();
  L644():
    lambda1 = ld lambda;
    check L646() else D176();
  L645():
    r318 = dyn base50(<sym lambda>);
    goto L150(r318);
  L649():
    ispar1 = force? ispar;
    checkMissing(ispar1);
    r322 = `==`(ispar1, 1);
    c161 = `as.logical`(r322);
    if c161 then L650() else L152();
  L658():
    spar5 = ld spar;
    check L660() else D183();
  L659():
    r327 = dyn base52(<sym spar>);
    goto L154(r327);
  D130():
    deopt 498 [r228];
  D131():
    deopt 503 [all_knots5];
  D133():
    deopt 509 [0.0, all_knots7];
  D151():
    deopt 581 [r270];
  D152():
    deopt 585 [nknots12];
  D169():
    deopt 640 [r293];
  D172():
    deopt 664 [r307];
  D174():
    deopt 678 [contr_sp16];
  D176():
    deopt 692 [lambda1];
  D183():
    deopt 713 [spar5];
  L126():
    goto L124();
  L127():
    nknots16 = ld nknots;
    check L587() else D159();
  L152():
    double = ldf double;
    check L656() else D181();
  L155():
    goto L156();
  L156():
    sym53 = ldf `is.na`;
    base53 = ldf `is.na` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L666() else L667();
  L514():
    goto L102();
  L518():
    all_knots6 = force? all_knots5;
    checkMissing(all_knots6);
    length4 = ldf length in base;
    r232 = dyn length4(all_knots6);
    check L519() else D132();
  L520():
    all_knots8 = force? all_knots7;
    checkMissing(all_knots8);
    c110 = `is.object`(all_knots8);
    if c110 then L521() else L522(0.0, all_knots8);
  L572():
    st nknots = r270;
    goto L124();
  L576():
    nknots13 = force? nknots12;
    checkMissing(nknots13);
    is_numeric3 = ldf `is.numeric` in base;
    r274 = dyn is_numeric3(nknots13);
    check L577() else D153();
  L578():
    stop12 = ldf stop;
    check L579() else D154();
  L583():
    stop13 = ldf stop;
    check L584() else D157();
  L602():
    dr44 = tryDispatchBuiltin.1("[", xbar4);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L604() else L603(dr44);
  L603(xbar6):
    sym43 = ldf `seq.int`;
    base43 = ldf `seq.int` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L605() else L606();
  L612():
    goto L129(r293);
  L623():
    goto L140();
  L634():
    contr_sp17 = force? contr_sp16;
    checkMissing(contr_sp17);
    c158 = `is.object`(contr_sp17);
    if c158 then L636() else L637(contr_sp17);
  L646():
    lambda2 = force? lambda1;
    checkMissing(lambda2);
    as_double = ldf `as.double` in base;
    r320 = dyn as_double(lambda2);
    check L647() else D177();
  L650():
    sym51 = ldf `as.double`;
    base51 = ldf `as.double` in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L651() else L652();
  L660():
    spar6 = force? spar5;
    checkMissing(spar6);
    length5 = ldf length in base;
    r329 = dyn length5(spar6);
    check L661() else D184();
  L662():
    stop16 = ldf stop;
    check L663() else D185();
  D132():
    deopt 506 [r232];
  D153():
    deopt 588 [r274];
  D154():
    deopt 591 [];
  D157():
    deopt 601 [];
  D159():
    deopt 604 [nknots16];
  D177():
    deopt 695 [r320];
  D181():
    deopt 707 [];
  D184():
    deopt 716 [r329];
  D185():
    deopt 720 [];
  L104(r236, dx52):
    r238 = `<`(r236, dx52);
    c111 = `as.logical`(r238);
    if c111 then L105(c111) else L524();
  L133(xbar9, r287):
    __16 = ldf `[` in base;
    r289 = dyn __16(xbar9, r287);
    goto L132(r289);
  L153(r324):
    goto L151(r324);
  L157(r334):
    c163 = `as.logical`(r334);
    if c163 then L670() else L158();
  L519():
    goto L103(r232);
  L521():
    dr40 = tryDispatchBuiltin.1("[", all_knots8);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L523() else L522(0.0, dr40);
  L522(r234, all_knots10):
    __14 = ldf `[` in base;
    r237 = dyn __14(all_knots10, 1.0);
    goto L104(r234, r237);
  L577():
    goto L125(r274);
  L579():
    r276 = dyn stop12("'nknots' must be numeric (in {1,..,n})");
    check L580() else D155();
  L584():
    r278 = dyn stop13("'nknots' must be at least 1");
    check L585() else D158();
  L587():
    nknots17 = force? nknots16;
    checkMissing(nknots17);
    nx15 = ld nx;
    check L588() else D160();
  L604():
    dx55 = getTryDispatchBuiltinValue(dr44);
    goto L132(dx55);
  L605():
    nx17 = ld nx;
    check L607() else D166();
  L606():
    r286 = dyn base43[, , `length.out`](1.0, <sym nx>, <sym nknots>);
    goto L133(xbar6, r286);
  L635(dx57):
    c159 = `as.logical`(dx57);
    if c159 then L639() else L146();
  L636():
    dr46 = tryDispatchBuiltin.1("$", contr_sp17);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L638() else L637(dr46);
  L637(contr_sp19):
    r315 = `$`(contr_sp19, <sym trace>);
    goto L635(r315);
  L647():
    goto L150(r320);
  L651():
    spar3 = ld spar;
    check L653() else D179();
  L652():
    r323 = dyn base51(<sym spar>);
    goto L153(r323);
  L656():
    r326 = dyn double(1.0);
    check L657() else D182();
  L661():
    goto L154(r329);
  L663():
    r331 = dyn stop16("'spar' must be of length 1");
    check L664() else D186();
  L666():
    cv7 = ld cv;
    check L668() else D187();
  L667():
    r333 = dyn base53(<sym cv>);
    goto L157(r333);
  D155():
    deopt 593 [r276];
  D158():
    deopt 603 [r278];
  D160():
    deopt 605 [nknots17, nx15];
  D166():
    deopt 628 [xbar6, nx17];
  D179():
    deopt 702 [spar3];
  D182():
    deopt 709 [r326];
  D186():
    deopt 722 [r331];
  D187():
    deopt 727 [cv7];
  L105(c112):
    c122 = `as.logical`(c112);
    if c122 then L531() else L107();
  L146():
    goto L147(0);
  L147(r316):
    goto L148(r316);
  L158():
    cv9 = ld cv;
    check L672() else D189();
  L159(r336):
    st icrit = r336;
    df_offset1 = ld `df.offset`;
    check L675() else D190();
  L523():
    dx51 = getTryDispatchBuiltinValue(dr40);
    goto L104(0.0, dx51);
  L524():
    all_knots11 = ld `all.knots`;
    check L525() else D134();
  L580():
    goto L124();
  L585():
    goto L119();
  L588():
    nx16 = force? nx15;
    checkMissing(nx16);
    r279 = `>`(nknots17, nx16);
    c141 = `as.logical`(r279);
    if c141 then L589() else L128();
  L607():
    nx18 = force? nx17;
    checkMissing(nx18);
    nknots18 = ld nknots;
    check L608() else D167();
  L638():
    dx56 = getTryDispatchBuiltinValue(dr46);
    goto L635(dx56);
  L639():
    goto L147(-1);
  L653():
    spar4 = force? spar3;
    checkMissing(spar4);
    as_double1 = ldf `as.double` in base;
    r325 = dyn as_double1(spar4);
    check L654() else D180();
  L657():
    goto L151(r326);
  L664():
    goto L156();
  L668():
    cv8 = force? cv7;
    checkMissing(cv8);
    is_na3 = ldf `is.na` in base;
    r335 = dyn is_na3(cv8);
    check L669() else D188();
  L670():
    goto L159(0);
  D134():
    deopt 515 [c111, all_knots11];
  D167():
    deopt 630 [xbar6, nknots18];
  D180():
    deopt 705 [r325];
  D188():
    deopt 730 [r335];
  D189():
    deopt 733 [cv9];
  D190():
    deopt 740 [df_offset1];
  L107():
    goto L108();
  L108():
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L535() else L536();
  L128():
    goto L119();
  L525():
    all_knots12 = force? all_knots11;
    checkMissing(all_knots12);
    c114 = `is.object`(all_knots12);
    if c114 then L526() else L527(c111, all_knots12);
  L531():
    stop11 = ldf stop;
    check L532() else D136();
  L589():
    stop14 = ldf stop;
    check L590() else D161();
  L608():
    nknots19 = force? nknots18;
    checkMissing(nknots19);
    seq_int = ldf `seq.int` in base;
    r288 = dyn seq_int(1.0, nx18, nknots19);
    check L609() else D168();
  L654():
    goto L153(r325);
  L669():
    goto L157(r335);
  L672():
    cv10 = force? cv9;
    checkMissing(cv10);
    c164 = `as.logical`(cv10);
    if c164 then L673() else L160();
  L675():
    df_offset2 = force? df_offset1;
    checkMissing(df_offset2);
    st dofoff = df_offset2;
    sym54 = ldf missing;
    base54 = ldf missing in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L676() else L677();
  D136():
    deopt 524 [];
  D161():
    deopt 609 [];
  D168():
    deopt 634 [xbar6, r288];
  L106(c118, dx54):
    r240 = `<`(dx54, 1.0);
    c119 = `as.logical`(r240);
    c120 = `||`(c118, c119);
    goto L105(c120);
  L109(r244):
    st knot = r244;
    goto L112();
  L160():
    goto L159(1);
  L161(r338):
    r340 = `!`(r338);
    c165 = `as.logical`(r340);
    if c165 then L678() else L162();
  L526():
    dr42 = tryDispatchBuiltin.1("[", all_knots12);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L528() else L527(c111, dr42);
  L527(c116, all_knots14):
    nknots3 = ld nknots;
    check L529() else D135();
  L532():
    r241 = dyn stop11("numeric 'all.knots' must cover [0,1] (= the transformed data-range)");
    check L533() else D137();
  L535():
    sym34 = ldf rep;
    base34 = ldf rep in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L537() else L538();
  L536():
    r243 = dyn base33(<lang rep(`[`(all.knots, 1.0), 3.0)>, <sym all.knots>, <lang rep(`[`(all.knots, nknots), 3.0)>);
    goto L109(r243);
  L590():
    r280 = dyn stop14("cannot use more inner knots than unique 'x' values");
    check L591() else D162();
  L609():
    goto L133(xbar6, r288);
  L673():
    goto L159(2);
  L676():
    missing7 = ldf missing in base;
    r339 = dyn missing7(<sym df>);
    goto L161(r339);
  L677():
    r337 = dyn base54(<sym df>);
    goto L161(r337);
  D135():
    deopt 517 [c116, all_knots14, nknots3];
  D137():
    deopt 526 [r241];
  D162():
    deopt 611 [r280];
  L110(r246):
    all_knots15 = ld `all.knots`;
    check L539() else D138();
  L162():
    goto L166();
  L166():
    sym55 = ldf c;
    base55 = ldf c in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L690() else L691();
  L528():
    dx53 = getTryDispatchBuiltinValue(dr42);
    goto L106(c111, dx53);
  L529():
    nknots4 = force? nknots3;
    __15 = ldf `[` in base;
    r239 = dyn __15(all_knots14, nknots4);
    goto L106(c116, r239);
  L533():
    goto L108();
  L537():
    rep = ldf rep in base;
    r247 = dyn rep(<lang `[`(all.knots, 1.0)>, 3.0);
    goto L110(r247);
  L538():
    r245 = dyn base34(<lang `[`(all.knots, 1.0)>, 3.0);
    goto L110(r245);
  L591():
    goto L119();
  L678():
    df1 = ld df;
    check L679() else D191();
  D138():
    deopt 534 [all_knots15];
  D191():
    deopt 747 [df1];
  L167(r346):
    st iparms = r346;
    sym57 = ldf c;
    base57 = ldf c in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L704() else L705();
  L539():
    all_knots16 = force? all_knots15;
    checkMissing(all_knots16);
    sym35 = ldf rep;
    base35 = ldf rep in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L540() else L541();
  L679():
    df2 = force? df1;
    checkMissing(df2);
    r341 = `>`(df2, 1.0);
    c166 = `as.logical`(r341);
    if c166 then L680() else L163(c166);
  L690():
    icrit = ld icrit;
    check L692() else D197();
  L691():
    r345 = dyn base55[icrit, ispar, iter, ](<sym icrit>, <sym ispar>, <lang as.integer(`$`(contr.sp, maxit))>, <sym spar.is.lambda>);
    goto L167(r345);
  D197():
    deopt 771 [icrit];
  L111(r249):
    c123 = ldf c in base;
    r251 = dyn c123(r246, all_knots16, r249);
    check L542() else D139();
  L163(c168):
    c172 = `as.logical`(c168);
    if c172 then L684() else L164();
  L169(r353):
    st `ans.names` = r353;
    sym58 = ldf `.Fortran`;
    base58 = ldf `.Fortran` in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L710() else L711();
  L540():
    rep1 = ldf rep in base;
    r250 = dyn rep1(<lang `[`(all.knots, nknots)>, 3.0);
    goto L111(r250);
  L541():
    r248 = dyn base35(<lang `[`(all.knots, nknots)>, 3.0);
    goto L111(r248);
  L680():
    df3 = ld df;
    check L681() else D192();
  L692():
    icrit1 = force? icrit;
    checkMissing(icrit1);
    ispar2 = ld ispar;
    check L693() else D198();
  L704():
    keep_stuff3 = ld `keep.stuff`;
    check L706() else D203();
  L705():
    r352 = dyn base57("coef", "ty", "lev", "spar", "parms", "crit", "iparms", "ier", <lang if(keep.stuff, "scratch")>);
    goto L169(r352);
  D139():
    deopt 540 [r251];
  D192():
    deopt 751 [c166, df3];
  D198():
    deopt 774 [ispar2];
  D203():
    deopt 800 [keep_stuff3];
  L164():
    warning3 = ldf warning;
    check L687() else D195();
  L165(df7):
    goto L166();
  L172(r357):
    c179 = `is.object`(r357);
    if c179 then L769() else L770(r357);
  L542():
    goto L109(r251);
  L681():
    df4 = force? df3;
    checkMissing(df4);
    nx19 = ld nx;
    check L682() else D193();
  L684():
    st icrit = 3;
    df5 = ld df;
    check L685() else D194();
  L693():
    ispar3 = force? ispar2;
    checkMissing(ispar3);
    sym56 = ldf `as.integer`;
    base56 = ldf `as.integer` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L694() else L695();
  L706():
    keep_stuff4 = force? keep_stuff3;
    checkMissing(keep_stuff4);
    c175 = `as.logical`(keep_stuff4);
    if c175 then L707() else L170();
  L710():
    C_rbart = ld C_rbart;
    check L712() else D205();
  L711():
    r356 = dyn base58[, , , x, y, w, ssw, , , , coef, ty, lev, crit, iparms, spar, parms, scratch, ld4, ldnk, ier](<sym C_rbart>, <lang as.double(penalty)>, <lang as.double(dofoff)>, <lang as.double(xbar)>, <lang as.double(ybar)>, <lang as.double(wbar)>, <lang as.double(yssw)>, <lang as.integer(nx)>, <lang as.double(knot)>, <lang as.integer(nk)>, <lang double(nk)>, <lang double(nx)>, <lang double(if(is.na(cv), 1, nx))>, <lang double(1.0)>, <sym iparms>, <sym spar>, <lang c(unlist(ctrl.Num), ratio=`-`(1.0))>, <lang double(`+`(`*`(`(`(`+`(17, 1)), nk), 1))>, 4, 1, <lang integer(1)>);
    goto L172(r356);
  D193():
    deopt 752 [c166, df4, nx19];
  D194():
    deopt 759 [df5];
  D195():
    deopt 763 [];
  D205():
    deopt 811 [C_rbart];
  L168(r348):
    spar_is_lambda2 = ld `spar.is.lambda`;
    check L702() else D201();
  L170():
    goto L171(NULL);
  L171(r354):
    c176 = ldf c in base;
    r355 = dyn c176("coef", "ty", "lev", "spar", "parms", "crit", "iparms", "ier", r354);
    check L709() else D204();
  L183(dx61):
    st fit = dx61;
    sym70 = ldf `is.na`;
    base70 = ldf `is.na` in base;
    guard70 = `==`.4(sym70, base70);
    if guard70 then L773() else L774();
  L682():
    nx20 = force? nx19;
    checkMissing(nx20);
    r342 = `<=`(df4, nx20);
    c169 = `as.logical`(r342);
    c170 = `&&`(c166, c169);
    goto L163(c170);
  L685():
    df6 = force? df5;
    checkMissing(df6);
    st dofoff = df6;
    goto L165(df6);
  L687():
    p29 = prom<V +>{
      nx21 = ld nx;
      nx22 = force? nx21;
      checkMissing(nx22);
      return nx22;
    };
    r344 = dyn warning3("not using invalid df; must have 1 < df <= n := #{unique x} = ", p29);
    check L688() else D196();
  L694():
    contr_sp20 = ld `contr.sp`;
    check L696() else D199();
  L695():
    r347 = dyn base56(<lang `$`(contr.sp, maxit)>);
    goto L168(r347);
  L707():
    goto L171("scratch");
  L712():
    C_rbart1 = force? C_rbart;
    checkMissing(C_rbart1);
    sym59 = ldf `as.double`;
    base59 = ldf `as.double` in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L713() else L714();
  L769():
    dr50 = tryDispatchBuiltin.1("[", r357);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L771() else L770(dr50);
  L770(r407):
    ans_names = ld `ans.names`;
    check L772() else D242();
  D196():
    deopt 766 [r344];
  D199():
    deopt 779 [contr_sp20];
  D201():
    deopt 785 [spar_is_lambda2];
  D204():
    deopt 807 [r355];
  D242():
    deopt 925 [r407, ans_names];
  L173(r359):
    sym60 = ldf `as.double`;
    base60 = ldf `as.double` in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L717() else L718();
  L184(r410):
    c180 = `as.logical`(r410);
    if c180 then L777() else L185();
  L688():
    goto L165(r344);
  L696():
    contr_sp21 = force? contr_sp20;
    checkMissing(contr_sp21);
    c173 = `is.object`(contr_sp21);
    if c173 then L698() else L699(contr_sp21);
  L702():
    spar_is_lambda3 = force? spar_is_lambda2;
    checkMissing(spar_is_lambda3);
    c174 = ldf c in base;
    r351 = dyn c174(icrit1, ispar3, r348, spar_is_lambda3);
    check L703() else D202();
  L709():
    goto L169(r355);
  L713():
    penalty1 = ld penalty;
    check L715() else D206();
  L714():
    r358 = dyn base59(<sym penalty>);
    goto L173(r358);
  L771():
    dx60 = getTryDispatchBuiltinValue(dr50);
    goto L183(dx60);
  L772():
    ans_names1 = force? ans_names;
    __17 = ldf `[` in base;
    r408 = dyn __17(r407, ans_names1);
    goto L183(r408);
  L773():
    cv13 = ld cv;
    check L775() else D243();
  L774():
    r409 = dyn base70(<sym cv>);
    goto L184(r409);
  D202():
    deopt 788 [r351];
  D206():
    deopt 815 [penalty1];
  D243():
    deopt 931 [cv13];
  L174(r362):
    sym61 = ldf `as.double`;
    base61 = ldf `as.double` in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L721() else L722();
  L185():
    fit = ld fit;
    check L779() else D245();
  L186():
    fit4 = ld fit;
    check L796() else D252();
  L697(dx59):
    as_integer = ldf `as.integer` in base;
    r350 = dyn as_integer(dx59);
    check L701() else D200();
  L698():
    dr48 = tryDispatchBuiltin.1("$", contr_sp21);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L700() else L699(dr48);
  L699(contr_sp23):
    r349 = `$`(contr_sp23, <sym maxit>);
    goto L697(r349);
  L703():
    goto L167(r351);
  L715():
    penalty2 = force? penalty1;
    checkMissing(penalty2);
    as_double2 = ldf `as.double` in base;
    r360 = dyn as_double2(penalty2);
    check L716() else D207();
  L717():
    dofoff = ld dofoff;
    check L719() else D208();
  L718():
    r361 = dyn base60(<sym dofoff>);
    goto L174(r361);
  L775():
    cv14 = force? cv13;
    checkMissing(cv14);
    is_na5 = ldf `is.na` in base;
    r411 = dyn is_na5(cv14);
    check L776() else D244();
  L777():
    st df = NA_LGL;
    st lev = NA_LGL;
    goto L186();
  D200():
    deopt 783 [r350];
  D207():
    deopt 818 [r360];
  D208():
    deopt 821 [dofoff];
  D244():
    deopt 934 [r411];
  D245():
    deopt 939 [fit];
  D252():
    deopt 962 [fit4];
  L175(r365):
    sym62 = ldf `as.double`;
    base62 = ldf `as.double` in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L725() else L726();
  L700():
    dx58 = getTryDispatchBuiltinValue(dr48);
    goto L697(dx58);
  L701():
    goto L168(r350);
  L716():
    goto L173(r360);
  L719():
    dofoff1 = force? dofoff;
    checkMissing(dofoff1);
    as_double3 = ldf `as.double` in base;
    r363 = dyn as_double3(dofoff1);
    check L720() else D209();
  L721():
    xbar10 = ld xbar;
    check L723() else D210();
  L722():
    r364 = dyn base61(<sym xbar>);
    goto L175(r364);
  L776():
    goto L184(r411);
  L779():
    fit1 = force? fit;
    checkMissing(fit1);
    c181 = `is.object`(fit1);
    if c181 then L781() else L782(fit1);
  L796():
    fit5 = force? fit4;
    checkMissing(fit5);
    c183 = `is.object`(fit5);
    if c183 then L798() else L799(fit5);
  D209():
    deopt 824 [r363];
  D210():
    deopt 827 [xbar10];
  L176(r368):
    sym63 = ldf `as.double`;
    base63 = ldf `as.double` in base;
    guard63 = `==`.4(sym63, base63);
    if guard63 then L729() else L730();
  L720():
    goto L174(r363);
  L723():
    xbar11 = force? xbar10;
    checkMissing(xbar11);
    as_double4 = ldf `as.double` in base;
    r366 = dyn as_double4(xbar11);
    check L724() else D211();
  L725():
    ybar2 = ld ybar;
    check L727() else D212();
  L726():
    r367 = dyn base62(<sym ybar>);
    goto L176(r367);
  L780(dx63):
    st lev = dx63;
    sym71 = ldf sum;
    base71 = ldf sum in base;
    guard71 = `==`.4(sym71, base71);
    if guard71 then L784() else L785();
  L781():
    dr52 = tryDispatchBuiltin.1("$", fit1);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L783() else L782(dr52);
  L782(fit3):
    r413 = `$`(fit3, <sym lev>);
    goto L780(r413);
  L797(dx65):
    r422 = `>`(dx65, 0);
    c184 = `as.logical`(r422);
    if c184 then L801() else L190();
  L798():
    dr54 = tryDispatchBuiltin.1("$", fit5);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L800() else L799(dr54);
  L799(fit7):
    r421 = `$`(fit7, <sym ier>);
    goto L797(r421);
  D211():
    deopt 830 [r366];
  D212():
    deopt 834 [ybar2];
  L177(r371):
    sym64 = ldf `as.double`;
    base64 = ldf `as.double` in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L733() else L734();
  L187(r415):
    st df = r415;
    sym72 = ldf `is.na`;
    base72 = ldf `is.na` in base;
    guard72 = `==`.4(sym72, base72);
    if guard72 then L788() else L789();
  L190():
    goto L198();
  L198():
    sym74 = ldf `is.na`;
    base74 = ldf `is.na` in base;
    guard74 = `==`.4(sym74, base74);
    if guard74 then L831() else L832();
  L724():
    goto L175(r366);
  L727():
    ybar3 = force? ybar2;
    checkMissing(ybar3);
    as_double5 = ldf `as.double` in base;
    r369 = dyn as_double5(ybar3);
    check L728() else D213();
  L729():
    wbar6 = ld wbar;
    check L731() else D214();
  L730():
    r370 = dyn base63(<sym wbar>);
    goto L177(r370);
  L783():
    dx62 = getTryDispatchBuiltinValue(dr52);
    goto L780(dx62);
  L784():
    lev = ld lev;
    check L786() else D246();
  L785():
    r414 = dyn base71(<sym lev>);
    goto L187(r414);
  L800():
    dx64 = getTryDispatchBuiltinValue(dr54);
    goto L797(dx64);
  L801():
    spar_is_lambda4 = ld `spar.is.lambda`;
    check L802() else D253();
  D213():
    deopt 837 [r369];
  D214():
    deopt 841 [wbar6];
  D246():
    deopt 945 [lev];
  D253():
    deopt 967 [spar_is_lambda4];
  L178(r374):
    sym65 = ldf `as.integer`;
    base65 = ldf `as.integer` in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L737() else L738();
  L188(r418):
    c182 = `as.logical`(r418);
    if c182 then L792() else L189();
  L199(r443):
    c196 = `as.logical`(r443);
    if c196 then L835() else L200();
  L728():
    goto L176(r369);
  L731():
    wbar7 = force? wbar6;
    checkMissing(wbar7);
    as_double6 = ldf `as.double` in base;
    r372 = dyn as_double6(wbar7);
    check L732() else D215();
  L733():
    yssw = ld yssw;
    check L735() else D216();
  L734():
    r373 = dyn base64(<sym yssw>);
    goto L178(r373);
  L786():
    lev1 = force? lev;
    checkMissing(lev1);
    sum3 = ldf sum in base;
    r416 = dyn sum3(lev1);
    check L787() else D247();
  L788():
    df9 = ld df;
    check L790() else D248();
  L789():
    r417 = dyn base72(<sym df>);
    goto L188(r417);
  L802():
    spar_is_lambda5 = force? spar_is_lambda4;
    checkMissing(spar_is_lambda5);
    c185 = `as.logical`(spar_is_lambda5);
    if c185 then L803() else L191();
  L831():
    cv15 = ld cv;
    check L833() else D263();
  L832():
    r442 = dyn base74(<sym cv>);
    goto L199(r442);
  D215():
    deopt 844 [r372];
  D216():
    deopt 848 [yssw];
  D247():
    deopt 948 [r416];
  D248():
    deopt 952 [df9];
  D263():
    deopt 1015 [cv15];
  L179(r377):
    sym66 = ldf `as.double`;
    base66 = ldf `as.double` in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L741() else L742();
  L189():
    goto L186();
  L191():
    fit8 = ld fit;
    check L805() else D254();
  L192(r423):
    st offKind = r423;
    paste = ldf paste;
    check L812() else D255();
  L200():
    y9 = ld y;
    check L837() else D265();
  L201(r445):
    st `cv.crit` = r445;
    structure = ldf structure;
    check L885() else D291();
  L732():
    goto L177(r372);
  L735():
    yssw1 = force? yssw;
    checkMissing(yssw1);
    as_double7 = ldf `as.double` in base;
    r375 = dyn as_double7(yssw1);
    check L736() else D217();
  L737():
    nx23 = ld nx;
    check L739() else D218();
  L738():
    r376 = dyn base65(<sym nx>);
    goto L179(r376);
  L787():
    goto L187(r416);
  L790():
    df10 = force? df9;
    checkMissing(df10);
    is_na6 = ldf `is.na` in base;
    r419 = dyn is_na6(df10);
    check L791() else D249();
  L792():
    stop17 = ldf stop;
    check L793() else D250();
  L803():
    goto L192("extreme");
  L833():
    cv16 = force? cv15;
    checkMissing(cv16);
    is_na7 = ldf `is.na` in base;
    r444 = dyn is_na7(cv16);
    check L834() else D264();
  L835():
    goto L201(NA_LGL);
  D217():
    deopt 851 [r375];
  D218():
    deopt 855 [nx23];
  D249():
    deopt 955 [r419];
  D250():
    deopt 957 [];
  D254():
    deopt 971 [fit8];
  D255():
    deopt 983 [];
  D264():
    deopt 1018 [r444];
  D265():
    deopt 1021 [y9];
  D291():
    deopt 1097 [];
  L180(r380):
    sym67 = ldf `as.integer`;
    base67 = ldf `as.integer` in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L745() else L746();
  L736():
    goto L178(r375);
  L739():
    nx24 = force? nx23;
    checkMissing(nx24);
    as_integer1 = ldf `as.integer` in base;
    r378 = dyn as_integer1(nx24);
    check L740() else D219();
  L741():
    knot = ld knot;
    check L743() else D220();
  L742():
    r379 = dyn base66(<sym knot>);
    goto L180(r379);
  L791():
    goto L188(r419);
  L793():
    r420 = dyn stop17("NA lev[]; probably smoothing parameter 'spar' way too large!");
    check L794() else D251();
  L805():
    fit9 = force? fit8;
    checkMissing(fit9);
    c186 = `is.object`(fit9);
    if c186 then L807() else L808(fit9);
  L812():
    p35 = prom<V +>{
      offKind = ld offKind;
      offKind1 = force? offKind;
      checkMissing(offKind1);
      return offKind1;
    };
    r427 = dyn paste("smoothing parameter value too", p35);
    check L813() else D256();
  L834():
    goto L199(r444);
  L837():
    y10 = force? y9;
    checkMissing(y10);
    fit12 = ld fit;
    check L838() else D266();
  L885():
    p45 = prom<V +>{
      sym75 = ldf list;
      base75 = ldf list in base;
      guard75 = `==`.4(sym75, base75);
      if guard75 then L24() else L25();
    L0(r514):
      return r514;
    L24():
      ux18 = ld ux;
      ux19 = force? ux18;
      checkMissing(ux19);
      fit16 = ld fit;
      fit17 = force? fit16;
      checkMissing(fit17);
      c205 = `is.object`(fit17);
      if c205 then L27() else L28(fit17);
    L25():
      r513 = dyn base75[x, y, w, yin, tol, data, `no.weights`, n, lev, cv, `cv.crit`, `pen.crit`, crit, df, spar, ratio, lambda, iparms, auxM, fit, call](<sym ux>, <lang `$`(fit, ty)>, <sym wbar>, <sym ybar>, <sym tol>, <lang if(keep.data, list(x=x, y=y, w=w))>, <sym no.wgts>, <sym n>, <sym lev>, <sym cv>, <sym cv.crit>, <lang sum(`*`(wbar, `^`(`(`(`-`(ybar, `$`(fit, ty))), 2.0)))>, <lang `$`(fit, crit)>, <sym df>, <lang if(spar.is.lambda, NA_LGL, `$`(fit, spar))>, <lang if(spar.is.lambda, NA_LGL, `[[`(`$`(fit, parms), "ratio"))>, <lang `[[`(`$`(fit, parms), "low")>, <lang c(`$`(fit, iparms), errorI=if(`$`(fit, ier), `$`(fit, ier), NA_LGL))>, <lang if(keep.stuff, list(XWy=`[`(`$`(fit, scratch), seq_len(nk)), XWX=`[`(`$`(fit, scratch), `+`(nk, seq_len(`*`(4.0, nk)))), Sigma=`[`(`$`(fit, scratch), `+`(`*`(5.0, nk), seq_len(`*`(4.0, nk)))), R=`[`(`$`(fit, scratch), `+`(`*`(9.0, nk), seq_len(`*`(4.0, nk))))))>, <lang structure(list(knot=knot, nk=nk, min=`[`(ux, 1), range=r.ux, coef=`$`(fit, coef)), class="smooth.spline.fit")>, <lang match.call()>);
      goto L0(r513);
    L26(dx83):
      wbar10 = ld wbar;
      wbar11 = force? wbar10;
      checkMissing(wbar11);
      ybar4 = ld ybar;
      ybar5 = force? ybar4;
      checkMissing(ybar5);
      tol5 = ld tol;
      tol6 = force? tol5;
      checkMissing(tol6);
      keep_data1 = ld `keep.data`;
      keep_data2 = force? keep_data1;
      checkMissing(keep_data2);
      c206 = `as.logical`(keep_data2);
      if c206 then L30() else L1();
    L27():
      dr70 = tryDispatchBuiltin.1("$", fit17);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L29() else L28(dr70);
    L28(fit19):
      r515 = `$`(fit19, <sym ty>);
      goto L26(r515);
    L1():
      goto L3(NULL);
    L3(r519):
      no_wgts6 = ld `no.wgts`;
      no_wgts7 = force? no_wgts6;
      checkMissing(no_wgts7);
      n17 = ld n;
      n18 = force? n17;
      checkMissing(n18);
      lev6 = ld lev;
      lev7 = force? lev6;
      checkMissing(lev7);
      cv19 = ld cv;
      cv20 = force? cv19;
      checkMissing(cv20);
      cv_crit = ld `cv.crit`;
      cv_crit1 = force? cv_crit;
      checkMissing(cv_crit1);
      sym77 = ldf sum;
      base77 = ldf sum in base;
      guard77 = `==`.4(sym77, base77);
      if guard77 then L34() else L35();
    L29():
      dx82 = getTryDispatchBuiltinValue(dr70);
      goto L26(dx82);
    L30():
      sym76 = ldf list;
      base76 = ldf list in base;
      guard76 = `==`.4(sym76, base76);
      if guard76 then L31() else L32();
    L2(r517):
      goto L3(r517);
    L4(r521):
      fit24 = ld fit;
      fit25 = force? fit24;
      checkMissing(fit25);
      c208 = `is.object`(fit25);
      if c208 then L41() else L42(fit25);
    L31():
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      y19 = ld y;
      y20 = force? y19;
      checkMissing(y20);
      w32 = ld w;
      w33 = force? w32;
      checkMissing(w33);
      list2 = ldf list in base;
      r518 = dyn list2(x18, y20, w33);
      goto L2(r518);
    L32():
      r516 = dyn base76[x, y, w](<sym x>, <sym y>, <sym w>);
      goto L2(r516);
    L34():
      wbar12 = ld wbar;
      wbar13 = force? wbar12;
      checkMissing(wbar13);
      ybar6 = ld ybar;
      ybar7 = force? ybar6;
      checkMissing(ybar7);
      fit20 = ld fit;
      fit21 = force? fit20;
      checkMissing(fit21);
      c207 = `is.object`(fit21);
      if c207 then L37() else L38(wbar13, ybar7, fit21);
    L35():
      r520 = dyn base77(<lang `*`(wbar, `^`(`(`(`-`(ybar, `$`(fit, ty))), 2.0))>);
      goto L4(r520);
    L36(wbar17, ybar11, dx85):
      r523 = `-`(ybar11, dx85);
      r524 = `^`(r523, 2.0);
      r525 = `*`(wbar17, r524);
      sum4 = ldf sum in base;
      r526 = dyn sum4(r525);
      goto L4(r526);
    L37():
      dr72 = tryDispatchBuiltin.1("$", fit21);
      dc36 = getTryDispatchBuiltinDispatched(dr72);
      if dc36 then L39() else L38(wbar13, ybar7, dr72);
    L38(wbar15, ybar9, fit23):
      r522 = `$`(fit23, <sym ty>);
      goto L36(wbar15, ybar9, r522);
    L40(dx87):
      df13 = ld df;
      df14 = force? df13;
      checkMissing(df14);
      spar_is_lambda8 = ld `spar.is.lambda`;
      spar_is_lambda9 = force? spar_is_lambda8;
      checkMissing(spar_is_lambda9);
      c209 = `as.logical`(spar_is_lambda9);
      if c209 then L44() else L5();
    L41():
      dr74 = tryDispatchBuiltin.1("$", fit25);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L43() else L42(dr74);
    L42(fit27):
      r527 = `$`(fit27, <sym crit>);
      goto L40(r527);
    L5():
      fit28 = ld fit;
      fit29 = force? fit28;
      checkMissing(fit29);
      c210 = `is.object`(fit29);
      if c210 then L47() else L48(fit29);
    L6(r528):
      spar_is_lambda10 = ld `spar.is.lambda`;
      spar_is_lambda11 = force? spar_is_lambda10;
      checkMissing(spar_is_lambda11);
      c211 = `as.logical`(spar_is_lambda11);
      if c211 then L50() else L7();
    L39():
      dx84 = getTryDispatchBuiltinValue(dr72);
      goto L36(wbar13, ybar7, dx84);
    L43():
      dx86 = getTryDispatchBuiltinValue(dr74);
      goto L40(dx86);
    L44():
      goto L6(NA_LGL);
    L7():
      fit32 = ld fit;
      fit33 = force? fit32;
      checkMissing(fit33);
      c212 = `is.object`(fit33);
      if c212 then L53() else L54(fit33);
    L8(r530):
      fit36 = ld fit;
      fit37 = force? fit36;
      checkMissing(fit37);
      c214 = `is.object`(fit37);
      if c214 then L60() else L61(fit37);
    L46(dx89):
      goto L6(dx89);
    L47():
      dr76 = tryDispatchBuiltin.1("$", fit29);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L49() else L48(dr76);
    L48(fit31):
      r529 = `$`(fit31, <sym spar>);
      goto L46(r529);
    L50():
      goto L8(NA_LGL);
    L49():
      dx88 = getTryDispatchBuiltinValue(dr76);
      goto L46(dx88);
    L52(dx91):
      c213 = `is.object`(dx91);
      if c213 then L56() else L57(dx91);
    L53():
      dr78 = tryDispatchBuiltin.1("$", fit33);
      dc39 = getTryDispatchBuiltinDispatched(dr78);
      if dc39 then L55() else L54(dr78);
    L54(fit35):
      r531 = `$`(fit35, <sym parms>);
      goto L52(r531);
    L59(dx96):
      c215 = `is.object`(dx96);
      if c215 then L63() else L64(dx96);
    L60():
      dr82 = tryDispatchBuiltin.1("$", fit37);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L62() else L61(dr82);
    L61(fit39):
      r533 = `$`(fit39, <sym parms>);
      goto L59(r533);
    L9(dx100):
      sym78 = ldf c;
      base78 = ldf c in base;
      guard78 = `==`.4(sym78, base78);
      if guard78 then L66() else L67();
    L55():
      dx90 = getTryDispatchBuiltinValue(dr78);
      goto L52(dx90);
    L56():
      dr80 = tryDispatchBuiltin.1("[[", dx91);
      dc40 = getTryDispatchBuiltinDispatched(dr80);
      if dc40 then L58() else L57(dr80);
    L57(dx93):
      __21 = ldf `[[` in base;
      r532 = dyn __21(dx93, "ratio");
      goto L8(r532);
    L62():
      dx95 = getTryDispatchBuiltinValue(dr82);
      goto L59(dx95);
    L63():
      dr84 = tryDispatchBuiltin.1("[[", dx96);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L65() else L64(dr84);
    L64(dx98):
      __22 = ldf `[[` in base;
      r534 = dyn __22(dx98, "low");
      goto L9(r534);
    L10(r536):
      keep_stuff5 = ld `keep.stuff`;
      keep_stuff6 = force? keep_stuff5;
      checkMissing(keep_stuff6);
      c221 = `as.logical`(keep_stuff6);
      if c221 then L82() else L13();
    L58():
      dx94 = getTryDispatchBuiltinValue(dr80);
      goto L8(dx94);
    L65():
      dx99 = getTryDispatchBuiltinValue(dr84);
      goto L9(dx99);
    L66():
      fit40 = ld fit;
      fit41 = force? fit40;
      checkMissing(fit41);
      c216 = `is.object`(fit41);
      if c216 then L69() else L70(fit41);
    L67():
      r535 = dyn base78[, errorI](<lang `$`(fit, iparms)>, <lang if(`$`(fit, ier), `$`(fit, ier), NA_LGL)>);
      goto L10(r535);
    L13():
      goto L23(NULL);
    L23(r578):
      structure1 = ldf structure;
      p44 = prom<V +>{
        sym84 = ldf list;
        base84 = ldf list in base;
        guard84 = `==`.4(sym84, base84);
        if guard84 then L2() else L3();
      L0(r580):
        return r580;
      L2():
        knot2 = ld knot;
        knot3 = force? knot2;
        checkMissing(knot3);
        nk23 = ld nk;
        nk24 = force? nk23;
        checkMissing(nk24);
        ux20 = ld ux;
        ux21 = force? ux20;
        checkMissing(ux21);
        c230 = `is.object`(ux21);
        if c230 then L4() else L5(ux21);
      L3():
        r579 = dyn base84[knot, nk, min, range, coef](<sym knot>, <sym nk>, <lang `[`(ux, 1)>, <sym r.ux>, <lang `$`(fit, coef)>);
        goto L0(r579);
      L1(dx145):
        r_ux2 = ld `r.ux`;
        r_ux3 = force? r_ux2;
        checkMissing(r_ux3);
        fit68 = ld fit;
        fit69 = force? fit68;
        checkMissing(fit69);
        c231 = `is.object`(fit69);
        if c231 then L8() else L9(fit69);
      L4():
        dr108 = tryDispatchBuiltin.1("[", ux21);
        dc54 = getTryDispatchBuiltinDispatched(dr108);
        if dc54 then L6() else L5(dr108);
      L5(ux23):
        __27 = ldf `[` in base;
        r581 = dyn __27(ux23, 1);
        goto L1(r581);
      L6():
        dx144 = getTryDispatchBuiltinValue(dr108);
        goto L1(dx144);
      L7(dx147):
        list4 = ldf list in base;
        r583 = dyn list4(knot3, nk24, dx145, r_ux3, dx147);
        goto L0(r583);
      L8():
        dr110 = tryDispatchBuiltin.1("$", fit69);
        dc55 = getTryDispatchBuiltinDispatched(dr110);
        if dc55 then L10() else L9(dr110);
      L9(fit71):
        r582 = `$`(fit71, <sym coef>);
        goto L7(r582);
      L10():
        dx146 = getTryDispatchBuiltinValue(dr110);
        goto L7(dx146);
      };
      r585 = dyn structure1[, class](p44, "smooth.spline.fit");
      match_call = ldf `match.call`;
      r586 = dyn match_call();
      list5 = ldf list in base;
      r587 = dyn list5(ux19, dx83, wbar11, ybar5, tol6, r519, no_wgts7, n18, lev7, cv20, cv_crit1, r521, dx87, df14, r528, r530, dx100, r536, r578, r585, r586);
      goto L0(r587);
    L68(dx102):
      fit44 = ld fit;
      fit45 = force? fit44;
      checkMissing(fit45);
      c217 = `is.object`(fit45);
      if c217 then L73() else L74(fit45);
    L69():
      dr86 = tryDispatchBuiltin.1("$", fit41);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L71() else L70(dr86);
    L70(fit43):
      r537 = `$`(fit43, <sym iparms>);
      goto L68(r537);
    L82():
      sym79 = ldf list;
      base79 = ldf list in base;
      guard79 = `==`.4(sym79, base79);
      if guard79 then L83() else L84();
    L14(r542):
      goto L23(r542);
    L71():
      dx101 = getTryDispatchBuiltinValue(dr86);
      goto L68(dx101);
    L72(dx104):
      c218 = `as.logical`(dx104);
      if c218 then L76() else L11();
    L73():
      dr88 = tryDispatchBuiltin.1("$", fit45);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L75() else L74(dr88);
    L74(fit47):
      r538 = `$`(fit47, <sym ier>);
      goto L72(r538);
    L83():
      fit52 = ld fit;
      fit53 = force? fit52;
      checkMissing(fit53);
      c222 = `is.object`(fit53);
      if c222 then L86() else L87(fit53);
    L84():
      r541 = dyn base79[XWy, XWX, Sigma, R](<lang `[`(`$`(fit, scratch), seq_len(nk))>, <lang `[`(`$`(fit, scratch), `+`(nk, seq_len(`*`(4.0, nk))))>, <lang `[`(`$`(fit, scratch), `+`(`*`(5.0, nk), seq_len(`*`(4.0, nk))))>, <lang `[`(`$`(fit, scratch), `+`(`*`(9.0, nk), seq_len(`*`(4.0, nk))))>);
      goto L14(r541);
    L11():
      goto L12(NA_LGL);
    L12(dx107):
      c220 = ldf c in base;
      r540 = dyn c220(dx102, dx107);
      goto L10(r540);
    L75():
      dx103 = getTryDispatchBuiltinValue(dr88);
      goto L72(dx103);
    L76():
      fit48 = ld fit;
      fit49 = force? fit48;
      checkMissing(fit49);
      c219 = `is.object`(fit49);
      if c219 then L78() else L79(fit49);
    L85(dx109):
      c223 = `is.object`(dx109);
      if c223 then L89() else L90(dx109);
    L86():
      dr92 = tryDispatchBuiltin.1("$", fit53);
      dc46 = getTryDispatchBuiltinDispatched(dr92);
      if dc46 then L88() else L87(dr92);
    L87(fit55):
      r543 = `$`(fit55, <sym scratch>);
      goto L85(r543);
    L15(dx113):
      fit56 = ld fit;
      fit57 = force? fit56;
      checkMissing(fit57);
      c224 = `is.object`(fit57);
      if c224 then L95() else L96(fit57);
    L77(dx106):
      goto L12(dx106);
    L78():
      dr90 = tryDispatchBuiltin.1("$", fit49);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L80() else L79(dr90);
    L79(fit51):
      r539 = `$`(fit51, <sym ier>);
      goto L77(r539);
    L88():
      dx108 = getTryDispatchBuiltinValue(dr92);
      goto L85(dx108);
    L89():
      dr94 = tryDispatchBuiltin.1("[", dx109);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L91() else L90(dr94);
    L90(dx111):
      sym80 = ldf seq_len;
      base80 = ldf seq_len in base;
      guard80 = `==`.4(sym80, base80);
      if guard80 then L92() else L93();
    L16(dx116, r545):
      __23 = ldf `[` in base;
      r547 = dyn __23(dx116, r545);
      goto L15(r547);
    L80():
      dx105 = getTryDispatchBuiltinValue(dr90);
      goto L77(dx105);
    L91():
      dx112 = getTryDispatchBuiltinValue(dr94);
      goto L15(dx112);
    L92():
      nk6 = ld nk;
      nk7 = force? nk6;
      checkMissing(nk7);
      r546 = seq_len(nk7);
      goto L16(dx111, r546);
    L93():
      r544 = dyn base80(<sym nk>);
      goto L16(dx111, r544);
    L94(dx118):
      c225 = `is.object`(dx118);
      if c225 then L98() else L99(dx118);
    L95():
      dr96 = tryDispatchBuiltin.1("$", fit57);
      dc48 = getTryDispatchBuiltinDispatched(dr96);
      if dc48 then L97() else L96(dr96);
    L96(fit59):
      r548 = `$`(fit59, <sym scratch>);
      goto L94(r548);
    L17(dx122):
      fit60 = ld fit;
      fit61 = force? fit60;
      checkMissing(fit61);
      c226 = `is.object`(fit61);
      if c226 then L104() else L105(fit61);
    L97():
      dx117 = getTryDispatchBuiltinValue(dr96);
      goto L94(dx117);
    L98():
      dr98 = tryDispatchBuiltin.1("[", dx118);
      dc49 = getTryDispatchBuiltinDispatched(dr98);
      if dc49 then L100() else L99(dr98);
    L99(dx120):
      nk8 = ld nk;
      nk9 = force? nk8;
      checkMissing(nk9);
      sym81 = ldf seq_len;
      base81 = ldf seq_len in base;
      guard81 = `==`.4(sym81, base81);
      if guard81 then L101() else L102();
    L18(dx125, nk12, r550):
      r553 = `+`(nk12, r550);
      __24 = ldf `[` in base;
      r554 = dyn __24(dx125, r553);
      goto L17(r554);
    L100():
      dx121 = getTryDispatchBuiltinValue(dr98);
      goto L17(dx121);
    L101():
      nk13 = ld nk;
      nk14 = force? nk13;
      checkMissing(nk14);
      r551 = `*`(4.0, nk14);
      r552 = seq_len(r551);
      goto L18(dx120, nk9, r552);
    L102():
      r549 = dyn base81(<lang `*`(4.0, nk)>);
      goto L18(dx120, nk9, r549);
    L103(dx127):
      c227 = `is.object`(dx127);
      if c227 then L107() else L108(dx127);
    L104():
      dr100 = tryDispatchBuiltin.1("$", fit61);
      dc50 = getTryDispatchBuiltinDispatched(dr100);
      if dc50 then L106() else L105(dr100);
    L105(fit63):
      r555 = `$`(fit63, <sym scratch>);
      goto L103(r555);
    L19(dx131):
      fit64 = ld fit;
      fit65 = force? fit64;
      checkMissing(fit65);
      c228 = `is.object`(fit65);
      if c228 then L113() else L114(fit65);
    L106():
      dx126 = getTryDispatchBuiltinValue(dr100);
      goto L103(dx126);
    L107():
      dr102 = tryDispatchBuiltin.1("[", dx127);
      dc51 = getTryDispatchBuiltinDispatched(dr102);
      if dc51 then L109() else L108(dr102);
    L108(dx129):
      nk15 = ld nk;
      nk16 = force? nk15;
      checkMissing(nk16);
      r556 = `*`(5.0, nk16);
      sym82 = ldf seq_len;
      base82 = ldf seq_len in base;
      guard82 = `==`.4(sym82, base82);
      if guard82 then L110() else L111();
    L20(dx134, r560, r561):
      r564 = `+`(r560, r561);
      __25 = ldf `[` in base;
      r565 = dyn __25(dx134, r564);
      goto L19(r565);
    L109():
      dx130 = getTryDispatchBuiltinValue(dr102);
      goto L19(dx130);
    L110():
      nk17 = ld nk;
      nk18 = force? nk17;
      checkMissing(nk18);
      r562 = `*`(4.0, nk18);
      r563 = seq_len(r562);
      goto L20(dx129, r556, r563);
    L111():
      r559 = dyn base82(<lang `*`(4.0, nk)>);
      goto L20(dx129, r556, r559);
    L112(dx136):
      c229 = `is.object`(dx136);
      if c229 then L116() else L117(dx136);
    L113():
      dr104 = tryDispatchBuiltin.1("$", fit65);
      dc52 = getTryDispatchBuiltinDispatched(dr104);
      if dc52 then L115() else L114(dr104);
    L114(fit67):
      r566 = `$`(fit67, <sym scratch>);
      goto L112(r566);
    L21(dx140):
      list3 = ldf list in base;
      r577 = dyn list3(dx113, dx122, dx131, dx140);
      goto L14(r577);
    L115():
      dx135 = getTryDispatchBuiltinValue(dr104);
      goto L112(dx135);
    L116():
      dr106 = tryDispatchBuiltin.1("[", dx136);
      dc53 = getTryDispatchBuiltinDispatched(dr106);
      if dc53 then L118() else L117(dr106);
    L117(dx138):
      nk19 = ld nk;
      nk20 = force? nk19;
      checkMissing(nk20);
      r567 = `*`(9.0, nk20);
      sym83 = ldf seq_len;
      base83 = ldf seq_len in base;
      guard83 = `==`.4(sym83, base83);
      if guard83 then L119() else L120();
    L22(dx143, r571, r572):
      r575 = `+`(r571, r572);
      __26 = ldf `[` in base;
      r576 = dyn __26(dx143, r575);
      goto L21(r576);
    L118():
      dx139 = getTryDispatchBuiltinValue(dr106);
      goto L21(dx139);
    L119():
      nk21 = ld nk;
      nk22 = force? nk21;
      checkMissing(nk22);
      r573 = `*`(4.0, nk22);
      r574 = seq_len(r573);
      goto L22(dx138, r567, r574);
    L120():
      r570 = dyn base83(<lang `*`(4.0, nk)>);
      goto L22(dx138, r567, r570);
    };
    r589 = dyn structure[, class](p45, "smooth.spline");
    check L886() else D292();
  D219():
    deopt 858 [r378];
  D220():
    deopt 861 [knot];
  D251():
    deopt 959 [r420];
  D256():
    deopt 986 [r427];
  D266():
    deopt 1022 [y10, fit12];
  D292():
    deopt 1101 [r589];
  L181(r383):
    double1 = ldf double;
    check L749() else D224();
  L740():
    goto L179(r378);
  L743():
    knot1 = force? knot;
    checkMissing(knot1);
    as_double8 = ldf `as.double` in base;
    r381 = dyn as_double8(knot1);
    check L744() else D221();
  L745():
    nk = ld nk;
    check L747() else D222();
  L746():
    r382 = dyn base67(<sym nk>);
    goto L181(r382);
  L794():
    goto L186();
  L806(dx67):
    r425 = `<`(dx67, 0.5);
    st sml = r425;
    c187 = `as.logical`(r425);
    if c187 then L810() else L193();
  L807():
    dr56 = tryDispatchBuiltin.1("$", fit9);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L809() else L808(dr56);
  L808(fit11):
    r424 = `$`(fit11, <sym spar>);
    goto L806(r424);
  L813():
    st wtxt = r427;
    spar_is_lambda6 = ld `spar.is.lambda`;
    check L814() else D257();
  L838():
    fit13 = force? fit12;
    checkMissing(fit13);
    c197 = `is.object`(fit13);
    if c197 then L840() else L841(y10, fit13);
  L886():
    popenv;
    return r589;
  D221():
    deopt 864 [r381];
  D222():
    deopt 867 [nk];
  D224():
    deopt 872 [];
  D257():
    deopt 988 [spar_is_lambda6];
  L193():
    goto L192("large");
  L744():
    goto L180(r381);
  L747():
    nk1 = force? nk;
    checkMissing(nk1);
    as_integer2 = ldf `as.integer` in base;
    r384 = dyn as_integer2(nk1);
    check L748() else D223();
  L749():
    p30 = prom<V +>{
      nk2 = ld nk;
      nk3 = force? nk2;
      checkMissing(nk3);
      return nk3;
    };
    r386 = dyn double1(p30);
    check L750() else D225();
  L809():
    dx66 = getTryDispatchBuiltinValue(dr56);
    goto L806(dx66);
  L810():
    goto L192("small");
  L814():
    spar_is_lambda7 = force? spar_is_lambda6;
    checkMissing(spar_is_lambda7);
    c188 = `as.logical`(spar_is_lambda7);
    if c188 then L194(c188) else L815();
  L839(y14, dx71):
    c198 = `is.object`(dx71);
    if c198 then L843() else L844(y14, dx71);
  L840():
    dr60 = tryDispatchBuiltin.1("$", fit13);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L842() else L841(y10, dr60);
  L841(y12, fit15):
    r446 = `$`(fit15, <sym ty>);
    goto L839(y12, r446);
  D223():
    deopt 870 [r384];
  D225():
    deopt 874 [r386];
  L194(c189):
    c194 = `as.logical`(c189);
    if c194 then L818() else L195();
  L202(y18, dx75):
    r448 = `-`(y18, dx75);
    st r = r448;
    cv17 = ld cv;
    check L847() else D268();
  L748():
    goto L181(r384);
  L750():
    double2 = ldf double;
    check L751() else D226();
  L815():
    sml = ld sml;
    check L816() else D258();
  L842():
    dx70 = getTryDispatchBuiltinValue(dr60);
    goto L839(y10, dx70);
  L843():
    dr62 = tryDispatchBuiltin.1("[", dx71);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L845() else L844(y14, dr62);
  L844(y16, dx73):
    ox2 = ld ox;
    check L846() else D267();
  D226():
    deopt 877 [];
  D258():
    deopt 990 [c188, sml];
  D267():
    deopt 1025 [y16, dx73, ox2];
  D268():
    deopt 1030 [cv17];
  L195():
    sym73 = ldf rep;
    base73 = ldf rep in base;
    guard73 = `==`.4(sym73, base73);
    if guard73 then L822() else L823();
  L196(r430):
    goto L198();
  L751():
    p31 = prom<V +>{
      nx25 = ld nx;
      nx26 = force? nx25;
      checkMissing(nx26);
      return nx26;
    };
    r388 = dyn double2(p31);
    check L752() else D227();
  L816():
    sml1 = force? sml;
    checkMissing(sml1);
    c191 = `as.logical`(sml1);
    c192 = `||`(c188, c191);
    goto L194(c192);
  L818():
    stop18 = ldf stop;
    check L819() else D259();
  L845():
    dx74 = getTryDispatchBuiltinValue(dr62);
    goto L202(y14, dx74);
  L846():
    ox3 = force? ox2;
    __18 = ldf `[` in base;
    r447 = dyn __18(dx73, ox3);
    goto L202(y16, r447);
  L847():
    cv18 = force? cv17;
    checkMissing(cv18);
    c199 = `as.logical`(cv18);
    if c199 then L848() else L203();
  D227():
    deopt 879 [r388];
  D259():
    deopt 994 [];
  L197(r432):
    l6 = ld fit;
    c195 = `is.object`(l6);
    if c195 then L825() else L826(r432, l6);
  L203():
    no_wgts4 = ld `no.wgts`;
    check L874() else D282();
  L752():
    double3 = ldf double;
    check L753() else D228();
  L819():
    p36 = prom<V +>{
      wtxt = ld wtxt;
      wtxt1 = force? wtxt;
      checkMissing(wtxt1);
      return wtxt1;
    };
    r429 = dyn stop18(p36);
    check L820() else D260();
  L822():
    rep4 = ldf rep in base;
    r433 = dyn rep4(<lang mean(y)>, <sym nx>);
    goto L197(r433);
  L823():
    r431 = dyn base73(<lang mean(y)>, <sym nx>);
    goto L197(r431);
  L848():
    wbar8 = ld wbar;
    check L849() else D269();
  D228():
    deopt 882 [];
  D260():
    deopt 996 [r429];
  D269():
    deopt 1032 [wbar8];
  D282():
    deopt 1072 [no_wgts4];
  L753():
    p32 = prom<V +>{
      sym68 = ldf `is.na`;
      base68 = ldf `is.na` in base;
      guard68 = `==`.4(sym68, base68);
      if guard68 then L2() else L3();
    L0(r390):
      c177 = `as.logical`(r390);
      if c177 then L4() else L1();
    L2():
      cv11 = ld cv;
      cv12 = force? cv11;
      checkMissing(cv12);
      is_na4 = ldf `is.na` in base;
      r391 = dyn is_na4(cv12);
      goto L0(r391);
    L3():
      r389 = dyn base68(<sym cv>);
      goto L0(r389);
    L1():
      nx27 = ld nx;
      nx28 = force? nx27;
      checkMissing(nx28);
      return nx28;
    L4():
      return 1;
    };
    r393 = dyn double3(p32);
    check L754() else D229();
  L820():
    goto L196(r429);
  L824(dx69):
    st fit = dx69;
    st df = 1.0;
    warning4 = ldf warning;
    check L828() else D261();
  L825():
    dr58 = tryDispatchBuiltin.0("$<-", l6, r432);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L827() else L826(r432, dr58);
  L826(r435, l8):
    r438 = `$<-`(l8, <sym ty>, r432);
    goto L824(r438);
  L849():
    wbar9 = force? wbar8;
    checkMissing(wbar9);
    st ww = wbar9;
    l9 = ld ww;
    c200 = `is.object`(l9);
    if c200 then L850() else L851(1.0, l9);
  L874():
    no_wgts5 = force? no_wgts4;
    checkMissing(no_wgts5);
    c204 = `as.logical`(no_wgts5);
    if c204 then L875() else L209();
  D229():
    deopt 884 [r393];
  D261():
    deopt 1007 [];
  L204(dx77):
    st ww = dx77;
    r455 = ld r;
    check L854() else D271();
  L209():
    weighted_mean1 = ldf `weighted.mean`;
    check L879() else D285();
  L210(r500):
    df_offset3 = ld `df.offset`;
    check L881() else D287();
  L754():
    double4 = ldf double;
    check L755() else D230();
  L827():
    dx68 = getTryDispatchBuiltinValue(dr58);
    goto L824(dx68);
  L828():
    p37 = prom<V +>{
      wtxt2 = ld wtxt;
      wtxt3 = force? wtxt2;
      checkMissing(wtxt3);
      return wtxt3;
    };
    r440 = dyn warning4(p37, "\nsetting df = 1  __use with care!__");
    check L829() else D262();
  L850():
    dr64 = tryDispatchBuiltin.0("[<-", l9, 1.0);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L852() else L851(1.0, dr64);
  L851(r450, l11):
    ww = ld ww;
    check L853() else D270();
  L875():
    mean1 = ldf mean;
    check L876() else D283();
  D230():
    deopt 887 [];
  D262():
    deopt 1010 [r440];
  D270():
    deopt 1038 [r450, l11, 1.0, ww];
  D271():
    deopt 1044 [r455];
  D283():
    deopt 1075 [];
  D285():
    deopt 1079 [];
  D287():
    deopt 1083 [r500, 1.0, df_offset3];
  L755():
    r394 = dyn double4(1.0);
    check L756() else D231();
  L829():
    goto L196(r440);
  L852():
    dx76 = getTryDispatchBuiltinValue(dr64);
    goto L204(dx76);
  L853():
    ww1 = force? ww;
    checkMissing(ww1);
    r453 = `==`(ww1, 0.0);
    ___1 = ldf `[<-` in base;
    r454 = dyn ___1(l11, 1.0, r453);
    goto L204(r454);
  L854():
    r456 = force? r455;
    checkMissing(r456);
    lev2 = ld lev;
    check L855() else D272();
  L876():
    p41 = prom<V +>{
      r495 = ld r;
      r496 = force? r495;
      checkMissing(r496);
      r497 = `^`(r496, 2.0);
      return r497;
    };
    r499 = dyn mean1(p41);
    check L877() else D284();
  L879():
    p42 = prom<V +>{
      r501 = ld r;
      r502 = force? r501;
      checkMissing(r502);
      r503 = `^`(r502, 2.0);
      return r503;
    };
    p43 = prom<V +>{
      w30 = ld w;
      w31 = force? w30;
      checkMissing(w31);
      return w31;
    };
    r506 = dyn weighted_mean1(p42, p43);
    check L880() else D286();
  L881():
    df_offset4 = force? df_offset3;
    checkMissing(df_offset4);
    penalty3 = ld penalty;
    check L882() else D288();
  D231():
    deopt 889 [r394];
  D272():
    deopt 1046 [r456, 1.0, lev2];
  D284():
    deopt 1077 [r499];
  D286():
    deopt 1082 [r506];
  D288():
    deopt 1084 [r500, 1.0, df_offset4, penalty3];
  L756():
    iparms = ld iparms;
    check L757() else D232();
  L855():
    lev3 = force? lev2;
    checkMissing(lev3);
    c201 = `is.object`(lev3);
    if c201 then L856() else L857(r456, 1.0, lev3);
  L877():
    goto L210(r499);
  L880():
    goto L210(r506);
  L882():
    penalty4 = force? penalty3;
    checkMissing(penalty4);
    df11 = ld df;
    check L883() else D289();
  D232():
    deopt 891 [iparms];
  D289():
    deopt 1085 [r500, 1.0, df_offset4, penalty4, df11];
  L205(r463, r464, dx79):
    w26 = ld w;
    check L860() else D274();
  L757():
    iparms1 = force? iparms;
    checkMissing(iparms1);
    spar7 = ld spar;
    check L758() else D233();
  L856():
    dr66 = tryDispatchBuiltin.1("[", lev3);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L858() else L857(r456, 1.0, dr66);
  L857(r459, r460, lev5):
    ox4 = ld ox;
    check L859() else D273();
  L883():
    df12 = force? df11;
    checkMissing(df12);
    r507 = `*`(penalty4, df12);
    r508 = `+`(df_offset4, r507);
    n15 = ld n;
    check L884() else D290();
  D233():
    deopt 894 [spar7];
  D273():
    deopt 1048 [r459, r460, lev5, ox4];
  D274():
    deopt 1050 [r463, r464, dx79, w26];
  D290():
    deopt 1088 [r500, 1.0, r508, n15];
  L758():
    spar8 = force? spar7;
    checkMissing(spar8);
    sym69 = ldf c;
    base69 = ldf c in base;
    guard69 = `==`.4(sym69, base69);
    if guard69 then L759() else L760();
  L858():
    dx78 = getTryDispatchBuiltinValue(dr66);
    goto L205(r456, 1.0, dx78);
  L859():
    ox5 = force? ox4;
    __19 = ldf `[` in base;
    r465 = dyn __19(lev5, ox5);
    goto L205(r459, r460, r465);
  L860():
    w27 = force? w26;
    checkMissing(w27);
    r466 = `*`(dx79, w27);
    ww2 = ld ww;
    check L861() else D275();
  L884():
    n16 = force? n15;
    checkMissing(n16);
    r509 = `/`(r508, n16);
    r510 = `-`(1.0, r509);
    r511 = `^`(r510, 2.0);
    r512 = `/`(r500, r511);
    goto L201(r512);
  D275():
    deopt 1052 [r463, r464, r466, ww2];
  L182(r396):
    double5 = ldf double;
    check L764() else D237();
  L759():
    unlist1 = ldf unlist;
    check L761() else D234();
  L760():
    r395 = dyn base69[, ratio](<lang unlist(ctrl.Num)>, <lang `-`(1.0)>);
    goto L182(r395);
  L861():
    ww3 = force? ww2;
    checkMissing(ww3);
    c202 = `is.object`(ww3);
    if c202 then L862() else L863(r463, r464, r466, ww3);
  D234():
    deopt 900 [];
  D237():
    deopt 910 [];
  L206(r476, r477, r478, dx81):
    r480 = `/`(r478, dx81);
    r481 = `-`(r477, r480);
    r482 = `/`(r476, r481);
    st r = r482;
    no_wgts2 = ld `no.wgts`;
    check L866() else D277();
  L761():
    p33 = prom<V +>{
      ctrl_Num2 = ld `ctrl.Num`;
      ctrl_Num3 = force? ctrl_Num2;
      checkMissing(ctrl_Num3);
      return ctrl_Num3;
    };
    r398 = dyn unlist1(p33);
    check L762() else D235();
  L764():
    p34 = prom<V +>{
      nk4 = ld nk;
      nk5 = force? nk4;
      checkMissing(nk5);
      r400 = `*`(18, nk5);
      r401 = `+`(r400, 1);
      return r401;
    };
    r403 = dyn double5(p34);
    check L765() else D238();
  L862():
    dr68 = tryDispatchBuiltin.1("[", ww3);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L864() else L863(r463, r464, r466, dr68);
  L863(r470, r471, r472, ww5):
    ox6 = ld ox;
    check L865() else D276();
  D235():
    deopt 902 [r398];
  D238():
    deopt 912 [r403];
  D276():
    deopt 1054 [r470, r471, r472, ww5, ox6];
  D277():
    deopt 1061 [no_wgts2];
  L762():
    c178 = ldf c in base;
    r399 = dyn c178(r398, -1.0);
    check L763() else D236();
  L765():
    integer = ldf integer;
    check L766() else D239();
  L864():
    dx80 = getTryDispatchBuiltinValue(dr68);
    goto L206(r463, r464, r466, dx80);
  L865():
    ox7 = force? ox6;
    __20 = ldf `[` in base;
    r479 = dyn __20(ww5, ox7);
    goto L206(r470, r471, r472, r479);
  L866():
    no_wgts3 = force? no_wgts2;
    checkMissing(no_wgts3);
    c203 = `as.logical`(no_wgts3);
    if c203 then L867() else L207();
  D236():
    deopt 907 [r399];
  D239():
    deopt 919 [];
  L207():
    weighted_mean = ldf `weighted.mean`;
    check L871() else D280();
  L208(r488):
    goto L201(r488);
  L763():
    goto L182(r399);
  L766():
    r404 = dyn integer(1);
    check L767() else D240();
  L867():
    mean = ldf mean;
    check L868() else D278();
  D240():
    deopt 921 [r404];
  D278():
    deopt 1064 [];
  D280():
    deopt 1068 [];
  L767():
    _Fortran = ldf `.Fortran` in base;
    r405 = dyn _Fortran(C_rbart1, r359, r362, r365, r368, r371, r374, r377, r380, r383, r386, r388, r393, r394, iparms1, spar8, r396, r403, 4, 1, r404);
    check L768() else D241();
  L868():
    p38 = prom<V +>{
      r483 = ld r;
      r484 = force? r483;
      checkMissing(r484);
      r485 = `^`(r484, 2.0);
      return r485;
    };
    r487 = dyn mean(p38);
    check L869() else D279();
  L871():
    p39 = prom<V +>{
      r489 = ld r;
      r490 = force? r489;
      checkMissing(r490);
      r491 = `^`(r490, 2.0);
      return r491;
    };
    p40 = prom<V +>{
      w28 = ld w;
      w29 = force? w28;
      checkMissing(w29);
      return w29;
    };
    r494 = dyn weighted_mean(p39, p40);
    check L872() else D281();
  D241():
    deopt 924 [r405];
  D279():
    deopt 1066 [r487];
  D281():
    deopt 1071 [r494];
  L768():
    goto L172(r405);
  L869():
    goto L208(r487);
  L872():
    goto L208(r494);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg p1:*, reg p2:V, reg r2:I, reg l:*, reg c:L, reg r4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg p3:*, reg p4:V, reg ___:cls, reg r7:V, reg p5:*, reg p6:V |
    mkenv;
    st p = p;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    l = ld p;
    c = `is.object`(l);
    if c then L5() else L6(r1, l);
  L2():
    p1 = ld p;
    check L4() else D0();
  L3():
    r = dyn base(<sym p>);
    goto L0(r);
  D0():
    deopt 1 [p1];
  L1(dx1):
    st p = dx1;
    p5 = ld p;
    check L9() else D2();
  L4():
    p2 = force? p1;
    checkMissing(p2);
    r2 = seq_along(p2);
    goto L0(r2);
  L5():
    dr = tryDispatchBuiltin.0("[<-", l, r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(r1, dr);
  L6(r4, l2):
    p3 = ld p;
    check L8() else D1();
  D1():
    deopt 5 [r4, l2, r1, p3];
  D2():
    deopt 9 [p5];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    p4 = force? p3;
    ___ = ldf `[<-` in base;
    r7 = dyn ___(l2, r1, p4);
    goto L1(r7);
  L9():
    p6 = force? p5;
    checkMissing(p6);
    popenv;
    return p6;
  }
}
fun inner1928276915(X, INDEX, FUN, `...`, simplify) {
  (reg X:*, reg INDEX:*, reg FUN:*, reg ddd:dots, reg simplify:*) -+> V { var X:*, var INDEX:*, var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, var `...`:dots?, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, reg sapply:cls, reg unname:cls, reg split:cls, reg X1:*, reg X2:V, reg p:p(V +), reg INDEX1:*, reg INDEX2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg FUN1:*, reg FUN2:V, reg p4:p(V +), reg ddd1:dots?, reg simplify1:*, reg simplify2:V, reg p5:p(V +), reg r8:V |
    mkenv;
    st X = X;
    st INDEX = INDEX;
    FUN_isMissing = missing.0(FUN);
    if FUN_isMissing then L0(NULL) else L0(FUN);
  L0(FUN_orDefault):
    st FUN = FUN_orDefault;
    st `...` = ddd;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L1(TRUE) else L1(simplify);
  L1(simplify_orDefault):
    st simplify = simplify_orDefault;
    sapply = ldf sapply;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p3 = prom<V +>{
      unname = ldf unname;
      p2 = prom<V +>{
        split = ldf split;
        p = prom<V +>{
          X1 = ld X;
          X2 = force? X1;
          checkMissing(X2);
          return X2;
        };
        p1 = prom<V +>{
          INDEX1 = ld INDEX;
          INDEX2 = force? INDEX1;
          checkMissing(INDEX2);
          return INDEX2;
        };
        r2 = dyn split(p, p1);
        return r2;
      };
      r4 = dyn unname(p2);
      return r4;
    };
    p4 = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    ddd1 = ld `...`;
    p5 = prom<V +>{
      simplify1 = ld simplify;
      simplify2 = force? simplify1;
      checkMissing(simplify2);
      return simplify2;
    };
    r8 = dyn sapply[X, FUN, `...`, simplify, `USE.NAMES`](p3, p4, ddd1, p5, FALSE);
    check L3() else D1();
  D1():
    deopt 11 [r8];
  L3():
    popenv;
    return r8;
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg i1:*, reg i2:V, reg length:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg y:*, reg y1:V, reg c:L, reg y3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i3:*, reg i4:V, reg __:cls, reg r7:V, reg sum:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg y4:*, reg y5:V, reg c1:L, reg y7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i5:*, reg i6:V, reg __1:cls, reg r11:V, reg r12:V, reg sum1:cls, reg r13:V, reg c2:cls, reg r14:V |
    mkenv;
    st i = i;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    popenv;
    return r1;
  L6():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r = dyn base(<lang length(i)>, <lang sum(`[`(y, i))>, <lang sum(`^`(`[`(y, i), 2.0))>);
    goto L0(r);
  L1(r3):
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L8():
    i1 = ld i;
    check L10() else D0();
  L9():
    r2 = dyn base1(<sym i>);
    goto L1(r2);
  D0():
    deopt 4 [i1];
  L2(r6):
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L10():
    i2 = force? i1;
    checkMissing(i2);
    length = ldf length in base;
    r4 = dyn length(i2);
    check L11() else D1();
  L12():
    y = ld y;
    check L14() else D2();
  L13():
    r5 = dyn base2(<lang `[`(y, i)>);
    goto L2(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [y];
  L4(r10):
    c2 = ldf c in base;
    r14 = dyn c2(r3, r6, r10);
    check L28() else D8();
  L11():
    goto L1(r4);
  L14():
    y1 = force? y;
    checkMissing(y1);
    c = `is.object`(y1);
    if c then L15() else L16(y1);
  L20():
    y4 = ld y;
    check L22() else D5();
  L21():
    r9 = dyn base3(<lang `^`(`[`(y, i), 2.0)>);
    goto L4(r9);
  D5():
    deopt 19 [y4];
  D8():
    deopt 29 [r14];
  L3(dx1):
    sum = ldf sum in base;
    r8 = dyn sum(dx1);
    check L19() else D4();
  L15():
    dr = tryDispatchBuiltin.1("[", y1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(y3):
    i3 = ld i;
    check L18() else D3();
  L22():
    y5 = force? y4;
    checkMissing(y5);
    c1 = `is.object`(y5);
    if c1 then L23() else L24(y5);
  L28():
    goto L0(r14);
  D3():
    deopt 12 [y3, i3];
  D4():
    deopt 16 [r8];
  L5(dx3):
    r12 = `^`(dx3, 2.0);
    sum1 = ldf sum in base;
    r13 = dyn sum1(r12);
    check L27() else D7();
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L18():
    i4 = force? i3;
    __ = ldf `[` in base;
    r7 = dyn __(y3, i4);
    goto L3(r7);
  L19():
    goto L2(r8);
  L23():
    dr2 = tryDispatchBuiltin.1("[", y5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(y7):
    i5 = ld i;
    check L26() else D6();
  D6():
    deopt 21 [y7, i5];
  D7():
    deopt 27 [r13];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L26():
    i6 = force? i5;
    __1 = ldf `[` in base;
    r11 = dyn __1(y7, i6);
    goto L5(r11);
  L27():
    goto L4(r13);
  }
}