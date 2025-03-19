pipeline {
    agent any
    
    stages {
        stage('Checkout') {
            steps {
                git 'https://github.com/Kymelios/Git_learning.git'
            }
        }
        
        stage('Build') {
            steps {
                sh 'make'
            }
        }
        
        stage('Test') {
            steps {
                sh './test_suite'
            }
        }
    }
}
