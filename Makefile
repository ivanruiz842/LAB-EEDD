.PHONY: clean All

All:
	@echo "----------Building project:[ ejercicio03 - Debug ]----------"
	@cd "ejercicio03" && "$(MAKE)" -f  "ejercicio03.mk"
clean:
	@echo "----------Cleaning project:[ ejercicio03 - Debug ]----------"
	@cd "ejercicio03" && "$(MAKE)" -f  "ejercicio03.mk" clean
