# Prdiction Guide

## Create Environment

Create project and virtual environement : tutorial-env
```bash
python -m venv tutorial-env
```

Choose directory tutorial-env
```bash
cd tutorial-env
```

On Windows, run:
```bash
Scripts\activate
```

On Unix or MacOS, run:
```bash
source Scripts\activate
```

make your project folder
```bash
mkdir prediction
cd prediction
```

## Make Requirement.txt to save your dependencies
choose your folder project (not your environment, your project folder is always inside your environment folder)
```bash
cd prediction
```
เมื่อต้องการบันทึก dependency ลงไฟล์ requirements.txt
```bash
pip freeze > requirements.txt
```

เมื่อต้องการ install dependency จาก requirement.txt
```bash
pip install -r requirements.txt
```

dependency ที่พื้นฐานที่จำเป็นต้องใช้งาน สำหรับ โปรเจคนี้
```bash
pip install pandas
pip install notebook
pip install matplotlib
pip install statsmodels
#run
jupyter notebook
```

run notebook
```bash
jupyter notebook
```

## Clone project and run again in another compouter

crete a new virtual environment
- see above

clone project with your git inside your environment folder
```bash
git clone https://github.com/arc6828/prediction
cd prediction
```

re-install your dependencies from requirements.txt
```bash
pip install -r requirements.txt
```
