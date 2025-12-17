fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2858146176;
    st `as.dendrogram.hclust` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2858146176(object, hang, check, `...`) {
  (reg object:*, reg hang:*, reg check:*, reg ddd:dots) -+> V { var object:*, var hang:*, reg hang_isMissing:L, reg hang_orDefault:*, reg p:p(V +), var check:*, reg check_isMissing:L, reg check_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg c1:V, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg check1:*, reg check2:V, reg c3:L, reg c5:V, reg isTRUE:cls, reg _validity_hclust:cls, reg object9:*, reg object10:V, reg p1:p(V +), reg merge:*, reg merge1:V, reg p2:p(V +), reg nolabels:*, reg nolabels1:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg r11:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg msg:*, reg msg1:V, reg p5:p(V +), reg r13:V, reg nolabels2:*, reg nolabels3:V, reg c10:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg object11:*, reg object12:V, reg c11:L, reg object14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg r18:I, reg l:*, reg c12:L, reg r20:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r22:V, reg dx7:V, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg list:cls, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg object15:*, reg object16:V, reg c13:L, reg object18:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r30:V, reg length:cls, reg r31:V, reg oHgt:*, reg oHgt1:V, reg c14:L, reg oHgt3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg nMerge:*, reg nMerge1:V, reg __:cls, reg r32:V, reg nMerge2:*, reg nMerge3:V, reg r33:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x:V, reg merge2:*, reg merge3:V, reg c16:L, reg i6:I, reg merge5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i8:I, reg dx13:V, reg k:*, reg k1:V, reg __1:cls, reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg i11:I, reg r36:V, reg x1:*, reg x2:V, reg r37:V, reg any:cls, reg r38:V, reg c17:L, reg hang1:*, reg hang2:V, reg r39:V, reg c18:L, reg i16:I, reg r40:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg oHgt4:*, reg oHgt5:V, reg c19:L, reg i20:I, reg oHgt7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i22:I, reg dx15:V, reg k2:*, reg k3:V, reg __2:cls, reg r42:V, reg hang3:*, reg hang4:V, reg hMax:*, reg hMax1:V, reg r43:V, reg r44:V, reg max:cls, reg r45:V, reg i23:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg i26:I, reg r48:V, reg neg:*, reg neg1:V, reg all:cls, reg r49:V, reg c20:L, reg as_list:cls, reg x3:*, reg x4:V, reg r50:V, reg p6:p(V +), reg r52:V, reg l4:*, reg attr__:cls, reg r53:V, reg l5:*, reg attr__1:cls, reg r54:V, reg object19:*, reg object20:V, reg c21:L, reg i30:I, reg object22:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i32:I, reg dx17:V, reg r55:V, reg c22:L, reg i34:I, reg dx19:V, reg dr18:V, reg dc9:L, reg dx20:V, reg i36:I, reg dx21:V, reg x5:*, reg x6:V, reg r56:V, reg __3:cls, reg r57:V, reg objlabels:*, reg objlabels1:V, reg c23:L, reg i38:I, reg objlabels3:V, reg dr20:V, reg dc10:L, reg dx22:V, reg i40:I, reg dx23:V, reg __4:cls, reg r58:V, reg l6:*, reg c24:L, reg i42:I, reg dx26:V, reg l9:*, reg dx27:V, reg l10:*, reg dr22:V, reg dc11:L, reg dx30:V, reg i44:I, reg dx31:V, reg l12:*, reg dx32:V, reg dx33:V, reg __5:cls, reg r59:V, reg attr__2:cls, reg r60:V, reg c25:L, reg i46:I, reg dx35:V, reg l14:*, reg dr24:V, reg dc12:L, reg dx37:V, reg i48:I, reg dx39:V, reg ____:cls, reg r61:V, reg objlabels4:*, reg objlabels5:V, reg c26:L, reg i50:I, reg objlabels7:V, reg dr26:V, reg dc13:L, reg dx40:V, reg i52:I, reg dx41:V, reg __6:cls, reg r62:V, reg l15:*, reg c27:L, reg i54:I, reg dx44:V, reg l18:*, reg dx45:V, reg l19:*, reg dr28:V, reg dc14:L, reg dx48:V, reg i56:I, reg dx49:V, reg l21:*, reg dx50:V, reg dx51:V, reg __7:cls, reg r63:V, reg attr__3:cls, reg r64:V, reg c28:L, reg i58:I, reg dx53:V, reg l23:*, reg dr30:V, reg dc15:L, reg dx55:V, reg i60:I, reg dx57:V, reg ____1:cls, reg r65:V, reg l24:*, reg c29:L, reg i62:I, reg r68:I, reg l27:*, reg r69:I, reg l28:*, reg dr32:V, reg dc16:L, reg dx58:V, reg i64:I, reg r72:I, reg l30:*, reg r73:I, reg dx59:V, reg __8:cls, reg r74:V, reg attr__4:cls, reg r75:V, reg c30:L, reg i66:I, reg r77:I, reg l32:*, reg dr34:V, reg dc17:L, reg dx60:V, reg i68:I, reg r79:I, reg dx61:V, reg ____2:cls, reg r80:V, reg l33:*, reg c31:L, reg i70:I, reg r83:I, reg l36:*, reg r84:I, reg l37:*, reg dr36:V, reg dc18:L, reg dx62:V, reg i72:I, reg r87:I, reg l39:*, reg r88:I, reg dx63:V, reg __9:cls, reg r89:V, reg attr__5:cls, reg r90:V, reg c32:L, reg i74:I, reg r92:I, reg l41:*, reg dr38:V, reg dc19:L, reg dx64:V, reg i76:I, reg dx65:V, reg ____3:cls, reg r95:V, reg h0:*, reg h1:V, reg l42:*, reg c33:L, reg i78:I, reg h4:V, reg l45:*, reg h5:V, reg l46:*, reg dr40:V, reg dc20:L, reg dx66:V, reg i80:I, reg h8:V, reg l48:*, reg h9:V, reg dx67:V, reg __10:cls, reg r96:V, reg attr__6:cls, reg r97:V, reg c34:L, reg i82:I, reg h11:V, reg l50:*, reg dr42:V, reg dc21:L, reg dx68:V, reg i84:I, reg h13:V, reg dx69:V, reg ____4:cls, reg r98:V, reg l51:*, reg c35:L, reg i86:I, reg h16:V, reg l54:*, reg h17:V, reg l55:*, reg dr44:V, reg dc22:L, reg dx70:V, reg i88:I, reg h20:V, reg l57:*, reg h21:V, reg dx71:V, reg __11:cls, reg r99:V, reg attr__7:cls, reg r100:V, reg c36:L, reg i90:I, reg h23:V, reg l59:*, reg dr46:V, reg dc23:L, reg dx72:V, reg i92:I, reg dx73:V, reg ____5:cls, reg r101:V, reg l60:*, reg c37:L, reg i94:I, reg r104:L, reg l63:*, reg r105:L, reg l64:*, reg dr48:V, reg dc24:L, reg dx74:V, reg i96:I, reg r108:L, reg l66:*, reg r109:L, reg dx75:V, reg __12:cls, reg r110:V, reg attr__8:cls, reg r111:V, reg c38:L, reg i98:I, reg r113:L, reg l68:*, reg dr50:V, reg dc25:L, reg dx76:V, reg i100:I, reg r115:L, reg dx77:V, reg ____6:cls, reg r116:V, reg l69:*, reg c39:L, reg i102:I, reg r119:L, reg l72:*, reg r120:L, reg l73:*, reg dr52:V, reg dc26:L, reg dx78:V, reg i104:I, reg r123:L, reg l75:*, reg r124:L, reg dx79:V, reg __13:cls, reg r125:V, reg attr__9:cls, reg r126:V, reg c40:L, reg i106:I, reg r128:L, reg l77:*, reg dr54:V, reg dc27:L, reg dx80:V, reg i108:I, reg r130:L, reg dx81:V, reg ____7:cls, reg r131:V, reg i109:I, reg sym7:cls, reg base7:cls, reg guard7:L, reg r133:V, reg i112:I, reg r134:V, reg neg2:*, reg neg3:V, reg any1:cls, reg r135:V, reg c41:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r136:V, reg i117:I, reg r137:V, reg x7:*, reg x8:V, reg as_character:cls, reg r138:V, reg x9:*, reg x10:V, reg c42:L, reg i119:I, reg x12:V, reg dr56:V, reg dc28:L, reg dx82:V, reg i121:I, reg dx83:V, reg __14:cls, reg r139:V, reg r140:V, reg isL:*, reg isL1:V, reg c43:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r141:V, reg i126:I, reg r142:V, reg x13:*, reg x14:V, reg c44:L, reg i128:I, reg x16:V, reg dr58:V, reg dc29:L, reg dx84:V, reg i130:I, reg dx85:V, reg __15:cls, reg r143:V, reg r144:V, reg z:*, reg z1:V, reg c45:L, reg i132:I, reg z3:V, reg dr60:V, reg dc30:L, reg dx86:V, reg i134:I, reg dx87:V, reg X:*, reg X1:V, reg c46:L, reg i136:I, reg z5:V, reg X3:V, reg dr62:V, reg dc31:L, reg dx88:V, reg i138:I, reg z7:V, reg dx89:V, reg __16:cls, reg r145:V, reg __17:cls, reg r146:V, reg list1:cls, reg r147:V, reg i139:I, reg r148:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r149:V, reg z8:*, reg z9:V, reg c47:L, reg i143:I, reg z11:V, reg dr64:V, reg dc32:L, reg dx90:V, reg i145:I, reg dx91:V, reg X4:*, reg X5:V, reg c48:L, reg i147:I, reg z13:V, reg X7:V, reg dr66:V, reg dc33:L, reg dx92:V, reg i149:I, reg z15:V, reg dx93:V, reg __18:cls, reg r150:V, reg __19:cls, reg r151:V, reg x17:*, reg x18:V, reg c49:L, reg i151:I, reg x20:V, reg dr68:V, reg dc34:L, reg dx94:V, reg i153:I, reg dx95:V, reg __20:cls, reg r152:V, reg r153:V, reg list2:cls, reg r154:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r155:V, reg i156:I, reg r156:V, reg z16:*, reg z17:V, reg c50:L, reg i158:I, reg z19:V, reg dr70:V, reg dc35:L, reg dx96:V, reg i160:I, reg dx97:V, reg X8:*, reg X9:V, reg c51:L, reg i162:I, reg z21:V, reg X11:V, reg dr72:V, reg dc36:L, reg dx98:V, reg i164:I, reg z23:V, reg dx99:V, reg isL2:*, reg isL3:V, reg r157:V, reg __21:cls, reg r158:V, reg __22:cls, reg r159:V, reg attr:cls, reg r160:V, reg r161:V, reg l78:*, reg attr__10:cls, reg r162:V, reg _memberDend:cls, reg zk:*, reg zk1:V, reg c52:L, reg zk3:V, reg dr74:V, reg dc37:L, reg dx100:V, reg dx101:V, reg __23:cls, reg r163:V, reg p7:p(V +), reg r165:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r168:V, reg i167:I, reg r169:V, reg r170:V, reg z24:*, reg z25:V, reg c53:L, reg i169:I, reg r172:V, reg z27:V, reg dr76:V, reg dc38:L, reg dx102:V, reg i171:I, reg r174:V, reg dx103:V, reg X12:*, reg X13:V, reg c54:L, reg i173:I, reg r176:V, reg z29:V, reg X15:V, reg dr78:V, reg dc39:L, reg dx104:V, reg i175:I, reg r178:V, reg z31:V, reg dx105:V, reg isL4:*, reg isL5:V, reg r179:V, reg __24:cls, reg r180:V, reg __25:cls, reg r181:V, reg attr1:cls, reg r182:V, reg r183:V, reg r184:V, reg l79:*, reg attr__11:cls, reg r185:V, reg l80:*, reg c55:L, reg i177:I, reg r188:I, reg l83:*, reg r189:I, reg l84:*, reg dr80:V, reg dc40:L, reg dx106:V, reg i179:I, reg r192:I, reg l86:*, reg r193:I, reg dx107:V, reg isL6:*, reg isL7:V, reg r194:V, reg __26:cls, reg r195:V, reg attr__12:cls, reg r196:V, reg c56:L, reg i181:I, reg r198:I, reg l88:*, reg dr82:V, reg dc41:L, reg dx108:V, reg i183:I, reg dx109:V, reg isL8:*, reg isL9:V, reg r201:V, reg ____8:cls, reg r202:V, reg h26:*, reg h27:V, reg l89:*, reg c57:L, reg i185:I, reg h30:V, reg l92:*, reg h31:V, reg l93:*, reg dr84:V, reg dc42:L, reg dx110:V, reg i187:I, reg h34:V, reg l95:*, reg h35:V, reg dx111:V, reg isL10:*, reg isL11:V, reg r203:V, reg __27:cls, reg r204:V, reg attr__13:cls, reg r205:V, reg c58:L, reg i189:I, reg h37:V, reg l97:*, reg dr86:V, reg dc43:L, reg dx112:V, reg i191:I, reg dx113:V, reg isL12:*, reg isL13:V, reg r206:V, reg ____9:cls, reg r207:V, reg object23:*, reg object24:V, reg c59:L, reg i193:I, reg object26:V, reg dr88:V, reg dc44:L, reg dx114:V, reg i195:I, reg dx115:V, reg r208:V, reg c60:L, reg i197:I, reg dx117:V, reg dr90:V, reg dc45:L, reg dx118:V, reg i199:I, reg dx119:V, reg x21:*, reg x22:V, reg c61:L, reg i201:I, reg dx121:V, reg x24:V, reg dr92:V, reg dc46:L, reg dx123:V, reg i203:I, reg dx124:V, reg dx125:V, reg isL14:*, reg isL15:V, reg r209:V, reg __28:cls, reg r210:V, reg r211:V, reg __29:cls, reg r212:V, reg l98:*, reg c62:L, reg i205:I, reg dx128:V, reg l101:*, reg dx129:V, reg l102:*, reg dr94:V, reg dc47:L, reg dx132:V, reg i207:I, reg dx133:V, reg l104:*, reg dx134:V, reg dx135:V, reg isL16:*, reg isL17:V, reg r213:V, reg __30:cls, reg r214:V, reg attr__14:cls, reg r215:V, reg c63:L, reg i209:I, reg dx137:V, reg l106:*, reg dr96:V, reg dc48:L, reg dx139:V, reg i211:I, reg dx141:V, reg isL18:*, reg isL19:V, reg r216:V, reg ____10:cls, reg r217:V, reg l107:*, reg c64:L, reg i213:I, reg r220:L, reg l110:*, reg r221:L, reg l111:*, reg dr98:V, reg dc49:L, reg dx142:V, reg i215:I, reg r224:L, reg l113:*, reg r225:L, reg dx143:V, reg isL20:*, reg isL21:V, reg r226:V, reg __31:cls, reg r227:V, reg attr__15:cls, reg r228:V, reg c65:L, reg i217:I, reg r230:L, reg l115:*, reg dr100:V, reg dc50:L, reg dx144:V, reg i219:I, reg dx145:V, reg isL22:*, reg isL23:V, reg r233:V, reg ____11:cls, reg r234:V, reg l116:*, reg c66:L, reg i221:I, reg r236:dots, reg l118:*, reg dr102:V, reg dc51:L, reg dx146:V, reg i223:I, reg r238:dots, reg dx147:V, reg X16:*, reg X17:V, reg c67:L, reg i225:I, reg r241:dots, reg l120:*, reg r242:dots, reg X19:V, reg dr104:V, reg dc52:L, reg dx148:V, reg i227:I, reg r245:dots, reg l122:*, reg r246:dots, reg dx149:V, reg isL24:*, reg isL25:V, reg r247:V, reg __32:cls, reg r248:V, reg ____12:cls, reg r249:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r250:V, reg i230:I, reg r251:V, reg x25:*, reg x26:V, reg as_character1:cls, reg r252:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r253:V, reg i233:I, reg r254:V, reg z32:*, reg z33:V, reg c68:L, reg i235:I, reg z35:V, reg dr106:V, reg dc53:L, reg dx150:V, reg i237:I, reg dx151:V, reg x27:*, reg x28:V, reg c69:L, reg i239:I, reg z37:V, reg x30:V, reg dr108:V, reg dc54:L, reg dx152:V, reg i241:I, reg z39:V, reg dx153:V, reg __33:cls, reg r255:V, reg __34:cls, reg r256:V, reg z40:*, reg z41:V, reg c70:L, reg i243:I, reg z43:V, reg dr110:V, reg dc55:L, reg dx154:V, reg i245:I, reg dx155:V, reg x31:*, reg x32:V, reg c71:L, reg i247:I, reg z45:V, reg x34:V, reg dr112:V, reg dc56:L, reg dx156:V, reg i249:I, reg z47:V, reg dx157:V, reg __35:cls, reg r257:V, reg __36:cls, reg r258:V, reg list3:cls, reg r259:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r260:V, reg i252:I, reg r261:V, reg z48:*, reg z49:V, reg c72:L, reg i254:I, reg z51:V, reg dr114:V, reg dc57:L, reg dx158:V, reg i256:I, reg dx159:V, reg x35:*, reg x36:V, reg c73:L, reg i258:I, reg z53:V, reg x38:V, reg dr116:V, reg dc58:L, reg dx160:V, reg i260:I, reg z55:V, reg dx161:V, reg __37:cls, reg r262:V, reg __38:cls, reg r263:V, reg attr2:cls, reg r264:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r267:V, reg i263:I, reg r268:V, reg r269:V, reg z56:*, reg z57:V, reg c74:L, reg i265:I, reg r271:V, reg z59:V, reg dr118:V, reg dc59:L, reg dx162:V, reg i267:I, reg r273:V, reg dx163:V, reg x39:*, reg x40:V, reg c75:L, reg i269:I, reg r275:V, reg z61:V, reg x42:V, reg dr120:V, reg dc60:L, reg dx164:V, reg i271:I, reg r277:V, reg z63:V, reg dx165:V, reg __39:cls, reg r278:V, reg __40:cls, reg r279:V, reg attr3:cls, reg r280:V, reg r281:V, reg l123:*, reg attr__16:cls, reg r282:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r283:V, reg i274:I, reg r284:V, reg z64:*, reg z65:V, reg c76:L, reg i276:I, reg z67:V, reg dr122:V, reg dc61:L, reg dx166:V, reg i278:I, reg dx167:V, reg x43:*, reg x44:V, reg c77:L, reg i280:I, reg z69:V, reg x46:V, reg dr124:V, reg dc62:L, reg dx168:V, reg i282:I, reg z71:V, reg dx169:V, reg __41:cls, reg r285:V, reg __42:cls, reg r286:V, reg attr4:cls, reg r287:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r290:V, reg i285:I, reg r291:V, reg r292:V, reg z72:*, reg z73:V, reg c78:L, reg i287:I, reg r294:V, reg z75:V, reg dr126:V, reg dc63:L, reg dx170:V, reg i289:I, reg r296:V, reg dx171:V, reg x47:*, reg x48:V, reg c79:L, reg i291:I, reg r298:V, reg z77:V, reg x50:V, reg dr128:V, reg dc64:L, reg dx172:V, reg i293:I, reg r300:V, reg z79:V, reg dx173:V, reg __43:cls, reg r301:V, reg __44:cls, reg r302:V, reg attr5:cls, reg r303:V, reg r304:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r307:V, reg i296:I, reg r308:V, reg r309:V, reg z80:*, reg z81:V, reg c80:L, reg i298:I, reg r311:V, reg z83:V, reg dr130:V, reg dc65:L, reg dx174:V, reg i300:I, reg r313:V, reg dx175:V, reg x51:*, reg x52:V, reg c81:L, reg i302:I, reg r315:V, reg z85:V, reg x54:V, reg dr132:V, reg dc66:L, reg dx176:V, reg i304:I, reg r317:V, reg z87:V, reg dx177:V, reg __45:cls, reg r318:V, reg __46:cls, reg r319:V, reg attr6:cls, reg r320:V, reg r321:V, reg r322:V, reg l124:*, reg attr__17:cls, reg r323:V, reg l125:*, reg c82:L, reg i306:I, reg r325:dots, reg l127:*, reg dr134:V, reg dc67:L, reg dx178:V, reg i308:I, reg r327:dots, reg dx179:V, reg x55:*, reg x56:V, reg c83:L, reg i310:I, reg r330:dots, reg l129:*, reg r331:dots, reg x58:V, reg dr136:V, reg dc68:L, reg dx180:V, reg i312:I, reg r334:dots, reg l131:*, reg r335:dots, reg dx181:V, reg __47:cls, reg r336:V, reg ____13:cls, reg r337:V, reg l132:*, reg c84:L, reg i314:I, reg r339:dots, reg l134:*, reg dr138:V, reg dc69:L, reg dx182:V, reg i316:I, reg r341:dots, reg dx183:V, reg x59:*, reg x60:V, reg c85:L, reg i318:I, reg r344:dots, reg l136:*, reg r345:dots, reg x62:V, reg dr140:V, reg dc70:L, reg dx184:V, reg i320:I, reg r348:dots, reg l138:*, reg r349:dots, reg dx185:V, reg __48:cls, reg r350:V, reg ____14:cls, reg r351:V, reg oHgt8:*, reg oHgt9:V, reg c86:L, reg i322:I, reg oHgt11:V, reg dr142:V, reg dc71:L, reg dx186:V, reg i324:I, reg dx187:V, reg k4:*, reg k5:V, reg __49:cls, reg r352:V, reg l139:*, reg attr__18:cls, reg r353:V, reg zk4:*, reg zk5:V, reg l140:*, reg c87:L, reg i326:I, reg zk7:V, reg l142:*, reg dr144:V, reg dc72:L, reg dx188:V, reg i328:I, reg dx189:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r354:V, reg i331:I, reg zk14:V, reg l145:*, reg zk15:V, reg r355:V, reg k6:*, reg k7:V, reg as_character2:cls, reg r356:V, reg ____15:cls, reg r357:V, reg structure:cls, reg z88:*, reg z89:V, reg c88:L, reg z91:V, reg dr146:V, reg dc73:L, reg dx190:V, reg dx191:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r358:V, reg z94:V, reg r359:V, reg k8:*, reg k9:V, reg as_character3:cls, reg r360:V, reg __50:cls, reg r361:V, reg p8:p(V +), reg r363:V |
    mkenv;
    st object = object;
    hang_isMissing = missing.0(hang);
    if hang_isMissing then L0() else L1(hang);
  L0():
    p = prom<V +>{
      return -1.0;
    };
    goto L1(p);
  L1(hang_orDefault):
    st hang = hang_orDefault;
    check_isMissing = missing.0(check);
    if check_isMissing then L2(TRUE) else L2(check);
  L2(check_orDefault):
    st check = check_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L103() else L104();
  L3(r2):
    st nolabels = r2;
    object5 = ld object;
    check L110() else D1();
  L103():
    object1 = ld object;
    check L105() else D0();
  L104():
    r1 = dyn base(<lang `$`(object, labels)>);
    goto L3(r1);
  D0():
    deopt 1 [object1];
  D1():
    deopt 6 [object5];
  L105():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L107() else L108(object2);
  L110():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L112() else L113(object6);
  L106(dx1):
    c1 = `==`(dx1, NULL);
    goto L3(c1);
  L107():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L109() else L108(dr);
  L108(object4):
    r3 = `$`(object4, <sym labels>);
    goto L106(r3);
  L111(dx3):
    st merge = dx3;
    check1 = ld check;
    check L115() else D2();
  L112():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L114() else L113(dr2);
  L113(object8):
    r4 = `$`(object8, <sym merge>);
    goto L111(r4);
  D2():
    deopt 10 [check1];
  L109():
    dx = getTryDispatchBuiltinValue(dr);
    goto L106(dx);
  L114():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L111(dx2);
  L115():
    check2 = force? check1;
    checkMissing(check2);
    c3 = `as.logical`(check2);
    if c3 then L116() else L4(c3);
  L4(c5):
    c9 = `as.logical`(c5);
    if c9 then L120() else L5();
  L116():
    isTRUE = ldf isTRUE;
    check L117() else D3();
  D3():
    deopt 13 [c3];
  L5():
    goto L6();
  L6():
    nolabels2 = ld nolabels;
    check L124() else D7();
  L117():
    p4 = prom<V +>{
      _validity_hclust = ldf `.validity.hclust`;
      p1 = prom<V +>{
        object9 = ld object;
        object10 = force? object9;
        checkMissing(object10);
        return object10;
      };
      p2 = prom<V +>{
        merge = ld merge;
        merge1 = force? merge;
        checkMissing(merge1);
        return merge1;
      };
      p3 = prom<V +>{
        nolabels = ld nolabels;
        nolabels1 = force? nolabels;
        checkMissing(nolabels1);
        return nolabels1;
      };
      r8 = dyn _validity_hclust[, , order](p1, p2, p3);
      st msg = r8;
      invisible.0();
      return r8;
    };
    r10 = dyn isTRUE(p4);
    check L118() else D4();
  L120():
    stop = ldf stop;
    check L121() else D5();
  D4():
    deopt 15 [c3, r10];
  D5():
    deopt 19 [];
  D7():
    deopt 24 [nolabels2];
  L118():
    r11 = `!`(r10);
    c6 = `as.logical`(r11);
    c7 = `&&`(c3, c6);
    goto L4(c7);
  L121():
    p5 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r13 = dyn stop(p5);
    check L122() else D6();
  L124():
    nolabels3 = force? nolabels2;
    checkMissing(nolabels3);
    c10 = `as.logical`(nolabels3);
    if c10 then L125() else L7();
  D6():
    deopt 21 [r13];
  L7():
    goto L9();
  L9():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L138() else L139();
  L122():
    goto L6();
  L125():
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L126() else L127();
  L8(r16):
    l = ld object;
    c12 = `is.object`(l);
    if c12 then L134() else L135(r16, l);
  L10(r26):
    st z = r26;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L141() else L142();
  L126():
    object11 = ld object;
    check L128() else D8();
  L127():
    r15 = dyn base1(<lang `$`(object, order)>);
    goto L8(r15);
  L138():
    list = ldf list in base;
    r27 = dyn list();
    check L140() else D9();
  L139():
    r25 = dyn base2();
    goto L10(r25);
  D8():
    deopt 27 [object11];
  D9():
    deopt 39 [r27];
  L11(r29):
    st nMerge = r29;
    oHgt = ld oHgt;
    check L149() else D12();
  L128():
    object12 = force? object11;
    checkMissing(object12);
    c11 = `is.object`(object12);
    if c11 then L130() else L131(object12);
  L133(r22, dx7):
    st object = dx7;
    goto L9();
  L134():
    dr6 = tryDispatchBuiltin.0("$<-", l, r16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L136() else L135(r16, dr6);
  L135(r20, l2):
    r23 = `$<-`(l2, <sym labels>, r16);
    goto L133(r20, r23);
  L140():
    goto L10(r27);
  L141():
    object15 = ld object;
    check L143() else D10();
  L142():
    r28 = dyn base3(<lang `<-`(oHgt, `$`(object, height))>);
    goto L11(r28);
  D10():
    deopt 43 [object15];
  D12():
    deopt 50 [oHgt];
  L129(dx5):
    r18 = seq_along(dx5);
    goto L8(r18);
  L130():
    dr4 = tryDispatchBuiltin.1("$", object12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L132() else L131(dr4);
  L131(object14):
    r17 = `$`(object14, <sym order>);
    goto L129(r17);
  L136():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L133(r16, dx6);
  L143():
    object16 = force? object15;
    checkMissing(object16);
    c13 = `is.object`(object16);
    if c13 then L145() else L146(object16);
  L149():
    oHgt1 = force? oHgt;
    checkMissing(oHgt1);
    c14 = `is.object`(oHgt1);
    if c14 then L150() else L151(oHgt1);
  L12(dx11):
    st hMax = dx11;
    nMerge2 = ld nMerge;
    check L154() else D14();
  L132():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L129(dx4);
  L144(dx9):
    st oHgt = dx9;
    length = ldf length in base;
    r31 = dyn length(dx9);
    check L148() else D11();
  L145():
    dr8 = tryDispatchBuiltin.1("$", object16);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L147() else L146(dr8);
  L146(object18):
    r30 = `$`(object18, <sym height>);
    goto L144(r30);
  L150():
    dr10 = tryDispatchBuiltin.1("[", oHgt1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L152() else L151(dr10);
  L151(oHgt3):
    nMerge = ld nMerge;
    check L153() else D13();
  D11():
    deopt 48 [r31];
  D13():
    deopt 52 [oHgt3, nMerge];
  D14():
    deopt 57 [1, nMerge2];
  L147():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L144(dx8);
  L148():
    goto L11(r31);
  L152():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L12(dx10);
  L153():
    nMerge1 = force? nMerge;
    __ = ldf `[` in base;
    r32 = dyn __(oHgt3, nMerge1);
    goto L12(r32);
  L154():
    nMerge3 = force? nMerge2;
    checkMissing(nMerge3);
    r33 = `:`(1, nMerge3);
    s = toForSeq(r33);
    l3 = length(s);
    i = 0;
    goto L13(i);
  L13(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l3, i2);
    if c15 then L155() else L102();
  L102():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    merge2 = ld merge;
    check L156() else D15();
  L155():
    structure = ldf structure;
    check L524() else D139();
  D15():
    deopt 60 [i2, merge2];
  D139():
    deopt 626 [];
  L156():
    merge3 = force? merge2;
    checkMissing(merge3);
    c16 = `is.object`(merge3);
    if c16 then L157() else L158(i2, merge3);
  L524():
    p8 = prom<V +>{
      z88 = ld z;
      z89 = force? z88;
      checkMissing(z89);
      c88 = `is.object`(z89);
      if c88 then L2() else L3(z89);
    L0(dx191):
      return dx191;
    L2():
      dr146 = tryDispatchBuiltin.1("[[", z89);
      dc73 = getTryDispatchBuiltinDispatched(dr146);
      if dc73 then L4() else L3(dr146);
    L3(z91):
      sym21 = ldf `as.character`;
      base21 = ldf `as.character` in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L5() else L6();
    L1(z94, r359):
      __50 = ldf `[[` in base;
      r361 = dyn __50(z94, r359);
      goto L0(r361);
    L4():
      dx190 = getTryDispatchBuiltinValue(dr146);
      goto L0(dx190);
    L5():
      k8 = ld k;
      k9 = force? k8;
      checkMissing(k9);
      as_character3 = ldf `as.character` in base;
      r360 = dyn as_character3(k9);
      goto L1(z91, r360);
    L6():
      r358 = dyn base21(<sym k>);
      goto L1(z91, r358);
    };
    r363 = dyn structure[, class](p8, "dendrogram");
    check L525() else D140();
  D140():
    deopt 630 [r363];
  L14(i8, dx13):
    st x = dx13;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L161() else L162();
  L157():
    dr12 = tryDispatchBuiltin.1("[", merge3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L159() else L158(i2, dr12);
  L158(i6, merge5):
    k = ld k;
    check L160() else D16();
  L525():
    popenv;
    return r363;
  D16():
    deopt 62 [i6, merge5, k];
  L15(i11, r36):
    c17 = `as.logical`(r36);
    if c17 then L165() else L16();
  L159():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L14(i2, dx12);
  L160():
    k1 = force? k;
    __1 = ldf `[` in base;
    r34 = dyn __1(merge3, k1, <missing>);
    goto L14(i6, r34);
  L161():
    x1 = ld x;
    check L163() else D17();
  L162():
    r35 = dyn base4(<lang `<-`(neg, `<`(x, 0.0))>);
    goto L15(i8, r35);
  D17():
    deopt 70 [i8, x1];
  L16():
    goto L20(i11);
  L20(i23):
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L180() else L181();
  L163():
    x2 = force? x1;
    checkMissing(x2);
    r37 = `<`(x2, 0.0);
    st neg = r37;
    any = ldf any in base;
    r38 = dyn any(r37);
    check L164() else D18();
  L165():
    hang1 = ld hang;
    check L166() else D19();
  D18():
    deopt 76 [i8, r38];
  D19():
    deopt 77 [i11, hang1];
  L21(i26, r48):
    c20 = `as.logical`(r48);
    if c20 then L184() else L22();
  L164():
    goto L15(i8, r38);
  L166():
    hang2 = force? hang1;
    checkMissing(hang2);
    r39 = `<`(hang2, 0.0);
    c18 = `as.logical`(r39);
    if c18 then L167() else L17();
  L180():
    neg = ld neg;
    check L182() else D25();
  L181():
    r47 = dyn base6(<sym neg>);
    goto L21(i23, r47);
  D25():
    deopt 102 [i23, neg];
  L17():
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L169() else L170();
  L18(i16, r40):
    st h0 = r40;
    goto L20(i16);
  L22():
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L274() else L275();
  L42(i109):
    oHgt8 = ld oHgt;
    check L509() else D132();
  L167():
    goto L18(i11, 0.0);
  L182():
    neg1 = force? neg;
    checkMissing(neg1);
    all = ldf all in base;
    r49 = dyn all(neg1);
    check L183() else D26();
  L184():
    as_list = ldf `as.list`;
    check L185() else D27();
  D26():
    deopt 105 [i23, r49];
  D27():
    deopt 107 [i26];
  D132():
    deopt 600 [i109, oHgt8];
  L43(i112, r134):
    c41 = `as.logical`(r134);
    if c41 then L278() else L44();
  L169():
    oHgt4 = ld oHgt;
    check L171() else D20();
  L170():
    r41 = dyn base5(0.0, <lang `-`(`[`(oHgt, k), `*`(hang, hMax))>);
    goto L18(i11, r41);
  L183():
    goto L21(i23, r49);
  L185():
    p6 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      r50 = `-`(<missing>, x4);
      return r50;
    };
    r52 = dyn as_list(p6);
    check L186() else D28();
  L274():
    neg2 = ld neg;
    check L276() else D54();
  L275():
    r133 = dyn base7(<sym neg>);
    goto L43(i26, r133);
  L509():
    oHgt9 = force? oHgt8;
    checkMissing(oHgt9);
    c86 = `is.object`(oHgt9);
    if c86 then L510() else L511(i109, oHgt9);
  D20():
    deopt 86 [i11, oHgt4];
  D28():
    deopt 109 [i26, r52];
  D54():
    deopt 265 [i26, neg2];
  L44():
    sym13 = ldf `as.character`;
    base13 = ldf `as.character` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L413() else L414();
  L99(i324, dx187):
    l139 = ld zk;
    attr__18 = ldf `attr<-`;
    check L514() else D134();
  L171():
    oHgt5 = force? oHgt4;
    checkMissing(oHgt5);
    c19 = `is.object`(oHgt5);
    if c19 then L172() else L173(i11, oHgt5);
  L186():
    st zk = r52;
    l4 = ld zk;
    attr__ = ldf `attr<-`;
    check L187() else D29();
  L276():
    neg3 = force? neg2;
    checkMissing(neg3);
    any1 = ldf any in base;
    r135 = dyn any1(neg3);
    check L277() else D55();
  L278():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L279() else L280();
  L510():
    dr142 = tryDispatchBuiltin.1("[", oHgt9);
    dc71 = getTryDispatchBuiltinDispatched(dr142);
    if dc71 then L512() else L511(i109, dr142);
  L511(i322, oHgt11):
    k4 = ld k;
    check L513() else D133();
  D29():
    deopt 114 [i26, 2, l4, 2];
  D55():
    deopt 268 [i26, r135];
  D133():
    deopt 602 [i322, oHgt11, k4];
  D134():
    deopt 606 [i324, dx187, l139, dx187];
  L19(i22, dx15):
    hang3 = ld hang;
    check L176() else D22();
  L45(i117, r137):
    st X = r137;
    x9 = ld x;
    check L283() else D58();
  L74(i230, r251):
    st x = r251;
    sym14 = ldf list;
    base14 = ldf list in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L417() else L418();
  L172():
    dr14 = tryDispatchBuiltin.1("[", oHgt5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L174() else L173(i11, dr14);
  L173(i20, oHgt7):
    k2 = ld k;
    check L175() else D21();
  L187():
    r53 = dyn attr__(l4, NULL, "members", 2);
    check L188() else D30();
  L277():
    goto L43(i26, r135);
  L279():
    x7 = ld x;
    check L281() else D56();
  L280():
    r136 = dyn base8(<sym x>);
    goto L45(i112, r136);
  L413():
    x25 = ld x;
    check L415() else D104();
  L414():
    r250 = dyn base13(<sym x>);
    goto L74(i112, r250);
  L512():
    dx186 = getTryDispatchBuiltinValue(dr142);
    goto L99(i109, dx186);
  L513():
    k5 = force? k4;
    __49 = ldf `[` in base;
    r352 = dyn __49(oHgt11, k5);
    goto L99(i322, r352);
  L514():
    r353 = dyn attr__18(l139, NULL, "height", dx187);
    check L515() else D135();
  D21():
    deopt 88 [i20, oHgt7, k2];
  D22():
    deopt 90 [i22, dx15, hang3];
  D30():
    deopt 117 [i26, 2, r53];
  D56():
    deopt 271 [i112, x7];
  D58():
    deopt 276 [i117, x9];
  D104():
    deopt 477 [i112, x25];
  D135():
    deopt 609 [i324, dx187, r353];
  L75(i233, r254):
    st zk = r254;
    sym15 = ldf attr;
    base15 = ldf attr in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L436() else L437();
  L174():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L19(i11, dx14);
  L175():
    k3 = force? k2;
    __2 = ldf `[` in base;
    r42 = dyn __2(oHgt7, k3);
    goto L19(i20, r42);
  L176():
    hang4 = force? hang3;
    checkMissing(hang4);
    hMax = ld hMax;
    check L177() else D23();
  L188():
    st zk = r53;
    l5 = ld zk;
    attr__1 = ldf `attr<-`;
    check L189() else D31();
  L281():
    x8 = force? x7;
    checkMissing(x8);
    as_character = ldf `as.character` in base;
    r138 = dyn as_character(x8);
    check L282() else D57();
  L283():
    x10 = force? x9;
    checkMissing(x10);
    c42 = `is.object`(x10);
    if c42 then L284() else L285(i117, x10);
  L415():
    x26 = force? x25;
    checkMissing(x26);
    as_character1 = ldf `as.character` in base;
    r252 = dyn as_character1(x26);
    check L416() else D105();
  L417():
    z32 = ld z;
    check L419() else D106();
  L418():
    r253 = dyn base14(<lang `[[`(z, `[`(x, 1))>, <lang `[[`(z, `[`(x, 2))>);
    goto L75(i230, r253);
  L515():
    st zk = r353;
    zk4 = ld zk;
    check L516() else D136();
  D23():
    deopt 91 [i22, dx15, hang4, hMax];
  D31():
    deopt 122 [i26, 0.5, l5, 0.5];
  D57():
    deopt 274 [i112, r138];
  D105():
    deopt 480 [i112, r252];
  D106():
    deopt 484 [i230, z32];
  D136():
    deopt 611 [i324, zk4];
  L46(i121, dx83):
    r140 = `<`(dx83, 0.0);
    st isL = r140;
    isL = ld isL;
    check L287() else D59();
  L80(i252, r261):
    sym16 = ldf attr;
    base16 = ldf attr in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L447() else L448();
  L177():
    hMax1 = force? hMax;
    checkMissing(hMax1);
    r43 = `*`(hang4, hMax1);
    r44 = `-`(dx15, r43);
    max = ldf max in base;
    r45 = dyn max(0.0, r44);
    check L178() else D24();
  L189():
    r54 = dyn attr__1(l5, NULL, "midpoint", 0.5);
    check L190() else D32();
  L282():
    goto L45(i112, r138);
  L284():
    dr56 = tryDispatchBuiltin.1("[", x10);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L286() else L285(i117, dr56);
  L285(i119, x12):
    __14 = ldf `[` in base;
    r139 = dyn __14(x12, 1);
    goto L46(i119, r139);
  L416():
    goto L74(i112, r252);
  L419():
    z33 = force? z32;
    checkMissing(z33);
    c68 = `is.object`(z33);
    if c68 then L420() else L421(i230, z33);
  L436():
    z48 = ld z;
    check L438() else D111();
  L437():
    r260 = dyn base15(<lang `[[`(z, `[`(x, 1))>, "members");
    goto L80(i233, r260);
  L516():
    zk5 = force? zk4;
    checkMissing(zk5);
    l140 = ld z;
    c87 = `is.object`(l140);
    if c87 then L517() else L518(i324, zk5, l140);
  D24():
    deopt 96 [i22, r45];
  D32():
    deopt 125 [i26, 0.5, r54];
  D59():
    deopt 284 [i121, isL];
  D111():
    deopt 505 [i233, z48];
  L76(i237, dx151):
    z40 = ld z;
    check L427() else D108();
  L83(i263, r268, r269):
    r281 = `+`(r268, r269);
    l123 = ld zk;
    attr__16 = ldf `attr<-`;
    check L458() else D117();
  L100(i328, dx189):
    st z = dx189;
    goto L13(i328);
  L178():
    goto L18(i22, r45);
  L190():
    st zk = r54;
    object19 = ld object;
    check L191() else D33();
  L286():
    dx82 = getTryDispatchBuiltinValue(dr56);
    goto L46(i117, dx82);
  L287():
    isL1 = force? isL;
    checkMissing(isL1);
    c43 = `as.logical`(isL1);
    if c43 then L288() else L47();
  L420():
    dr106 = tryDispatchBuiltin.1("[[", z33);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L422() else L421(i230, dr106);
  L421(i235, z35):
    x27 = ld x;
    check L423() else D107();
  L438():
    z49 = force? z48;
    checkMissing(z49);
    c72 = `is.object`(z49);
    if c72 then L439() else L440(i233, z49);
  L447():
    z56 = ld z;
    check L449() else D114();
  L448():
    r267 = dyn base16(<lang `[[`(z, `[`(x, 2))>, "members");
    goto L83(i252, r261, r267);
  L517():
    dr144 = tryDispatchBuiltin.0("[[<-", l140, zk5);
    dc72 = getTryDispatchBuiltinDispatched(dr144);
    if dc72 then L519() else L518(i324, zk5, dr144);
  L518(i326, zk7, l142):
    sym20 = ldf `as.character`;
    base20 = ldf `as.character` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L520() else L521();
  D33():
    deopt 127 [i26, object19];
  D107():
    deopt 486 [i235, z35, x27];
  D108():
    deopt 492 [i237, z40];
  D114():
    deopt 517 [i252, r261, z56];
  D117():
    deopt 530 [i263, r281, l123, r281];
  L47():
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L305() else L306();
  L52(i139, r148):
    st zk = r148;
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L320() else L321();
  L81(i256, dx159):
    attr2 = ldf attr in base;
    r264 = dyn attr2(dx159, "members");
    check L446() else D113();
  L101(i331, zk14, l145, zk15, r355):
    ____15 = ldf `[[<-` in base;
    r357 = dyn ____15(l145, zk15, r355);
    goto L100(i331, r357);
  L191():
    object20 = force? object19;
    checkMissing(object20);
    c21 = `is.object`(object20);
    if c21 then L193() else L194(i26, object20);
  L288():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L289() else L290();
  L422():
    dx150 = getTryDispatchBuiltinValue(dr106);
    goto L76(i230, dx150);
  L423():
    x28 = force? x27;
    checkMissing(x28);
    c69 = `is.object`(x28);
    if c69 then L424() else L425(i235, z35, x28);
  L427():
    z41 = force? z40;
    checkMissing(z41);
    c70 = `is.object`(z41);
    if c70 then L428() else L429(i237, z41);
  L439():
    dr114 = tryDispatchBuiltin.1("[[", z49);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L441() else L440(i233, dr114);
  L440(i254, z51):
    x35 = ld x;
    check L442() else D112();
  L449():
    z57 = force? z56;
    checkMissing(z57);
    c74 = `is.object`(z57);
    if c74 then L450() else L451(i252, r261, z57);
  L458():
    r282 = dyn attr__16(l123, NULL, "members", r281);
    check L459() else D118();
  L519():
    dx188 = getTryDispatchBuiltinValue(dr144);
    goto L100(i324, dx188);
  L520():
    k6 = ld k;
    check L522() else D137();
  L521():
    r354 = dyn base20(<sym k>);
    goto L101(i326, zk7, l142, zk5, r354);
  D112():
    deopt 507 [i254, z51, x35];
  D113():
    deopt 515 [i256, r264];
  D118():
    deopt 533 [i263, r281, r282];
  D137():
    deopt 616 [i326, zk7, l142, zk5, k6];
  L48(i126, r142):
    goto L52(i126, r142);
  L56(i156, r156):
    r161 = `+`(r156, 1);
    l78 = ld zk;
    attr__10 = ldf `attr<-`;
    check L332() else D72();
  L77(i241, z39, dx153):
    __34 = ldf `[[` in base;
    r256 = dyn __34(z39, dx153);
    goto L76(i241, r256);
  L78(i245, dx155):
    list3 = ldf list in base;
    r259 = dyn list3(dx151, dx155);
    check L435() else D110();
  L84(i267, r273, dx163):
    attr3 = ldf attr in base;
    r280 = dyn attr3(dx163, "members");
    check L457() else D116();
  L192(i32, dx17):
    c22 = `is.object`(dx17);
    if c22 then L196() else L197(i32, dx17);
  L193():
    dr16 = tryDispatchBuiltin.1("$", object20);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L195() else L194(i26, dr16);
  L194(i30, object22):
    r55 = `$`(object22, <sym labels>);
    goto L192(i30, r55);
  L289():
    x13 = ld x;
    check L291() else D60();
  L290():
    r141 = dyn base9(<lang `-`(`[`(x, 1))>, <lang `[[`(z, `[`(X, 2))>);
    goto L48(i121, r141);
  L305():
    z8 = ld z;
    check L307() else D64();
  L306():
    r149 = dyn base10(<lang `[[`(z, `[`(X, 1))>, <lang `-`(`[`(x, 2))>);
    goto L52(i121, r149);
  L320():
    z16 = ld z;
    check L322() else D68();
  L321():
    r155 = dyn base11(<lang `[[`(z, `[`(X, `+`(1.0, isL)))>, "members");
    goto L56(i139, r155);
  L424():
    dr108 = tryDispatchBuiltin.1("[", x28);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L426() else L425(i235, z35, dr108);
  L425(i239, z37, x30):
    __33 = ldf `[` in base;
    r255 = dyn __33(x30, 1);
    goto L77(i239, z37, r255);
  L428():
    dr110 = tryDispatchBuiltin.1("[[", z41);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L430() else L429(i237, dr110);
  L429(i243, z43):
    x31 = ld x;
    check L431() else D109();
  L441():
    dx158 = getTryDispatchBuiltinValue(dr114);
    goto L81(i233, dx158);
  L442():
    x36 = force? x35;
    checkMissing(x36);
    c73 = `is.object`(x36);
    if c73 then L443() else L444(i254, z51, x36);
  L446():
    goto L80(i256, r264);
  L450():
    dr118 = tryDispatchBuiltin.1("[[", z57);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L452() else L451(i252, r261, dr118);
  L451(i265, r271, z59):
    x39 = ld x;
    check L453() else D115();
  L459():
    st zk = r282;
    sym17 = ldf attr;
    base17 = ldf attr in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L460() else L461();
  L522():
    k7 = force? k6;
    checkMissing(k7);
    as_character2 = ldf `as.character` in base;
    r356 = dyn as_character2(k7);
    check L523() else D138();
  D60():
    deopt 288 [i121, x13];
  D64():
    deopt 306 [i121, z8];
  D68():
    deopt 325 [i139, z16];
  D72():
    deopt 341 [i156, r161, l78, r161];
  D109():
    deopt 494 [i243, z43, x31];
  D110():
    deopt 501 [i245, r259];
  D115():
    deopt 519 [i265, r271, z59, x39];
  D116():
    deopt 527 [i267, r273, r280];
  D138():
    deopt 619 [i326, zk7, l142, zk5, r356];
  L23(i36, dx21):
    st objlabels = dx21;
    objlabels = ld objlabels;
    check L200() else D35();
  L82(i260, z55, dx161):
    __38 = ldf `[[` in base;
    r263 = dyn __38(z55, dx161);
    goto L81(i260, r263);
  L86(i274, r284):
    sym18 = ldf attr;
    base18 = ldf attr in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L471() else L472();
  L195():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L192(i26, dx16);
  L196():
    dr18 = tryDispatchBuiltin.1("[", dx17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L198() else L197(i32, dr18);
  L197(i34, dx19):
    x5 = ld x;
    check L199() else D34();
  L291():
    x14 = force? x13;
    checkMissing(x14);
    c44 = `is.object`(x14);
    if c44 then L292() else L293(i121, x14);
  L307():
    z9 = force? z8;
    checkMissing(z9);
    c47 = `is.object`(z9);
    if c47 then L308() else L309(i121, z9);
  L322():
    z17 = force? z16;
    checkMissing(z17);
    c50 = `is.object`(z17);
    if c50 then L323() else L324(i139, z17);
  L332():
    r162 = dyn attr__10(l78, NULL, "members", r161);
    check L333() else D73();
  L426():
    dx152 = getTryDispatchBuiltinValue(dr108);
    goto L77(i235, z35, dx152);
  L430():
    dx154 = getTryDispatchBuiltinValue(dr110);
    goto L78(i237, dx154);
  L431():
    x32 = force? x31;
    checkMissing(x32);
    c71 = `is.object`(x32);
    if c71 then L432() else L433(i243, z43, x32);
  L435():
    goto L75(i245, r259);
  L443():
    dr116 = tryDispatchBuiltin.1("[", x36);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L445() else L444(i254, z51, dr116);
  L444(i258, z53, x38):
    __37 = ldf `[` in base;
    r262 = dyn __37(x38, 1);
    goto L82(i258, z53, r262);
  L452():
    dx162 = getTryDispatchBuiltinValue(dr118);
    goto L84(i252, r261, dx162);
  L453():
    x40 = force? x39;
    checkMissing(x40);
    c75 = `is.object`(x40);
    if c75 then L454() else L455(i265, r271, z59, x40);
  L457():
    goto L83(i267, r273, r280);
  L460():
    z64 = ld z;
    check L462() else D119();
  L461():
    r283 = dyn base17(<lang `[[`(z, `[`(x, 1))>, "members");
    goto L86(i263, r283);
  L523():
    goto L101(i326, zk7, l142, zk5, r356);
  D34():
    deopt 130 [i34, dx19, x5];
  D35():
    deopt 135 [i36, objlabels];
  D73():
    deopt 344 [i156, r161, r162];
  D119():
    deopt 537 [i263, z64];
  L49(i130, dx85):
    r144 = `-`(<missing>, dx85);
    z = ld z;
    check L295() else D61();
  L53(i145, dx91):
    x17 = ld x;
    check L315() else D66();
  L57(i160, dx97):
    attr = ldf attr in base;
    r160 = dyn attr(dx97, "members");
    check L331() else D71();
  L79(i249, z47, dx157):
    __36 = ldf `[[` in base;
    r258 = dyn __36(z47, dx157);
    goto L78(i249, r258);
  L85(i271, r277, z63, dx165):
    __40 = ldf `[[` in base;
    r279 = dyn __40(z63, dx165);
    goto L84(i271, r277, r279);
  L89(i285, r291, r292):
    r304 = `+`(r291, r292);
    sym19 = ldf attr;
    base19 = ldf attr in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L482() else L483();
  L198():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L23(i32, dx20);
  L199():
    x6 = force? x5;
    checkMissing(x6);
    r56 = `-`(<missing>, x6);
    __3 = ldf `[` in base;
    r57 = dyn __3(dx19, r56);
    goto L23(i34, r57);
  L200():
    objlabels1 = force? objlabels;
    checkMissing(objlabels1);
    c23 = `is.object`(objlabels1);
    if c23 then L201() else L202(i36, objlabels1);
  L292():
    dr58 = tryDispatchBuiltin.1("[", x14);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L294() else L293(i121, dr58);
  L293(i128, x16):
    __15 = ldf `[` in base;
    r143 = dyn __15(x16, 1);
    goto L49(i128, r143);
  L308():
    dr64 = tryDispatchBuiltin.1("[[", z9);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L310() else L309(i121, dr64);
  L309(i143, z11):
    X4 = ld X;
    check L311() else D65();
  L323():
    dr70 = tryDispatchBuiltin.1("[[", z17);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L325() else L324(i139, dr70);
  L324(i158, z19):
    X8 = ld X;
    check L326() else D69();
  L333():
    st zk = r162;
    _memberDend = ldf `.memberDend`;
    check L334() else D74();
  L432():
    dr112 = tryDispatchBuiltin.1("[", x32);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L434() else L433(i243, z43, dr112);
  L433(i247, z45, x34):
    __35 = ldf `[` in base;
    r257 = dyn __35(x34, 2);
    goto L79(i247, z45, r257);
  L445():
    dx160 = getTryDispatchBuiltinValue(dr116);
    goto L82(i254, z51, dx160);
  L454():
    dr120 = tryDispatchBuiltin.1("[", x40);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L456() else L455(i265, r271, z59, dr120);
  L455(i269, r275, z61, x42):
    __39 = ldf `[` in base;
    r278 = dyn __39(x42, 2);
    goto L85(i269, r275, z61, r278);
  L462():
    z65 = force? z64;
    checkMissing(z65);
    c76 = `is.object`(z65);
    if c76 then L463() else L464(i263, z65);
  L471():
    z72 = ld z;
    check L473() else D122();
  L472():
    r290 = dyn base18(<lang `[[`(z, `[`(x, 1))>, "midpoint");
    goto L89(i274, r284, r290);
  D61():
    deopt 294 [i130, z];
  D65():
    deopt 308 [i143, z11, X4];
  D66():
    deopt 314 [i145, x17];
  D69():
    deopt 327 [i158, z19, X8];
  D71():
    deopt 337 [i160, r160];
  D74():
    deopt 347 [i156];
  D122():
    deopt 549 [i274, r284, z72];
  L24(i40, dx23):
    l6 = ld zk;
    c24 = `is.object`(l6);
    if c24 then L204() else L205(i40, dx23, l6, dx23, l6);
  L87(i278, dx167):
    attr4 = ldf attr in base;
    r287 = dyn attr4(dx167, "members");
    check L470() else D121();
  L92(i296, r308, r309):
    r321 = `+`(r308, r309);
    r322 = `/`(r321, 2.0);
    l124 = ld zk;
    attr__17 = ldf `attr<-`;
    check L493() else D128();
  L201():
    dr20 = tryDispatchBuiltin.1("[", objlabels1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L203() else L202(i36, dr20);
  L202(i38, objlabels3):
    __4 = ldf `[` in base;
    r58 = dyn __4(objlabels3, 1);
    goto L24(i38, r58);
  L294():
    dx84 = getTryDispatchBuiltinValue(dr58);
    goto L49(i121, dx84);
  L295():
    z1 = force? z;
    checkMissing(z1);
    c45 = `is.object`(z1);
    if c45 then L296() else L297(i130, z1);
  L310():
    dx90 = getTryDispatchBuiltinValue(dr64);
    goto L53(i121, dx90);
  L311():
    X5 = force? X4;
    checkMissing(X5);
    c48 = `is.object`(X5);
    if c48 then L312() else L313(i143, z11, X5);
  L315():
    x18 = force? x17;
    checkMissing(x18);
    c49 = `is.object`(x18);
    if c49 then L316() else L317(i145, x18);
  L325():
    dx96 = getTryDispatchBuiltinValue(dr70);
    goto L57(i139, dx96);
  L326():
    X9 = force? X8;
    checkMissing(X9);
    c51 = `is.object`(X9);
    if c51 then L327() else L328(i158, z19, X9);
  L331():
    goto L56(i160, r160);
  L334():
    p7 = prom<V +>{
      zk = ld zk;
      zk1 = force? zk;
      checkMissing(zk1);
      c52 = `is.object`(zk1);
      if c52 then L1() else L2(zk1);
    L0(dx101):
      return dx101;
    L1():
      dr74 = tryDispatchBuiltin.1("[[", zk1);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L3() else L2(dr74);
    L2(zk3):
      __23 = ldf `[[` in base;
      r163 = dyn __23(zk3, 1);
      goto L0(r163);
    L3():
      dx100 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx100);
    };
    r165 = dyn _memberDend(p7);
    check L335() else D75();
  L434():
    dx156 = getTryDispatchBuiltinValue(dr112);
    goto L79(i243, z43, dx156);
  L456():
    dx164 = getTryDispatchBuiltinValue(dr120);
    goto L85(i265, r271, z59, dx164);
  L463():
    dr122 = tryDispatchBuiltin.1("[[", z65);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L465() else L464(i263, dr122);
  L464(i276, z67):
    x43 = ld x;
    check L466() else D120();
  L473():
    z73 = force? z72;
    checkMissing(z73);
    c78 = `is.object`(z73);
    if c78 then L474() else L475(i274, r284, z73);
  L482():
    z80 = ld z;
    check L484() else D125();
  L483():
    r307 = dyn base19(<lang `[[`(z, `[`(x, 2))>, "midpoint");
    goto L92(i285, r304, r307);
  D75():
    deopt 349 [i156, r165];
  D120():
    deopt 539 [i276, z67, x43];
  D121():
    deopt 547 [i278, r287];
  D125():
    deopt 562 [i285, r304, z80];
  D128():
    deopt 577 [i296, r322, l124, r322];
  L25(i44, dx31, l12, dx32, dx33):
    attr__2 = ldf `attr<-`;
    check L207() else D36();
  L50(i134, dx87):
    list1 = ldf list in base;
    r147 = dyn list1(r144, dx87);
    check L303() else D63();
  L54(i149, z15, dx93):
    __19 = ldf `[[` in base;
    r151 = dyn __19(z15, dx93);
    goto L53(i149, r151);
  L55(i153, dx95):
    r153 = `-`(<missing>, dx95);
    list2 = ldf list in base;
    r154 = dyn list2(dx91, r153);
    check L319() else D67();
  L58(i164, z23, dx99):
    __22 = ldf `[[` in base;
    r159 = dyn __22(z23, dx99);
    goto L57(i164, r159);
  L90(i289, r296, dx171):
    attr5 = ldf attr in base;
    r303 = dyn attr5(dx171, "midpoint");
    check L481() else D124();
  L203():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L24(i36, dx22);
  L204():
    dr22 = tryDispatchBuiltin.1("[[", l6);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L206() else L205(i40, dx23, l6, dx23, dr22);
  L205(i42, dx26, l9, dx27, l10):
    __5 = ldf `[[` in base;
    r59 = dyn __5(l10, 1);
    goto L25(i42, dx26, l9, dx27, r59);
  L296():
    dr60 = tryDispatchBuiltin.1("[[", z1);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L298() else L297(i130, dr60);
  L297(i132, z3):
    X = ld X;
    check L299() else D62();
  L312():
    dr66 = tryDispatchBuiltin.1("[", X5);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L314() else L313(i143, z11, dr66);
  L313(i147, z13, X7):
    __18 = ldf `[` in base;
    r150 = dyn __18(X7, 1);
    goto L54(i147, z13, r150);
  L316():
    dr68 = tryDispatchBuiltin.1("[", x18);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L318() else L317(i145, dr68);
  L317(i151, x20):
    __20 = ldf `[` in base;
    r152 = dyn __20(x20, 2);
    goto L55(i151, r152);
  L327():
    dr72 = tryDispatchBuiltin.1("[", X9);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L329() else L328(i158, z19, dr72);
  L328(i162, z21, X11):
    isL2 = ld isL;
    check L330() else D70();
  L335():
    sym12 = ldf attr;
    base12 = ldf attr in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L336() else L337();
  L465():
    dx166 = getTryDispatchBuiltinValue(dr122);
    goto L87(i263, dx166);
  L466():
    x44 = force? x43;
    checkMissing(x44);
    c77 = `is.object`(x44);
    if c77 then L467() else L468(i276, z67, x44);
  L470():
    goto L86(i278, r287);
  L474():
    dr126 = tryDispatchBuiltin.1("[[", z73);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L476() else L475(i274, r284, dr126);
  L475(i287, r294, z75):
    x47 = ld x;
    check L477() else D123();
  L484():
    z81 = force? z80;
    checkMissing(z81);
    c80 = `is.object`(z81);
    if c80 then L485() else L486(i285, r304, z81);
  L493():
    r323 = dyn attr__17(l124, NULL, "midpoint", r322);
    check L494() else D129();
  D36():
    deopt 146 [i44, dx31, l12, dx33, dx32];
  D62():
    deopt 296 [i132, z3, X];
  D63():
    deopt 303 [i134, r147];
  D67():
    deopt 321 [i153, r154];
  D70():
    deopt 330 [i162, z21, X11, 1.0, isL2];
  D123():
    deopt 551 [i287, r294, z75, x47];
  D124():
    deopt 559 [i289, r296, r303];
  D129():
    deopt 580 [i296, r322, r323];
  L59(i167, r169, r170):
    r183 = `+`(r169, r170);
    r184 = `/`(r183, 2.0);
    l79 = ld zk;
    attr__11 = ldf `attr<-`;
    check L348() else D80();
  L88(i282, z71, dx169):
    __42 = ldf `[[` in base;
    r286 = dyn __42(z71, dx169);
    goto L87(i282, r286);
  L93(i300, r313, dx175):
    attr6 = ldf attr in base;
    r320 = dyn attr6(dx175, "midpoint");
    check L492() else D127();
  L206():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L25(i40, dx23, l6, dx23, dx30);
  L207():
    r60 = dyn attr__2(dx33, NULL, "label", dx32);
    check L208() else D37();
  L298():
    dx86 = getTryDispatchBuiltinValue(dr60);
    goto L50(i130, dx86);
  L299():
    X1 = force? X;
    checkMissing(X1);
    c46 = `is.object`(X1);
    if c46 then L300() else L301(i132, z3, X1);
  L303():
    goto L48(i134, r147);
  L314():
    dx92 = getTryDispatchBuiltinValue(dr66);
    goto L54(i143, z11, dx92);
  L318():
    dx94 = getTryDispatchBuiltinValue(dr68);
    goto L55(i145, dx94);
  L319():
    goto L52(i153, r154);
  L329():
    dx98 = getTryDispatchBuiltinValue(dr72);
    goto L58(i158, z19, dx98);
  L330():
    isL3 = force? isL2;
    checkMissing(isL3);
    r157 = `+`(1.0, isL3);
    __21 = ldf `[` in base;
    r158 = dyn __21(X11, r157);
    goto L58(i162, z21, r158);
  L336():
    z24 = ld z;
    check L338() else D76();
  L337():
    r168 = dyn base12(<lang `[[`(z, `[`(X, `+`(1.0, isL)))>, "midpoint");
    goto L59(i156, r165, r168);
  L467():
    dr124 = tryDispatchBuiltin.1("[", x44);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L469() else L468(i276, z67, dr124);
  L468(i280, z69, x46):
    __41 = ldf `[` in base;
    r285 = dyn __41(x46, 1);
    goto L88(i280, z69, r285);
  L476():
    dx170 = getTryDispatchBuiltinValue(dr126);
    goto L90(i274, r284, dx170);
  L477():
    x48 = force? x47;
    checkMissing(x48);
    c79 = `is.object`(x48);
    if c79 then L478() else L479(i287, r294, z75, x48);
  L481():
    goto L89(i289, r296, r303);
  L485():
    dr130 = tryDispatchBuiltin.1("[[", z81);
    dc65 = getTryDispatchBuiltinDispatched(dr130);
    if dc65 then L487() else L486(i285, r304, dr130);
  L486(i298, r311, z83):
    x51 = ld x;
    check L488() else D126();
  L494():
    st zk = r323;
    l125 = ld z;
    c82 = `is.object`(l125);
    if c82 then L495() else L496(i296, NULL, l125);
  D37():
    deopt 149 [i44, dx31, l12, r60];
  D76():
    deopt 351 [i156, r165, z24];
  D80():
    deopt 368 [i167, r184, l79, r184];
  D126():
    deopt 564 [i298, r311, z83, x51];
  D127():
    deopt 572 [i300, r313, r320];
  L51(i138, z7, dx89):
    __17 = ldf `[[` in base;
    r146 = dyn __17(z7, dx89);
    goto L50(i138, r146);
  L91(i293, r300, z79, dx173):
    __44 = ldf `[[` in base;
    r302 = dyn __44(z79, dx173);
    goto L90(i293, r300, r302);
  L95(i308, r327, dx179):
    st z = dx179;
    l132 = ld z;
    c84 = `is.object`(l132);
    if c84 then L502() else L503(i308, r327, l132);
  L208():
    c25 = `is.object`(l12);
    if c25 then L209() else L210(i44, dx31, l12);
  L300():
    dr62 = tryDispatchBuiltin.1("[", X1);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L302() else L301(i132, z3, dr62);
  L301(i136, z5, X3):
    __16 = ldf `[` in base;
    r145 = dyn __16(X3, 2);
    goto L51(i136, z5, r145);
  L338():
    z25 = force? z24;
    checkMissing(z25);
    c53 = `is.object`(z25);
    if c53 then L339() else L340(i156, r165, z25);
  L348():
    r185 = dyn attr__11(l79, NULL, "midpoint", r184);
    check L349() else D81();
  L469():
    dx168 = getTryDispatchBuiltinValue(dr124);
    goto L88(i276, z67, dx168);
  L478():
    dr128 = tryDispatchBuiltin.1("[", x48);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L480() else L479(i287, r294, z75, dr128);
  L479(i291, r298, z77, x50):
    __43 = ldf `[` in base;
    r301 = dyn __43(x50, 1);
    goto L91(i291, r298, z77, r301);
  L487():
    dx174 = getTryDispatchBuiltinValue(dr130);
    goto L93(i285, r304, dx174);
  L488():
    x52 = force? x51;
    checkMissing(x52);
    c81 = `is.object`(x52);
    if c81 then L489() else L490(i298, r311, z83, x52);
  L492():
    goto L92(i300, r313, r320);
  L495():
    dr134 = tryDispatchBuiltin.0("[[<-", l125, NULL);
    dc67 = getTryDispatchBuiltinDispatched(dr134);
    if dc67 then L497() else L496(i296, NULL, dr134);
  L496(i306, r325, l127):
    x55 = ld x;
    check L498() else D130();
  D81():
    deopt 371 [i167, r184, r185];
  D130():
    deopt 585 [i306, r325, l127, NULL, x55];
  L26(i48, dx39):
    st zk = dx39;
    objlabels4 = ld objlabels;
    check L212() else D38();
  L60(i171, r174, dx103):
    attr1 = ldf attr in base;
    r182 = dyn attr1(dx103, "midpoint");
    check L347() else D79();
  L94(i304, r317, z87, dx177):
    __46 = ldf `[[` in base;
    r319 = dyn __46(z87, dx177);
    goto L93(i304, r317, r319);
  L97(i316, r341, dx183):
    st z = dx183;
    goto L42(i316);
  L209():
    dr24 = tryDispatchBuiltin.0("[[<-", l12, r60);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L211() else L210(i44, dx31, dr24);
  L210(i46, dx35, l14):
    ____ = ldf `[[<-` in base;
    r61 = dyn ____(l14, r60, 1);
    goto L26(i46, r61);
  L302():
    dx88 = getTryDispatchBuiltinValue(dr62);
    goto L51(i132, z3, dx88);
  L339():
    dr76 = tryDispatchBuiltin.1("[[", z25);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L341() else L340(i156, r165, dr76);
  L340(i169, r172, z27):
    X12 = ld X;
    check L342() else D77();
  L349():
    st zk = r185;
    l80 = ld zk;
    c55 = `is.object`(l80);
    if c55 then L350() else L351(i167, 1, l80, 1, l80);
  L480():
    dx172 = getTryDispatchBuiltinValue(dr128);
    goto L91(i287, r294, z75, dx172);
  L489():
    dr132 = tryDispatchBuiltin.1("[", x52);
    dc66 = getTryDispatchBuiltinDispatched(dr132);
    if dc66 then L491() else L490(i298, r311, z83, dr132);
  L490(i302, r315, z85, x54):
    __45 = ldf `[` in base;
    r318 = dyn __45(x54, 2);
    goto L94(i302, r315, z85, r318);
  L497():
    dx178 = getTryDispatchBuiltinValue(dr134);
    goto L95(i296, NULL, dx178);
  L498():
    x56 = force? x55;
    checkMissing(x56);
    c83 = `is.object`(x56);
    if c83 then L499() else L500(i306, r325, l127, NULL, x56);
  L502():
    dr138 = tryDispatchBuiltin.0("[[<-", l132, r327);
    dc69 = getTryDispatchBuiltinDispatched(dr138);
    if dc69 then L504() else L503(i308, r327, dr138);
  L503(i314, r339, l134):
    x59 = ld x;
    check L505() else D131();
  D38():
    deopt 154 [i48, objlabels4];
  D77():
    deopt 353 [i169, r172, z27, X12];
  D79():
    deopt 363 [i171, r174, r182];
  D131():
    deopt 593 [i314, r339, l134, r327, x59];
  L62(i179, r192, l86, r193, dx107):
    attr__12 = ldf `attr<-`;
    check L354() else D83();
  L96(i312, r334, l131, r335, dx181):
    ____13 = ldf `[[<-` in base;
    r337 = dyn ____13(l131, r335, dx181);
    goto L95(i312, r334, r337);
  L211():
    dx37 = getTryDispatchBuiltinValue(dr24);
    goto L26(i44, dx37);
  L212():
    objlabels5 = force? objlabels4;
    checkMissing(objlabels5);
    c26 = `is.object`(objlabels5);
    if c26 then L213() else L214(i48, objlabels5);
  L341():
    dx102 = getTryDispatchBuiltinValue(dr76);
    goto L60(i156, r165, dx102);
  L342():
    X13 = force? X12;
    checkMissing(X13);
    c54 = `is.object`(X13);
    if c54 then L343() else L344(i169, r172, z27, X13);
  L347():
    goto L59(i171, r174, r182);
  L350():
    dr80 = tryDispatchBuiltin.1("[[", l80);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L352() else L351(i167, 1, l80, 1, dr80);
  L351(i177, r188, l83, r189, l84):
    isL6 = ld isL;
    check L353() else D82();
  L491():
    dx176 = getTryDispatchBuiltinValue(dr132);
    goto L94(i298, r311, z83, dx176);
  L499():
    dr136 = tryDispatchBuiltin.1("[", x56);
    dc68 = getTryDispatchBuiltinDispatched(dr136);
    if dc68 then L501() else L500(i306, r325, l127, NULL, dr136);
  L500(i310, r330, l129, r331, x58):
    __47 = ldf `[` in base;
    r336 = dyn __47(x58, 2);
    goto L96(i310, r330, l129, r331, r336);
  L504():
    dx182 = getTryDispatchBuiltinValue(dr138);
    goto L97(i308, r327, dx182);
  L505():
    x60 = force? x59;
    checkMissing(x60);
    c85 = `is.object`(x60);
    if c85 then L506() else L507(i314, r339, l134, r327, x60);
  D82():
    deopt 378 [i177, r188, l83, r189, l84, 2.0, isL6];
  D83():
    deopt 383 [i179, r192, l86, dx107, r193];
  L27(i52, dx41):
    l15 = ld zk;
    c27 = `is.object`(l15);
    if c27 then L216() else L217(i52, dx41, l15, dx41, l15);
  L61(i175, r178, z31, dx105):
    __25 = ldf `[[` in base;
    r181 = dyn __25(z31, dx105);
    goto L60(i175, r178, r181);
  L98(i320, r348, l138, r349, dx185):
    ____14 = ldf `[[<-` in base;
    r351 = dyn ____14(l138, r349, dx185);
    goto L97(i320, r348, r351);
  L213():
    dr26 = tryDispatchBuiltin.1("[", objlabels5);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L215() else L214(i48, dr26);
  L214(i50, objlabels7):
    __6 = ldf `[` in base;
    r62 = dyn __6(objlabels7, 2);
    goto L27(i50, r62);
  L343():
    dr78 = tryDispatchBuiltin.1("[", X13);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L345() else L344(i169, r172, z27, dr78);
  L344(i173, r176, z29, X15):
    isL4 = ld isL;
    check L346() else D78();
  L352():
    dx106 = getTryDispatchBuiltinValue(dr80);
    goto L62(i167, 1, l80, 1, dx106);
  L353():
    isL7 = force? isL6;
    checkMissing(isL7);
    r194 = `-`(2.0, isL7);
    __26 = ldf `[[` in base;
    r195 = dyn __26(l84, r194);
    goto L62(i177, r188, l83, r189, r195);
  L354():
    r196 = dyn attr__12(dx107, NULL, "members", r193);
    check L355() else D84();
  L501():
    dx180 = getTryDispatchBuiltinValue(dr136);
    goto L96(i306, r325, l127, NULL, dx180);
  L506():
    dr140 = tryDispatchBuiltin.1("[", x60);
    dc70 = getTryDispatchBuiltinDispatched(dr140);
    if dc70 then L508() else L507(i314, r339, l134, r327, dr140);
  L507(i318, r344, l136, r345, x62):
    __48 = ldf `[` in base;
    r350 = dyn __48(x62, 1);
    goto L98(i318, r344, l136, r345, r350);
  D78():
    deopt 356 [i173, r176, z29, X15, 1.0, isL4];
  D84():
    deopt 386 [i179, r192, l86, r196];
  L28(i56, dx49, l21, dx50, dx51):
    attr__3 = ldf `attr<-`;
    check L219() else D39();
  L215():
    dx40 = getTryDispatchBuiltinValue(dr26);
    goto L27(i48, dx40);
  L216():
    dr28 = tryDispatchBuiltin.1("[[", l15);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L218() else L217(i52, dx41, l15, dx41, dr28);
  L217(i54, dx44, l18, dx45, l19):
    __7 = ldf `[[` in base;
    r63 = dyn __7(l19, 2);
    goto L28(i54, dx44, l18, dx45, r63);
  L345():
    dx104 = getTryDispatchBuiltinValue(dr78);
    goto L61(i169, r172, z27, dx104);
  L346():
    isL5 = force? isL4;
    checkMissing(isL5);
    r179 = `+`(1.0, isL5);
    __24 = ldf `[` in base;
    r180 = dyn __24(X15, r179);
    goto L61(i173, r176, z29, r180);
  L355():
    c56 = `is.object`(l86);
    if c56 then L356() else L357(i179, r192, l86);
  L508():
    dx184 = getTryDispatchBuiltinValue(dr140);
    goto L98(i314, r339, l134, r327, dx184);
  D39():
    deopt 165 [i56, dx49, l21, dx51, dx50];
  L63(i183, dx109):
    st zk = dx109;
    h26 = ld h0;
    check L360() else D86();
  L218():
    dx48 = getTryDispatchBuiltinValue(dr28);
    goto L28(i52, dx41, l15, dx41, dx48);
  L219():
    r64 = dyn attr__3(dx51, NULL, "label", dx50);
    check L220() else D40();
  L356():
    dr82 = tryDispatchBuiltin.0("[[<-", l86, r196);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L358() else L357(i179, r192, dr82);
  L357(i181, r198, l88):
    isL8 = ld isL;
    check L359() else D85();
  D40():
    deopt 168 [i56, dx49, l21, r64];
  D85():
    deopt 388 [i181, r198, l88, r196, 2.0, isL8];
  D86():
    deopt 393 [i183, h26];
  L220():
    c28 = `is.object`(l21);
    if c28 then L221() else L222(i56, dx49, l21);
  L358():
    dx108 = getTryDispatchBuiltinValue(dr82);
    goto L63(i179, dx108);
  L359():
    isL9 = force? isL8;
    checkMissing(isL9);
    r201 = `-`(2.0, isL9);
    ____8 = ldf `[[<-` in base;
    r202 = dyn ____8(l88, r196, r201);
    goto L63(i181, r202);
  L360():
    h27 = force? h26;
    checkMissing(h27);
    l89 = ld zk;
    c57 = `is.object`(l89);
    if c57 then L361() else L362(i183, h27, l89, h27, l89);
  L29(i60, dx57):
    st zk = dx57;
    l24 = ld zk;
    c29 = `is.object`(l24);
    if c29 then L224() else L225(i60, 1, l24, 1, l24);
  L64(i187, h34, l95, h35, dx111):
    attr__13 = ldf `attr<-`;
    check L365() else D88();
  L221():
    dr30 = tryDispatchBuiltin.0("[[<-", l21, r64);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L223() else L222(i56, dx49, dr30);
  L222(i58, dx53, l23):
    ____1 = ldf `[[<-` in base;
    r65 = dyn ____1(l23, r64, 2);
    goto L29(i58, r65);
  L361():
    dr84 = tryDispatchBuiltin.1("[[", l89);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L363() else L362(i183, h27, l89, h27, dr84);
  L362(i185, h30, l92, h31, l93):
    isL10 = ld isL;
    check L364() else D87();
  D87():
    deopt 398 [i185, h30, l92, h31, l93, 2.0, isL10];
  D88():
    deopt 403 [i187, h34, l95, dx111, h35];
  L30(i64, r72, l30, r73, dx59):
    attr__4 = ldf `attr<-`;
    check L227() else D41();
  L223():
    dx55 = getTryDispatchBuiltinValue(dr30);
    goto L29(i56, dx55);
  L224():
    dr32 = tryDispatchBuiltin.1("[[", l24);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L226() else L225(i60, 1, l24, 1, dr32);
  L225(i62, r68, l27, r69, l28):
    __8 = ldf `[[` in base;
    r74 = dyn __8(l28, 2);
    goto L30(i62, r68, l27, r69, r74);
  L363():
    dx110 = getTryDispatchBuiltinValue(dr84);
    goto L64(i183, h27, l89, h27, dx110);
  L364():
    isL11 = force? isL10;
    checkMissing(isL11);
    r203 = `-`(2.0, isL11);
    __27 = ldf `[[` in base;
    r204 = dyn __27(l93, r203);
    goto L64(i185, h30, l92, h31, r204);
  L365():
    r205 = dyn attr__13(dx111, NULL, "height", h35);
    check L366() else D89();
  D41():
    deopt 181 [i64, r72, l30, dx59, r73];
  D89():
    deopt 406 [i187, h34, l95, r205];
  L226():
    dx58 = getTryDispatchBuiltinValue(dr32);
    goto L30(i60, 1, l24, 1, dx58);
  L227():
    r75 = dyn attr__4(dx59, NULL, "members", r73);
    check L228() else D42();
  L366():
    c58 = `is.object`(l95);
    if c58 then L367() else L368(i187, h34, l95);
  D42():
    deopt 184 [i64, r72, l30, r75];
  L65(i191, dx113):
    st zk = dx113;
    object23 = ld object;
    check L371() else D91();
  L228():
    c30 = `is.object`(l30);
    if c30 then L229() else L230(i64, r72, l30);
  L367():
    dr86 = tryDispatchBuiltin.0("[[<-", l95, r205);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L369() else L368(i187, h34, dr86);
  L368(i189, h37, l97):
    isL12 = ld isL;
    check L370() else D90();
  D90():
    deopt 408 [i189, h37, l97, r205, 2.0, isL12];
  D91():
    deopt 413 [i191, object23];
  L31(i68, r79, dx61):
    st zk = dx61;
    l33 = ld zk;
    c31 = `is.object`(l33);
    if c31 then L232() else L233(i68, r79, l33, r79, l33);
  L229():
    dr34 = tryDispatchBuiltin.0("[[<-", l30, r75);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L231() else L230(i64, r72, dr34);
  L230(i66, r77, l32):
    ____2 = ldf `[[<-` in base;
    r80 = dyn ____2(l32, r75, 2);
    goto L31(i66, r77, r80);
  L369():
    dx112 = getTryDispatchBuiltinValue(dr86);
    goto L65(i187, dx112);
  L370():
    isL13 = force? isL12;
    checkMissing(isL13);
    r206 = `-`(2.0, isL13);
    ____9 = ldf `[[<-` in base;
    r207 = dyn ____9(l97, r205, r206);
    goto L65(i189, r207);
  L371():
    object24 = force? object23;
    checkMissing(object24);
    c59 = `is.object`(object24);
    if c59 then L373() else L374(i191, object24);
  L32(i72, r87, l39, r88, dx63):
    attr__5 = ldf `attr<-`;
    check L235() else D43();
  L231():
    dx60 = getTryDispatchBuiltinValue(dr34);
    goto L31(i64, r72, dx60);
  L232():
    dr36 = tryDispatchBuiltin.1("[[", l33);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L234() else L233(i68, r79, l33, r79, dr36);
  L233(i70, r83, l36, r84, l37):
    __9 = ldf `[[` in base;
    r89 = dyn __9(l37, 1);
    goto L32(i70, r83, l36, r84, r89);
  L372(i195, dx115):
    c60 = `is.object`(dx115);
    if c60 then L376() else L377(i195, dx115);
  L373():
    dr88 = tryDispatchBuiltin.1("$", object24);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L375() else L374(i191, dr88);
  L374(i193, object26):
    r208 = `$`(object26, <sym labels>);
    goto L372(i193, r208);
  D43():
    deopt 195 [i72, r87, l39, dx63, r88];
  L66(i199, dx119):
    l98 = ld zk;
    c62 = `is.object`(l98);
    if c62 then L384() else L385(i199, dx119, l98, dx119, l98);
  L234():
    dx62 = getTryDispatchBuiltinValue(dr36);
    goto L32(i68, r79, l33, r79, dx62);
  L235():
    r90 = dyn attr__5(dx63, NULL, "members", r88);
    check L236() else D44();
  L375():
    dx114 = getTryDispatchBuiltinValue(dr88);
    goto L372(i191, dx114);
  L376():
    dr90 = tryDispatchBuiltin.1("[", dx115);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L378() else L377(i195, dr90);
  L377(i197, dx117):
    x21 = ld x;
    check L379() else D92();
  D44():
    deopt 198 [i72, r87, l39, r90];
  D92():
    deopt 416 [i197, dx117, x21];
  L68(i207, dx133, l104, dx134, dx135):
    attr__14 = ldf `attr<-`;
    check L388() else D95();
  L236():
    c32 = `is.object`(l39);
    if c32 then L237() else L238(i72, r87, l39);
  L378():
    dx118 = getTryDispatchBuiltinValue(dr90);
    goto L66(i195, dx118);
  L379():
    x22 = force? x21;
    checkMissing(x22);
    c61 = `is.object`(x22);
    if c61 then L380() else L381(i197, dx117, x22);
  L384():
    dr94 = tryDispatchBuiltin.1("[[", l98);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L386() else L385(i199, dx119, l98, dx119, dr94);
  L385(i205, dx128, l101, dx129, l102):
    isL16 = ld isL;
    check L387() else D94();
  D94():
    deopt 428 [i205, dx128, l101, dx129, l102, 2.0, isL16];
  D95():
    deopt 433 [i207, dx133, l104, dx135, dx134];
  L33(i76, dx65):
    st zk = dx65;
    h0 = ld h0;
    check L240() else D45();
  L67(i203, dx124, dx125):
    r211 = `-`(<missing>, dx125);
    __29 = ldf `[` in base;
    r212 = dyn __29(dx124, r211);
    goto L66(i203, r212);
  L237():
    dr38 = tryDispatchBuiltin.0("[[<-", l39, r90);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L239() else L238(i72, r87, dr38);
  L238(i74, r92, l41):
    ____3 = ldf `[[<-` in base;
    r95 = dyn ____3(l41, r90, 1);
    goto L33(i74, r95);
  L380():
    dr92 = tryDispatchBuiltin.1("[", x22);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L382() else L381(i197, dx117, dr92);
  L381(i201, dx121, x24):
    isL14 = ld isL;
    check L383() else D93();
  L386():
    dx132 = getTryDispatchBuiltinValue(dr94);
    goto L68(i199, dx119, l98, dx119, dx132);
  L387():
    isL17 = force? isL16;
    checkMissing(isL17);
    r213 = `-`(2.0, isL17);
    __30 = ldf `[[` in base;
    r214 = dyn __30(l102, r213);
    goto L68(i205, dx128, l101, dx129, r214);
  L388():
    r215 = dyn attr__14(dx135, NULL, "label", dx134);
    check L389() else D96();
  D45():
    deopt 203 [i76, h0];
  D93():
    deopt 419 [i201, dx121, x24, 2.0, isL14];
  D96():
    deopt 436 [i207, dx133, l104, r215];
  L239():
    dx64 = getTryDispatchBuiltinValue(dr38);
    goto L33(i72, dx64);
  L240():
    h1 = force? h0;
    checkMissing(h1);
    l42 = ld zk;
    c33 = `is.object`(l42);
    if c33 then L241() else L242(i76, h1, l42, h1, l42);
  L382():
    dx123 = getTryDispatchBuiltinValue(dr92);
    goto L67(i197, dx117, dx123);
  L383():
    isL15 = force? isL14;
    checkMissing(isL15);
    r209 = `-`(2.0, isL15);
    __28 = ldf `[` in base;
    r210 = dyn __28(x24, r209);
    goto L67(i201, dx121, r210);
  L389():
    c63 = `is.object`(l104);
    if c63 then L390() else L391(i207, dx133, l104);
  L34(i80, h8, l48, h9, dx67):
    attr__6 = ldf `attr<-`;
    check L244() else D46();
  L69(i211, dx141):
    st zk = dx141;
    l107 = ld zk;
    c64 = `is.object`(l107);
    if c64 then L394() else L395(i211, TRUE, l107, TRUE, l107);
  L241():
    dr40 = tryDispatchBuiltin.1("[[", l42);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L243() else L242(i76, h1, l42, h1, dr40);
  L242(i78, h4, l45, h5, l46):
    __10 = ldf `[[` in base;
    r96 = dyn __10(l46, 2);
    goto L34(i78, h4, l45, h5, r96);
  L390():
    dr96 = tryDispatchBuiltin.0("[[<-", l104, r215);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L392() else L391(i207, dx133, dr96);
  L391(i209, dx137, l106):
    isL18 = ld isL;
    check L393() else D97();
  D46():
    deopt 211 [i80, h8, l48, dx67, h9];
  D97():
    deopt 438 [i209, dx137, l106, r215, 2.0, isL18];
  L70(i215, r224, l113, r225, dx143):
    attr__15 = ldf `attr<-`;
    check L398() else D99();
  L243():
    dx66 = getTryDispatchBuiltinValue(dr40);
    goto L34(i76, h1, l42, h1, dx66);
  L244():
    r97 = dyn attr__6(dx67, NULL, "height", h9);
    check L245() else D47();
  L392():
    dx139 = getTryDispatchBuiltinValue(dr96);
    goto L69(i207, dx139);
  L393():
    isL19 = force? isL18;
    checkMissing(isL19);
    r216 = `-`(2.0, isL19);
    ____10 = ldf `[[<-` in base;
    r217 = dyn ____10(l106, r215, r216);
    goto L69(i209, r217);
  L394():
    dr98 = tryDispatchBuiltin.1("[[", l107);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L396() else L395(i211, TRUE, l107, TRUE, dr98);
  L395(i213, r220, l110, r221, l111):
    isL20 = ld isL;
    check L397() else D98();
  D47():
    deopt 214 [i80, h8, l48, r97];
  D98():
    deopt 448 [i213, r220, l110, r221, l111, 2.0, isL20];
  D99():
    deopt 453 [i215, r224, l113, dx143, r225];
  L245():
    c34 = `is.object`(l48);
    if c34 then L246() else L247(i80, h8, l48);
  L396():
    dx142 = getTryDispatchBuiltinValue(dr98);
    goto L70(i211, TRUE, l107, TRUE, dx142);
  L397():
    isL21 = force? isL20;
    checkMissing(isL21);
    r226 = `-`(2.0, isL21);
    __31 = ldf `[[` in base;
    r227 = dyn __31(l111, r226);
    goto L70(i213, r220, l110, r221, r227);
  L398():
    r228 = dyn attr__15(dx143, NULL, "leaf", r225);
    check L399() else D100();
  D100():
    deopt 456 [i215, r224, l113, r228];
  L35(i84, h13, dx69):
    st zk = dx69;
    l51 = ld zk;
    c35 = `is.object`(l51);
    if c35 then L249() else L250(i84, h13, l51, h13, l51);
  L246():
    dr42 = tryDispatchBuiltin.0("[[<-", l48, r97);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L248() else L247(i80, h8, dr42);
  L247(i82, h11, l50):
    ____4 = ldf `[[<-` in base;
    r98 = dyn ____4(l50, r97, 2);
    goto L35(i82, h11, r98);
  L399():
    c65 = `is.object`(l113);
    if c65 then L400() else L401(i215, r224, l113);
  L36(i88, h20, l57, h21, dx71):
    attr__7 = ldf `attr<-`;
    check L252() else D48();
  L71(i219, dx145):
    st zk = dx145;
    l116 = ld z;
    c66 = `is.object`(l116);
    if c66 then L404() else L405(i219, NULL, l116);
  L248():
    dx68 = getTryDispatchBuiltinValue(dr42);
    goto L35(i80, h8, dx68);
  L249():
    dr44 = tryDispatchBuiltin.1("[[", l51);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L251() else L250(i84, h13, l51, h13, dr44);
  L250(i86, h16, l54, h17, l55):
    __11 = ldf `[[` in base;
    r99 = dyn __11(l55, 1);
    goto L36(i86, h16, l54, h17, r99);
  L400():
    dr100 = tryDispatchBuiltin.0("[[<-", l113, r228);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L402() else L401(i215, r224, dr100);
  L401(i217, r230, l115):
    isL22 = ld isL;
    check L403() else D101();
  D48():
    deopt 225 [i88, h20, l57, dx71, h21];
  D101():
    deopt 458 [i217, r230, l115, r228, 2.0, isL22];
  L72(i223, r238, dx147):
    st z = dx147;
    goto L42(i223);
  L251():
    dx70 = getTryDispatchBuiltinValue(dr44);
    goto L36(i84, h13, l51, h13, dx70);
  L252():
    r100 = dyn attr__7(dx71, NULL, "height", h21);
    check L253() else D49();
  L402():
    dx144 = getTryDispatchBuiltinValue(dr100);
    goto L71(i215, dx144);
  L403():
    isL23 = force? isL22;
    checkMissing(isL23);
    r233 = `-`(2.0, isL23);
    ____11 = ldf `[[<-` in base;
    r234 = dyn ____11(l115, r228, r233);
    goto L71(i217, r234);
  L404():
    dr102 = tryDispatchBuiltin.0("[[<-", l116, NULL);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L406() else L405(i219, NULL, dr102);
  L405(i221, r236, l118):
    X16 = ld X;
    check L407() else D102();
  D49():
    deopt 228 [i88, h20, l57, r100];
  D102():
    deopt 466 [i221, r236, l118, NULL, X16];
  L253():
    c36 = `is.object`(l57);
    if c36 then L254() else L255(i88, h20, l57);
  L406():
    dx146 = getTryDispatchBuiltinValue(dr102);
    goto L72(i219, NULL, dx146);
  L407():
    X17 = force? X16;
    checkMissing(X17);
    c67 = `is.object`(X17);
    if c67 then L408() else L409(i221, r236, l118, NULL, X17);
  L37(i92, dx73):
    st zk = dx73;
    l60 = ld zk;
    c37 = `is.object`(l60);
    if c37 then L257() else L258(i92, TRUE, l60, TRUE, l60);
  L73(i227, r245, l122, r246, dx149):
    ____12 = ldf `[[<-` in base;
    r249 = dyn ____12(l122, r246, dx149);
    goto L72(i227, r245, r249);
  L254():
    dr46 = tryDispatchBuiltin.0("[[<-", l57, r100);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L256() else L255(i88, h20, dr46);
  L255(i90, h23, l59):
    ____5 = ldf `[[<-` in base;
    r101 = dyn ____5(l59, r100, 1);
    goto L37(i90, r101);
  L408():
    dr104 = tryDispatchBuiltin.1("[", X17);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L410() else L409(i221, r236, l118, NULL, dr104);
  L409(i225, r241, l120, r242, X19):
    isL24 = ld isL;
    check L411() else D103();
  D103():
    deopt 469 [i225, r241, l120, r242, X19, 1.0, isL24];
  L38(i96, r108, l66, r109, dx75):
    attr__8 = ldf `attr<-`;
    check L260() else D50();
  L256():
    dx72 = getTryDispatchBuiltinValue(dr46);
    goto L37(i88, dx72);
  L257():
    dr48 = tryDispatchBuiltin.1("[[", l60);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L259() else L258(i92, TRUE, l60, TRUE, dr48);
  L258(i94, r104, l63, r105, l64):
    __12 = ldf `[[` in base;
    r110 = dyn __12(l64, 2);
    goto L38(i94, r104, l63, r105, r110);
  L410():
    dx148 = getTryDispatchBuiltinValue(dr104);
    goto L73(i221, r236, l118, NULL, dx148);
  L411():
    isL25 = force? isL24;
    checkMissing(isL25);
    r247 = `+`(1.0, isL25);
    __32 = ldf `[` in base;
    r248 = dyn __32(X19, r247);
    goto L73(i225, r241, l120, r242, r248);
  D50():
    deopt 241 [i96, r108, l66, dx75, r109];
  L259():
    dx74 = getTryDispatchBuiltinValue(dr48);
    goto L38(i92, TRUE, l60, TRUE, dx74);
  L260():
    r111 = dyn attr__8(dx75, NULL, "leaf", r109);
    check L261() else D51();
  D51():
    deopt 244 [i96, r108, l66, r111];
  L261():
    c38 = `is.object`(l66);
    if c38 then L262() else L263(i96, r108, l66);
  L39(i100, r115, dx77):
    st zk = dx77;
    l69 = ld zk;
    c39 = `is.object`(l69);
    if c39 then L265() else L266(i100, r115, l69, r115, l69);
  L262():
    dr50 = tryDispatchBuiltin.0("[[<-", l66, r111);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L264() else L263(i96, r108, dr50);
  L263(i98, r113, l68):
    ____6 = ldf `[[<-` in base;
    r116 = dyn ____6(l68, r111, 2);
    goto L39(i98, r113, r116);
  L40(i104, r123, l75, r124, dx79):
    attr__9 = ldf `attr<-`;
    check L268() else D52();
  L264():
    dx76 = getTryDispatchBuiltinValue(dr50);
    goto L39(i96, r108, dx76);
  L265():
    dr52 = tryDispatchBuiltin.1("[[", l69);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L267() else L266(i100, r115, l69, r115, dr52);
  L266(i102, r119, l72, r120, l73):
    __13 = ldf `[[` in base;
    r125 = dyn __13(l73, 1);
    goto L40(i102, r119, l72, r120, r125);
  D52():
    deopt 255 [i104, r123, l75, dx79, r124];
  L267():
    dx78 = getTryDispatchBuiltinValue(dr52);
    goto L40(i100, r115, l69, r115, dx78);
  L268():
    r126 = dyn attr__9(dx79, NULL, "leaf", r124);
    check L269() else D53();
  D53():
    deopt 258 [i104, r123, l75, r126];
  L269():
    c40 = `is.object`(l75);
    if c40 then L270() else L271(i104, r123, l75);
  L41(i108, r130, dx81):
    st zk = dx81;
    goto L42(i108);
  L270():
    dr54 = tryDispatchBuiltin.0("[[<-", l75, r126);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L272() else L271(i104, r123, dr54);
  L271(i106, r128, l77):
    ____7 = ldf `[[<-` in base;
    r131 = dyn ____7(l77, r126, 1);
    goto L41(i106, r128, r131);
  L272():
    dx80 = getTryDispatchBuiltinValue(dr54);
    goto L41(i104, r123, dx80);
  }
}